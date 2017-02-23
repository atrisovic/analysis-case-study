//#include "../Step5_fitting/RootHeaders.h"
#include "../Step5_fitting/RooFitHeaders.h"
#include "iostream"
#include "fstream"

using namespace RooFit;
using namespace TMath;
using namespace std;

// Get the data
//TFile f1("/afs/cern.ch/work/a/atrisovi/public/Analysis/Step3_MC/MC_D2PiMuMu12_MagDown_NTuples_fin.root","read"); 
TFile f1("/afs/cern.ch/work/a/atrisovi/public/Analysis/Step5_Fitting/D2hMuMu12_MagU_2PiMuMuOS_NTuple_Reduced.root","read");


RooAddPdf* CreateModel(RooRealVar* D_MM) {

  // Signal model for D+
  RooRealVar *mean_D = new RooRealVar("m_{D}", "m_{D}", 1869.6, 1850.0, 1890.0, "MeV/c^{2}");
  RooRealVar *sigma = new RooRealVar("sigma", "sigma", 10., 0., 40.0, "MeV/c^{2}");
  RooGaussian *signal_model = new RooGaussian("signal_model", "signal_model", *D_MM, *mean_D, *sigma);

  // Exponential background model
  RooRealVar *K_CombBG = new RooRealVar("K_{CombBG}", "K_{CombBG}", -0.006, -1, 0.1, "c^{2}/MeV");
  RooExponential *CombBG_PDF = new RooExponential("CombBG_PDF", "CombBG_PDF", *D_MM, *K_CombBG);

  RooRealVar *nSig = new RooRealVar("nSig", "Signal Yield", 1.e4, 0., 1e7);
  RooRealVar *nBkg = new RooRealVar("nBkg", "Background Yield", 1.e5, 0., 1e7);

  return new RooAddPdf("Model", "Model", RooArgList(*signal_model, *CombBG_PDF), RooArgList(*nSig, *nBkg));
}


RooFitResult* Fit_D2Pimumu_Mass( RooDataSet* Data, RooAddPdf* Model, double BDT_cut) {

  RooDataSet* ReducedData = (RooDataSet*)Data->reduce(TString("BDT>"+to_string(BDT_cut)));
  RooFitResult* FitResult = Model->fitTo(*ReducedData, Range(1775,1925), Extended(true), Save(true));
  return FitResult;

}


double InvMass_mumu(RooDataSet* Data, int i) {

  double MuMass = 105.66; //PDG

  TLorentzVector* MuPlus = new TLorentzVector();
  TLorentzVector* MuMinus = new TLorentzVector();

  double MuPlus_Px = Data->get(i)->getRealValue("muplus_PX");
  double MuPlus_Py = Data->get(i)->getRealValue("muplus_PY");
  double MuPlus_Pz = sqrt(Data->get(i)->getRealValue("muplus_P")*Data->get(i)->getRealValue("muplus_P") - Data->get(i)->getRealValue("muplus_PT")*Data->get(i)->getRealValue("muplus_PT"));
 
  double MuMinus_Px = Data->get(i)->getRealValue("muminus_PX");
  double MuMinus_Py = Data->get(i)->getRealValue("muminus_PY");
  double MuMinus_Pz = sqrt(Data->get(i)->getRealValue("muminus_P")*Data->get(i)->getRealValue("muminus_P") - Data->get(i)->getRealValue("muminus_PT")*Data->get(i)->getRealValue("muminus_PT"));

  double MuPlus_Psq = MuMinus_Px*MuMinus_Px + MuMinus_Py*MuMinus_Py + MuMinus_Pz*MuMinus_Pz;
  double MuMinus_Psq = MuMinus_Px*MuMinus_Px + MuMinus_Py*MuMinus_Py + MuMinus_Pz*MuMinus_Pz;
  
  double MuPlus_E = sqrt(MuPlus_Psq + MuMass*MuMass); 
  double MuMinus_E = sqrt(MuMinus_Psq + MuMass*MuMass); 
 
  MuPlus->SetPxPyPzE(MuPlus_Px, MuPlus_Py, MuPlus_Pz, MuPlus_E);
  MuMinus->SetPxPyPzE(MuMinus_Px, MuMinus_Py, MuMinus_Pz, MuMinus_E);
  
  TLorentzVector MuMu = *MuPlus + *MuMinus;

  return MuMu.M();

}


void Plot(int numIters, Double_t BDT_cuts[numIters], Double_t Significance_FoM[numIters]) {
  TGraph * gr = new TGraph(numIters, BDT_cuts, Significance_FoM);
 
  gr->SetTitle("Optimisation");
  gr->GetXaxis()->SetTitle("BDT>");
  gr->GetYaxis()->SetTitle("Significance FoM");

  TCanvas c("c", "c", 800, 800);
  gr->Draw("AP");
  c.SaveAs("Optimisation.pdf");

}



void Optimise() 
{
  cout << "Hello there" << endl;
  
  // Limits
  Double_t MassMin = 1800.0;
  Double_t MassMax = 2050.0;

  // Get the tree
  TTree* D2PimumuTree = (TTree*) f1.Get("D2PimumuOSTuple/DecayTree"); 
 
  // Disable all branches and only enable ones we need
  D2PimumuTree->SetBranchStatus("*",0);
  D2PimumuTree->SetBranchStatus("D_MM",1);
  D2PimumuTree->SetBranchStatus("BDT",1);

  // Create the dataset variables
  RooRealVar* D_MM = new RooRealVar("D_MM", "D_MM", MassMin, MassMax, "MeV/c^{2}");
  RooRealVar* BDT = new RooRealVar("BDT", "BDT", 0.10, 0.25);

  // Create the RooArgSet that holds the variables
  RooArgSet D2PimumuSet(*D_MM, *BDT);
  RooDataSet *All_Data = new RooDataSet("All_Data", "All_Data", D2PimumuSet, Import(*D2PimumuTree));
  All_Data->Print();

  // Select m(mumu) range consistent with phi (normalisation channel): 850 − 1250 MeV
  // NB high-m(μ+ μ− ): 1250 − 2000 MeV
  //RooRealVar *MuMuMass = new RooRealVar("MuMuMass", "MuMuMass", 1000., 0., 1e6);
  //All_Data->addColumn(*MuMuMass);
  //for (int i=0; i<All_Data->numEntries(); i++){
  //  MuMuMass->setVal(InvMass_mumu(All_Data, i));
  //  All_Data->add(RooArgSet(*MuMuMass));
  //}
  
  
  // Create simple model
  RooAddPdf *Model = CreateModel(D_MM);

  int numIters = 20;
  double BDT_cut = 0.10;
  double BDT_increment = 0.005;

  Double_t BDT_cuts[numIters];
  Double_t Significance_FoM[numIters];
  //Double_t SignalEfficiency[numIters];
  //Double_t BackgroundRejection[numIters];
    
  for (int i=0; i<numIters; i++) {
    
    // Perform the fit
    RooFitResult* FitResult = Fit_D2Pimumu_Mass(All_Data, Model, BDT_cut);
   
    // Determine background in D+ signal window +/- 25 MeV around peak
    D_MM->setRange("signal", 1869.62-25, 1869.62+25);
    RooExponential* bkg_model = (RooExponential*)Model->pdfList().find("CombBG_PDF");
    bkg_model->Print();
    double B_norm = bkg_model->createIntegral(RooArgSet(*D_MM), RooArgSet(*D_MM), "signal")->getVal()*Model->getVariables()->getRealValue("nBkg");
    double S_norm = Model->getVariables()->getRealValue("nSig");

    // Assume phase space coefficient between m(mumu) regions only dependent on window size
    double B_sig = B_norm * (2000-1250)/(1250-850);
    // Scale signal yield by ratio of branching fractions of normalisation channel and expected BF in signal channel
    // BF(D+ → π + (φ → μ+ μ− )) = (1.56±0.12)×10−6 (thesis page 80)
    // SM prediction:  BF(D+ → π + μ+ μ− ) = 3.7×10−9 (thesis page 48)
    double S_sig = S_norm * (3.7e-9)/(1.56e-6);

    // Use significance FoM S/sqrt(S+B)
    Significance_FoM[i] = S_sig/sqrt(S_sig+B_sig);
    BDT_cuts[i] = BDT_cut;
   
    BDT_cut = BDT_cut + BDT_increment;
  }

  Plot(numIters, BDT_cuts, Significance_FoM);

} // Do something!

