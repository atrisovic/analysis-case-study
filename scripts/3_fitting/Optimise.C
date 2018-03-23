//#include "../Step5_fitting/RootHeaders.h"
#include "RooFitHeaders.h"
#include "iostream"
#include "fstream"
#include <math.h>

using namespace RooFit;
using namespace TMath;
using namespace std;

// Set to true to make plots of the mass distribution for each BDT and PID cut
bool PlotMass = true;
string bachelor = "Pi";

// Get the data
//TFile f1 = TFile();
//if (bachelor=="Pi"){TFile f1(TString("/eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts/D2"+bachelor+"MuMuOS.root"), "read");}
//if (bachelor=="K"){TFile f1("/eos/lhcb/user/a/atrisovi/analysis-case-study/Step2_getMonteCarlo/D2Kmumu/ReduceMCKmumu/MCKMuMu-all.root", "read");}

TFile f1("../1_preselection/D2PiMuMuOS.root", "read");
///eos/lhcb/user/a/atrisovi/analysis-case-study/Step2_getMonteCarlo/D2Kmumu/D2KMuMuOS.root", "read");
//TFile f1(TString("/eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts/D2"+bachelor+"MuMuOS.root"), "read");

RooAddPdf* CreateModel(RooRealVar* D_MM, RooRealVar* nSig, RooRealVar* nBkg) {

  // Signal model for D+
  RooRealVar *mean_D = new RooRealVar("m_{D}", "m_{D}", 1869.6, 1850.0, 1890.0, "MeV/c^{2}");
  RooRealVar *sigma = new RooRealVar("sigma", "sigma", 10., 0., 40.0, "MeV/c^{2}");
  RooGaussian *signal_model = new RooGaussian("signal_model", "signal_model", *D_MM, *mean_D, *sigma);

  // Exponential background model
  RooRealVar *K_CombBG = new RooRealVar("K_{CombBG}", "K_{CombBG}", -0.001, -1, 0.1, "c^{2}/MeV");
  RooExponential *CombBG_PDF = new RooExponential("CombBG_PDF", "CombBG_PDF", *D_MM, *K_CombBG);

  return new RooAddPdf("Model", "Model", RooArgList(*signal_model, *CombBG_PDF), RooArgList(*nSig, *nBkg));
}


RooFitResult* Fit_D2Pimumu_Mass( RooRealVar* D_MM, RooDataSet* Data, RooAddPdf* Model, double BDT_cut, double PID_cut) {

  // Apply PID and BDT cuts
  RooDataSet* ReducedData = (RooDataSet*)Data->reduce(TString("BDT>"+to_string(BDT_cut)+"&&muplus_PIDmu>"+to_string(PID_cut)+"&&muminus_PIDmu>"+to_string(PID_cut)));
  RooFitResult* FitResult = Model->fitTo(*ReducedData, Range(1775,1925), Extended(true), Save(true), Strategy(1));
  // Try fit again at new starting values and with Strategy(0) if fit fails
  if (FitResult->covQual()!=3) {
      Model->getVariables()->setRealValue("nSig", 1.e3);    
      Model->getVariables()->setRealValue("nBkg", 1.e4);    
      Model->getVariables()->setRealValue("K_{CombBG}", -0.001);    
      Model->getVariables()->setRealValue("m_{D}", 1869.6);    
      Model->getVariables()->setRealValue("sigma", 10.);    
      RooFitResult* FitResult = Model->fitTo(*ReducedData, Range(1775,1925), Extended(true), Save(true), Strategy(0));
  }

  // Plot mass distribution if PlotMass flag is set 
  if (PlotMass) {
    D_MM->setRange("fit_range", 1775,1925);
      
    RooPlot* frame = D_MM->frame(1775,1925, 100) ;
    ReducedData->plotOn(frame);
    Model->plotOn(frame, NormRange("fit_range"), Components("CombBG_PDF"), LineColor(3), LineStyle(2));
    Model->plotOn(frame, NormRange("fit_range"), Components("signal_model"), LineColor(2), LineStyle(2));
    Model->plotOn(frame, NormRange("fit_range"));

    TCanvas c("c", "c", 800, 800);
    frame->Draw();
    c.SaveAs(TString("mass_plots/optimisation_BDT_"+to_string(BDT_cut)+"_PID_"+to_string(PID_cut)+"_"+bachelor+".pdf"));
  }

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
    c.SaveAs(TString("MuMuMass_"+bachelor+".pdf"));
}


void Plot(int numIters, Double_t BDT_cuts[numIters], Double_t Significance_FoM[numIters], Double_t BDT_cuts_err[numIters], Double_t Significance_FoM_err[numIters]) {
  TGraphErrors * gr = new TGraphErrors(numIters, BDT_cuts, Significance_FoM, BDT_cuts_err, Significance_FoM_err);
 
  gr->SetTitle("Optimisation");
  gr->GetXaxis()->SetTitle("BDT>");
  gr->GetYaxis()->SetTitle("Significance FoM");

  TCanvas c("c", "c", 800, 800);
  gr->Draw("AP");
  c.SaveAs(TString("Optimisation_"+bachelor+".pdf"));

}

void Plot(TH2D* h) {
  TCanvas c("c", "c", 800, 800);
  h->SetTitle("Significance; BDT cut; PIDmu cut");
  h->SetStats(0);
  h->Draw("COLZ");
  c.SaveAs(TString("2D_Optimisation_"+bachelor+".pdf"));
}


void Optimise() 
{
  cout << "Hello there" << endl;
  
  // Limits
  Double_t MassMin = 1775.0;
  Double_t MassMax = 2050.0;

  // Get the tree
  TTree* D2PimumuTree = (TTree*) f1.Get("D2PimumuOSTuple/DecayTree"); 
  //TTree* D2PimumuTree = (TTree*) f1.Get("D2KmumuOSTuple/DecayTree"); 
 
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
  if (bachelor=="Pi") {
    D2PimumuTree->SetBranchStatus("piplus_PIDmu",1);
    D2PimumuTree->SetBranchStatus("piplus_PIDK",1);
  }

  double BDT_initial;
  if (bachelor=="Pi") { BDT_initial=0.0; }
  if (bachelor=="K") { BDT_initial=0.0; }

  // Create the dataset variables
  RooRealVar* D_MM = new RooRealVar("D_MM", "m(D)", MassMin, MassMax, "MeV/c^{2}");
  RooRealVar* BDT = new RooRealVar("BDT", "BDT", 0.0, 0.25);
  RooRealVar* muplus_PX = new RooRealVar("muplus_PX", "muplus_PX", -1e9, 1e9);
  RooRealVar* muplus_PY = new RooRealVar("muplus_PY", "muplus_PY", -1e9, 1e9);
  RooRealVar* muplus_PZ = new RooRealVar("muplus_PZ", "muplus_PZ", -1e9, 1e9);
  RooRealVar* muminus_PX = new RooRealVar("muminus_PX", "muminus_PX", -1e9, 1e9);
  RooRealVar* muminus_PY = new RooRealVar("muminus_PY", "muminus_PY", -1e9, 1e9);
  RooRealVar* muminus_PZ = new RooRealVar("muminus_PZ", "muminus_PZ", -1e9, 1e9);
  RooRealVar* muplus_PIDmu = new RooRealVar("muplus_PIDmu", "muplus_PIDmu", -1e9, 1e9);
  RooRealVar* muminus_PIDmu = new RooRealVar("muminus_PIDmu", "muminus_PIDmu", -1e9, 1e9);
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

  RooDataSet* Data_Reduced = (RooDataSet*)All_Data->reduce("MuMuMass>850&&MuMuMass<1250");
  Data_Reduced->Print();

  RooRealVar *nSig = new RooRealVar("nSig", "Signal Yield", 1.e3, 0., 1e6);
  RooRealVar *nBkg = new RooRealVar("nBkg", "Background Yield", 1.e4, 0., 1e6);
  
  // Create simple model
  RooAddPdf *Model = CreateModel(D_MM, nSig, nBkg);

  int numIters = 10;
  double BDT_cut = 0.0;
  double BDT_increment = 0.02;

  int numIters_PID = 12;
  double PID_cut = -2;
  double PID_increment = 0.5;

  TH2D *hBDT_PID = new TH2D("hBDT_PID", "hBDT_PID", numIters, BDT_cut, BDT_cut+numIters*BDT_increment, numIters_PID, PID_cut, PID_cut+numIters_PID*PID_increment); 
  hBDT_PID->Sumw2();
  
  //Double_t BDT_cuts[numIters];
  //Double_t BDT_cuts_err[numIters];
  //Double_t Significance_FoM[numIters];
  //Double_t Significance_FoM_err[numIters];
    
  for (int i=0; i<numIters; i++) {
    
    double PID_cut = -2;
    nSig->setVal(1.e3);
    nBkg->setVal(1.e4);
    
    for (int j=0; j<numIters_PID; j++) {
      
      //Model->getVariables()->setRealValue("K_{CombBG}", -0.006);    
      //Model->getVariables()->setRealValue("m_{D}", 1869.6);    
      //Model->getVariables()->setRealValue("sigma", 10.);    

      // Perform the fit
      RooFitResult* FitResult = Fit_D2Pimumu_Mass(D_MM, Data_Reduced, Model, BDT_cut, PID_cut);

      // Determine background in D+ signal window +/- 25 MeV around peak
      D_MM->setRange("signal", 1869.62-25, 1869.62+25);
      RooExponential* bkg_model = (RooExponential*)Model->pdfList().find("CombBG_PDF");
      bkg_model->Print();
      double B_norm = bkg_model->createIntegral(RooArgSet(*D_MM), RooArgSet(*D_MM), "signal")->getVal()*nBkg->getVal();
      double S_norm = nSig->getVal(); 
      double B_norm_err = bkg_model->createIntegral(RooArgSet(*D_MM), RooArgSet(*D_MM), "signal")->getVal()*nBkg->getError();
      double S_norm_err = nSig->getError();

      // Assume phase space coefficient between m(mumu) regions only dependent on window size
      double B_sig = B_norm * (2000-1250)/(1250-850);
      double B_sig_err = B_norm_err * (2000-1250)/(1250-850);
      // Scale signal yield by ratio of branching fractions of normalisation channel and expected BF in signal channel
      // BF(D+ → π + (φ → μ+ μ− )) = (1.56±0.12)×10−6 (thesis page 80)
      // SM prediction:  BF(D+ → π + μ+ μ− ) = 3.7×10−9 (thesis page 48)
      double S_sig = S_norm * (3.7e-9)/(1.56e-6);
      double S_sig_err = S_norm_err * (3.7e-9)/(1.56e-6);

      // Use significance FoM S/sqrt(S+B)
      double Significance_FoM = S_sig/sqrt(S_sig+B_sig);
      
      // Shift cuts to avoid filling at the bin boundary
      hBDT_PID->Fill(BDT_cut+1.*BDT_increment/2, PID_cut+1.*PID_increment/2, Significance_FoM);
      
      //Significance_FoM = S_sig/sqrt(S_sig+B_sig);
      //Significance_FoM_err[i] = sqrt( pow((S_sig+2*B_sig)*S_sig_err,2)/(2*pow(S_sig+B_sig,3)) + pow(S_sig*B_sig_err,2)/(4*pow(S_sig+B_sig,3)) );
      //BDT_cuts[i] = BDT_cut;
      //BDT_cuts_err[i] = 0;
   
      PID_cut = PID_cut + PID_increment;

    }
    BDT_cut = BDT_cut + BDT_increment;
  }

  //Plot(numIters, BDT_cuts, Significance_FoM, BDT_cuts_err, Significance_FoM_err);
  Plot(hBDT_PID);

} // Do something!
