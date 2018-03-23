#include "RooFitHeaders.h"
#include "iostream"
#include "fstream"
#include <math.h>

using namespace RooFit;
using namespace TMath;
using namespace std;

// Get the data
TFile f1("../1_preselection/D2PiMuMuOS.root", "read");

RooAddPdf* CreateModel(RooRealVar* D_MM, RooRealVar* nSig_Dp, RooRealVar* nSig_Ds, RooRealVar* nBkg) {

  // Signal model for D+
  RooRealVar *mean_Dp = new RooRealVar("m_{D^+}", "m_{D^+}", 1869.6, 1850.0, 1890.0, "MeV/c^{2}");
  RooRealVar *sigma1_Dp = new RooRealVar("sigma1_Dp", "sigma1_Dp", 5., 0., 20.0, "MeV/c^{2}");
  RooRealVar *sigma2_Dp = new RooRealVar("sigma2_Dp", "sigma2_Dp", 10., 5., 40.0, "MeV/c^{2}");
  RooRealVar *a1_Dp = new RooRealVar("a1_Dp", "a1_Dp", 1., 0.1, 100.);
  RooRealVar *a2_Dp = new RooRealVar("a2_Dp", "a2_Dp", -5., -100, -.1);
  RooRealVar *n_Dp = new RooRealVar("n_Dp", "n_Dp", 2.);
  RooRealVar *cbf_Dp = new RooRealVar("cbf_Dp", "cbf_Dp", 0.5, 0., 1.);

  RooCBShape *cb1_Dp = new RooCBShape("cb1_Dp", "D^{+} cb1", *D_MM, *mean_Dp, *sigma1_Dp, *a1_Dp, *n_Dp);
  RooCBShape *cb2_Dp = new RooCBShape("cb2_Dp", "D^{+} cb2", *D_MM, *mean_Dp, *sigma2_Dp, *a2_Dp, *n_Dp);

  RooAddPdf *signal_model_Dp = new RooAddPdf("signal_model_Dp", "D^+ sum of CBs", *cb1_Dp, *cb2_Dp, *cbf_Dp);


  // Signal model for Ds
  RooRealVar *mean_Ds = new RooRealVar("m_{D^+_s}", "m_{D^+_s}", 1968.5, 1950.0, 1990.0, "MeV/c^{2}");
  RooRealVar *sigma1_Ds = new RooRealVar("sigma1_Ds", "sigma1_Ds", 5., 0., 20.0, "MeV/c^{2}");
  RooRealVar *sigma2_Ds = new RooRealVar("sigma2_Ds", "sigma2_Ds", 10., 10., 40.0, "MeV/c^{2}");
  RooRealVar *a1_Ds = new RooRealVar("a1_Ds", "a1_Ds", 1., 0.1, 100.);
  RooRealVar *a2_Ds = new RooRealVar("a2_Ds", "a2_Ds", -5, -100, -.1);
  RooRealVar *n_Ds = new RooRealVar("n_Ds", "n_Ds", 2.);
  RooRealVar *cbf_Ds = new RooRealVar("cbf_Ds", "cbf_Ds", 0.5, 0., 1.);

  RooCBShape *cb1_Ds = new RooCBShape("cb1_Ds", "D^{+} cb1", *D_MM, *mean_Ds, *sigma1_Ds, *a1_Ds, *n_Ds);
  RooCBShape *cb2_Ds = new RooCBShape("cb2_Ds", "D^{+} cb2", *D_MM, *mean_Ds, *sigma2_Ds, *a2_Ds, *n_Ds);

  RooAddPdf *signal_model_Ds = new RooAddPdf("signal_model_Ds", "D^+_s sum of CBs", *cb1_Ds, *cb2_Ds, *cbf_Ds);
  
  
  // Exponential background model
  RooRealVar *K_CombBG = new RooRealVar("K_{CombBG}", "K_{CombBG}", -0.001, -1, 1, "c^{2}/MeV");
  RooExponential *CombBG_PDF = new RooExponential("CombBG_PDF", "CombBG_PDF", *D_MM, *K_CombBG);

  return new RooAddPdf("Model", "Model", RooArgList(*signal_model_Dp, *signal_model_Ds, *CombBG_PDF), RooArgList(*nSig_Dp, *nSig_Ds, *nBkg));
}


RooFitResult* Fit_D2Pimumu_Mass( RooDataSet* Data, RooAddPdf* Model) {

  RooFitResult* FitResult = Model->fitTo(*Data, Range(1810,2040), Extended(true), Save(true), Strategy(1));

  return FitResult;

}

void PlotMass( RooRealVar* D_MM, RooDataSet* Data, RooAddPdf* Model) {
  D_MM->setRange("fit_range", 1810,2040);
    
  RooPlot* frame = D_MM->frame(1810,2040, 100) ;
  Data->plotOn(frame);
  Model->plotOn(frame, NormRange("fit_range"), Components("CombBG_PDF"), LineColor(3), LineStyle(2));
  Model->plotOn(frame, NormRange("fit_range"), Components("signal_model_Dp"), LineColor(2), LineStyle(2));
  Model->plotOn(frame, NormRange("fit_range"), Components("signal_model_Ds"), LineColor(2), LineStyle(2));
  Model->plotOn(frame, NormRange("fit_range"));

  
  RooHist* hpull = frame->pullHist();
  RooPlot* frame_pulls = D_MM->frame(1810,2040, 100) ;
  frame_pulls->addPlotable(hpull,"P");
  frame_pulls->SetTitle("");
  frame_pulls->GetYaxis()->SetTitle("Pulls");
  frame_pulls->GetYaxis()->SetTitleOffset(0.3);
  frame_pulls->GetYaxis()->SetTitleSize(0.14);
  frame_pulls->GetYaxis()->SetLabelSize(0.1);
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
  int ipad=1; TPad* p1=(TPad*)c.cd(ipad); p1->SetPad(0., 0.21, 1., 1.); frame->Draw();
  ipad++; TPad* p2=(TPad*)c.cd(ipad); p2->SetPad(0., 0., 1., 0.2); frame_pulls->Draw(); line1.Draw(); line2.Draw();
  c.SaveAs("PhiModels.pdf");

  return;
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



void ModelFixing() 
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

  RooDataSet* Data_Reduced = (RooDataSet*)All_Data->reduce("MuMuMass>850&&MuMuMass<1250");
  Data_Reduced->Print();

  RooRealVar *nSig_Dp = new RooRealVar("nSig_Dp", "D+ Signal Yield", 2.e4, -1.e3, 1e6);
  RooRealVar *nSig_Ds = new RooRealVar("nSig_Ds", "Ds Signal Yield", 2.e4, -1.e3, 1e6);
  RooRealVar *nBkg = new RooRealVar("nBkg", "Background Yield", 2.e4, 0., 1e6);
  
  // Create fit model
  RooAddPdf *Model = CreateModel(D_MM, nSig_Dp, nSig_Ds, nBkg);

  // Perform the fit
  RooFitResult* FitResult = Fit_D2Pimumu_Mass(Data_Reduced, Model);
  PlotMass(D_MM, Data_Reduced, Model);

  RooWorkspace *w = new RooWorkspace("w");
  w->import(*Model);
  w->writeToFile("PhiModels.root");




  /***************************** sPlot ***************************/
  
  //// sPlot requires non yields to be fixed
  //RooArgSet* parameters = (RooArgSet*)Model->getParameters(Data_Reduced);
  ////parameters->Print();
  //parameters->remove(*nBkg);
  //parameters->remove(*nSig_Dp);
  //parameters->remove(*nSig_Ds);
  ////parameters->Print();

  //TIterator* iter = parameters->createIterator();
  //for(int i=0; i<parameters->getSize(); i++){
  //  RooRealVar* var = (RooRealVar*)iter->Next();
  //  var->setConstant(true);
  //  //cout << var->GetName() << endl;
  //}
  //
  //RooStats::SPlot* sData_Dp = new RooStats::SPlot("sData_Dp","sData_Dp", *Data_Reduced, Model, RooArgList(*nSig_Dp,*nBkg) );

} // Do something!

