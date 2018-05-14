#include "RooFitHeaders.h"
#include "iostream"
#include "fstream"
#include <math.h>

using namespace RooFit;
using namespace TMath;
using namespace std;

// Get the data
TFile f1("../1_preselection/D2PiMuMuOS.root", "read");

RooWorkspace* GetWorkspace(std::string file_location) {

  TFile *tf = new TFile("PhiModels.root");
  RooWorkspace* w = (RooWorkspace*)tf->Get("w");
  tf->Close();
  w->Print();
    
  return w;

}


RooFitResult* Fit_D2Pimumu_Mass( RooRealVar* D_MM, RooRealVar* nSig_Dp, RooRealVar* nSig_Ds, RooDataSet* Data, RooAddPdf* Model, string qsq_bin_label) {

  // Set initial value of yields to 0 when fitting to dimuon q^2 bins
  if (qsq_bin_label=="low_dimuon_signal"||qsq_bin_label=="high_dimuon_signal"){
    nSig_Dp->setVal(0.);
    nSig_Ds->setVal(0.);
  }
  
  RooFitResult* FitResult = Model->fitTo(*Data, Range(1810,2040), Extended(true), Save(true), Strategy(1));

  D_MM->setRange("fit_range", 1810,2040);
    
  RooPlot* frame = D_MM->frame(1810,2040, 100) ;
  Data->plotOn(frame);
  Model->plotOn(frame, Range("fit_range"), NormRange("fit_range"), Components("CombBG_PDF"), LineColor(3), LineStyle(2));
  Model->plotOn(frame, Range("fit_range"), NormRange("fit_range"), Components("signal_model_Dp"), LineColor(2), LineStyle(2));
  Model->plotOn(frame, Range("fit_range"), NormRange("fit_range"), Components("signal_model_Ds"), LineColor(2), LineStyle(2));
  Model->plotOn(frame, Range("fit_range"), NormRange("fit_range"));

  
  RooHist* hpull = frame->pullHist();
  RooPlot* frame_pulls = D_MM->frame(1810,2040, 100) ;
  frame_pulls->addPlotable(hpull,"P");
  frame_pulls->SetTitle("");
  //frame_pulls->GetYaxis()->SetTitle("Pulls");
  //frame_pulls->GetYaxis()->SetTitleOffset(0.3);
  //frame_pulls->GetYaxis()->SetTitleSize(0.14);
  frame_pulls->GetYaxis()->SetLabelSize(0);
  frame_pulls->GetYaxis()->SetNdivisions(503);
  frame_pulls->GetYaxis()->SetRangeUser(-5,5);
  frame_pulls->GetXaxis()->SetTitle("");
  frame_pulls->GetXaxis()->SetLabelSize(0);
  
  TLine line1(1810,2,2040,2);
  line1.SetLineColor(15);
  line1.SetLineStyle(7); 
  
  TLine line2(1810,-2,2040,-2);
  line2.SetLineColor(15);
  line2.SetLineStyle(7);

  
  TCanvas c("c", "c", 800, 800);
  c.Divide(1,2);
  TPad* p1=(TPad*)c.cd(1); p1->SetPad(0., 0.21, 1., 1.);
  frame->Draw();
  
  frame->SetTitle("Invariant mass of the two muons");
  TPad* p2=(TPad*)c.cd(2); p2->SetPad(0., 0., 1., 0.2);
  frame_pulls->Draw(); line1.Draw(); line2.Draw();
  c.SaveAs(TString("mass_fits/"+qsq_bin_label+".pdf"));

  return FitResult;
}



double InvMass_mumu(RooDataSet* Data, int i) {
  // Calculates the invariant mass of the two muons
  // Use to select the normalisation channel phi->mumu for optimisation
  // Note phi mass peak ~ 1000 MeV in m(mumu) distribution

  double MuMass = 105.66; //PDG

  TLorentzVector* MuPlus = new TLorentzVector();
  TLorentzVector* MuMinus = new TLorentzVector();

  double MuPlus_Px = Data->get(i)->getRealValue("muplus_PX");
  double MuPlus_Py = Data->get(i)->getRealValue("muplus_PY");
  double MuPlus_Pz = Data->get(i)->getRealValue("muplus_PZ"); 
 
  double MuMinus_Px = Data->get(i)->getRealValue("muminus_PX");
  double MuMinus_Py = Data->get(i)->getRealValue("muminus_PY");
  double MuMinus_Pz = Data->get(i)->getRealValue("muminus_PZ"); 

  double MuPlus_Psq = MuPlus_Px*MuPlus_Px + MuPlus_Py*MuPlus_Py + MuPlus_Pz*MuPlus_Pz;
  double MuMinus_Psq = MuMinus_Px*MuMinus_Px + MuMinus_Py*MuMinus_Py + MuMinus_Pz*MuMinus_Pz;
  
  double MuPlus_E = sqrt(MuPlus_Psq + MuMass*MuMass); 
  double MuMinus_E = sqrt(MuMinus_Psq + MuMass*MuMass); 
 
  MuPlus->SetPxPyPzE(MuPlus_Px, MuPlus_Py, MuPlus_Pz, MuPlus_E);
  MuMinus->SetPxPyPzE(MuMinus_Px, MuMinus_Py, MuMinus_Pz, MuMinus_E);
  
  TLorentzVector MuMu = *MuPlus + *MuMinus;
    
  return MuMu.M();

}

void PlotMuMuMass(RooRealVar* MuMuMass, RooDataSet* Data) {
    // Plot m(mumu)
    RooPlot* frame = MuMuMass->frame(250,2000,100);
    Data->plotOn(frame);
    frame->SetXTitle("m(#mu#mu) [MeV/c^2]");
    frame->SetTitleOffset(1.2, "Y");

    TCanvas c("c", "c", 800, 800);
    frame->Draw();
    c.SaveAs("MuMuMass.pdf");
}


void OSMassFit() 
{
  cout << "Hello there" << endl;
  
  // Limits
  Double_t MassMin = 1775.0;
  Double_t MassMax = 2050.0;

  // Get the tree
  TTree* D2PimumuTree = (TTree*) f1.Get("D2PimumuOSTuple/DecayTree"); 
  //TTree* D2PimumuTree = (TTree*) f1.Get("DecayTree"); 
 
  // Disable all branches and only enable ones we need
  D2PimumuTree->SetBranchStatus("*",0);
  D2PimumuTree->SetBranchStatus("D_MM",1);
  D2PimumuTree->SetBranchStatus("BDT",1);
  D2PimumuTree->SetBranchStatus("muplus_PX",1);
  D2PimumuTree->SetBranchStatus("muplus_PY",1);
  D2PimumuTree->SetBranchStatus("muplus_PZ",1);
  D2PimumuTree->SetBranchStatus("muminus_PX",1);
  D2PimumuTree->SetBranchStatus("muminus_PY",1);
  D2PimumuTree->SetBranchStatus("muminus_PZ",1);
  D2PimumuTree->SetBranchStatus("muplus_PIDmu",1);
  D2PimumuTree->SetBranchStatus("muminus_PIDmu",1);
  D2PimumuTree->SetBranchStatus("muplus_isMuon",1);
  D2PimumuTree->SetBranchStatus("muminus_isMuon",1);
  D2PimumuTree->SetBranchStatus("piplus_PIDmu",1);
  D2PimumuTree->SetBranchStatus("piplus_PIDK",1);

  // Create the dataset variables
  RooRealVar* D_MM = new RooRealVar("D_MM", "m(D)", MassMin, MassMax, "MeV/c^{2}");
  RooRealVar* BDT = new RooRealVar("BDT", "BDT", 0.1, 0.25);
  RooRealVar* muplus_PX = new RooRealVar("muplus_PX", "muplus_PX", -1e9, 1e9);
  RooRealVar* muplus_PY = new RooRealVar("muplus_PY", "muplus_PY", -1e9, 1e9);
  RooRealVar* muplus_PZ = new RooRealVar("muplus_PZ", "muplus_PZ", -1e9, 1e9);
  RooRealVar* muminus_PX = new RooRealVar("muminus_PX", "muminus_PX", -1e9, 1e9);
  RooRealVar* muminus_PY = new RooRealVar("muminus_PY", "muminus_PY", -1e9, 1e9);
  RooRealVar* muminus_PZ = new RooRealVar("muminus_PZ", "muminus_PZ", -1e9, 1e9);
  RooRealVar* muplus_PIDmu = new RooRealVar("muplus_PIDmu", "muplus_PIDmu", 2., 1e9);
  RooRealVar* muminus_PIDmu = new RooRealVar("muminus_PIDmu", "muminus_PIDmu", 2., 1e9);
  RooRealVar* piplus_PIDK = new RooRealVar("piplus_PIDK", "piplus_PIDK", -1e9, 0.);
  RooRealVar* piplus_PIDmu = new RooRealVar("piplus_PIDmu", "piplus_PIDmu", -1e9, 0.);
  RooRealVar* muplus_isMuon = new RooRealVar("muplus_isMuon", "muplus_isMuon", 0.9, 1.1);
  RooRealVar* muminus_isMuon = new RooRealVar("muminus_isMuon", "muminus_isMuon", 0.9, 1.1);

  // Create the RooArgSet that holds the variables
  RooArgSet D2PimumuSet(*D_MM, *BDT, *muplus_PX, *muplus_PY, *muplus_PZ, *muminus_PX, *muminus_PY, *muminus_PZ, *muplus_PIDmu);
  D2PimumuSet.add(*muminus_PIDmu);
  D2PimumuSet.add(*piplus_PIDK);
  D2PimumuSet.add(*piplus_PIDmu);
  D2PimumuSet.add(*muplus_isMuon);
  D2PimumuSet.add(*muminus_isMuon);
  RooDataSet *All_Data = new RooDataSet("All_Data", "All_Data", D2PimumuSet, Import(*D2PimumuTree));
  All_Data->Print();

  // Select m(mumu) range consistent with phi (normalisation channel): 850 − 1250 MeV
  // NB high-m(μ+μ−) (signal): 1250 − 2000 MeV
  RooRealVar *MuMuMass = new RooRealVar("MuMuMass", "MuMuMass", 1000., 0., 1e6);
  RooDataSet *MuMu_Data = new RooDataSet("MuMu_Data", "MuMu_Data", RooArgSet(*MuMuMass));
  for (int i=0; i<All_Data->numEntries(); i++){
    MuMuMass->setVal(InvMass_mumu(All_Data, i));
    MuMu_Data->add(RooArgSet(*MuMuMass));
  }
  All_Data->merge(MuMu_Data);
  PlotMuMuMass(MuMuMass, All_Data);

  // Create fit model
  RooWorkspace* w = GetWorkspace("PhiModels.root");
  
  RooAddPdf *Model = (RooAddPdf*)w->pdf("Model");
  RooRealVar *nSig_Dp = w->var("nSig_Dp");
  RooRealVar *nSig_Ds = w->var("nSig_Ds");
  RooRealVar *nBkg = w->var("nBkg");
  RooRealVar *K_CombBG = w->var("K_{CombBG}");
  
  // Fix signal model to fit on phi channel 
  RooArgSet* parameters = (RooArgSet*)Model->getParameters(All_Data);
  parameters->remove(*nBkg);
  parameters->remove(*nSig_Dp);
  parameters->remove(*nSig_Ds);
  parameters->remove(*K_CombBG);

  TIterator* iter = parameters->createIterator();
  for(int i=0; i<parameters->getSize(); i++){
    RooRealVar* var = (RooRealVar*)iter->Next();
    var->setConstant(true);
    }
  
  
  // Define q^2 bins (thesis page 70)
  int nBins = 5;
  std::vector<RooDataSet*> data_bin(nBins);
  std::vector <double> qsq_min_val(nBins), qsq_max_val(nBins);
  std::vector <string> qsq_bin_label(nBins);

  qsq_bin_label[0] = "low_dimuon_signal";
  qsq_bin_label[1] = "eta";
  qsq_bin_label[2] = "rho_omega";
  qsq_bin_label[3] = "phi";
  qsq_bin_label[4] = "high_dimuon_signal";

  qsq_min_val[0] = 250.; 
  qsq_min_val[1] = 525.; 
  qsq_min_val[2] = 565.; 
  qsq_min_val[3] = 850.; 
  qsq_min_val[4] = 1250.; 

  qsq_max_val[0] = 525.;
  qsq_max_val[1] = 565.;
  qsq_max_val[2] = 850.;
  qsq_max_val[3] = 1250.;
  qsq_max_val[4] = 2000.;

  for (int i=0; i<nBins; i++){
    cout << "bin number\t" << i << endl;
    data_bin[i] = (RooDataSet*)All_Data->reduce(TString("MuMuMass>"+to_string(qsq_min_val[i])+"&&MuMuMass<"+to_string(qsq_max_val[i])));

    // Perform the fit
    RooFitResult* FitResult = Fit_D2Pimumu_Mass(D_MM, nSig_Dp, nSig_Ds, data_bin[i], Model, qsq_bin_label[i]);
    Model->getParameters(*data_bin[i])->writeToFile(TString("fitresults/"+qsq_bin_label[i]+".txt"));

  }



} // Do something!

