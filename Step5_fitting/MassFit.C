#include "RootHeaders.h"
#include "RooFitHeaders.h"
#include "iostream"
#include "fstream"

using namespace RooFit;
using namespace TMath;
using namespace std;

// Get the data
TFile f1("D2hMuMu12_MagU_2PiMuMuOS_NTuple_Reduced.root","read");
//../Step3_MC/MC_D2PiMuMu12_MagDown_NTuples_fin.root","read"); 
//

void Fit_D2Pimumu_Mass( RooDataSet* Data, RooRealVar* D_MM, Double_t MassMin, Double_t MassMax, RooRealVar *FitResults[2],  TFile &fOutput, TString Title = "") {

  // Create the PDFs

  Int_t nFitParams = 9;
  Double_t nCands = Data->sumEntries();

  // D Double Crystal Ball
  // D mass mean 1871
  // From PDG D 1869
  // PDG D_s mass 1968.3
  RooRealVar mean_D("m_{D}", "m_{D}", 1869.6, 1850.0, 1890.0, "MeV/c^{2}");
  RooRealVar mean_Ds("m_{Ds}", "m_{Ds}", 1968.3, 1950.0, 1990.0, "MeV/c^{2}");
  RooRealVar sigma1("#sigma_{1}", "#sigma_{1}", 27.7, 10.0, 40.0, "MeV/c^{2}");
  RooRealVar sigma2("#sigma_{2}", "#sigma_{2}", 30.0, 10.0, 40.0, "MeV/c^{2}"); 
  RooRealVar alpha("#alpha", "#alpha", 2.020,.1,10.); 
  RooRealVar n("n", "n", 1.824,0.,10.);
  
  RooRealVar frac1("f_{1}", "f_{1}", 0.83, 0.0, 1.0);
  //D_CB
  RooCBShape D_CB("D_CB", "D_CB", *D_MM, mean_D, sigma1, alpha, n); 
  RooCBShape Ds_CB("Ds_CB", "Ds_CB", *D_MM, mean_Ds, sigma2, alpha, n); 

  //RooAddPdf D_PDF("D_PDF", "D_PDF", RooArgList(D_CB1, D_CB2), RooArgList(frac1));

  // Ds
  //RooConstVar deltaMBsBd("#Delta m_{s-d}", "#Delta m_{s-d}", Global_Delta_M_Bs_Bd);
  //RooFormulaVar mean_Ds( "m_{D_{s}}","m_{D_{s}}",RooArgList( mean_D, deltaMBsBd ));
   
 // RooCBShape Ds_CB1("Ds_CB1", "Ds_CB1", *D_MM, mean_Ds, sigma1, alpha, n); 
 // RooCBShape Ds_CB2("Ds_CB2", "Ds_CB2", *D_MM, mean_Ds, sigma2, alpha, n); 

  RooAddPdf D_Ds_PDF("Ds_PDF", "Ds_PDF", RooArgList(D_CB, Ds_CB), RooArgList(frac1));

  // Combinatorial Background
  RooRealVar K_CombBG("K_{CombBG}", "K_{CombBG}", -0.006, -0.1, 0.1, "c^{2}/MeV");//-1.0, 0.0, "c^{2}/MeV");
  RooExponential CombBG_PDF("CombBG_PDF", "CombBG_PDF", *D_MM, K_CombBG);
 
  //Ds, D+, BG
  // Yields
  RooRealVar D_Yield("N_D", "N_{D}", 0.10*nCands, 0.0, 2.0*nCands);
  RooRealVar CombBG_Yield("N_D Bg", "N_{D Bg}", 0.90*nCands, 0.0, 2.0*nCands);

  // Total PDFs
 RooAddPdf PDF("PDF", "PDF", RooArgList(D_Ds_PDF, CombBG_PDF), RooArgSet(D_Yield, CombBG_Yield ));
 
  // Perform the fit
  // PDF
  PDF.fitTo(*Data, Extended(1), RooFit::Save( true ), PrintEvalErrors(-1), Minos(kTRUE) );

  FitResults[0]=&D_Yield;
  FitResults[1]=&CombBG_Yield;

  // Plot the results
  TCanvas cMass(Title + " Mass Fit", Title + " Mass Fit", 1);
  RooPlot* pMass = D_MM->frame(Bins(50)) ;
  pMass->GetXaxis()->SetLabelOffset(0.015);
  pMass->GetXaxis()->SetLabelSize(0.05);
  pMass->GetXaxis()->SetTitleSize(0.05);
  pMass->GetXaxis()->SetTitleOffset(1.2);
  pMass->GetYaxis()->SetLabelSize(0.05);
  pMass->GetYaxis()->SetTitleSize(0.05);
  pMass->GetYaxis()->SetTitleOffset(1.5);
  pMass->SetTitle("");

  Data->plotOn(pMass,DataError(RooAbsData::SumW2) ) ;
  //PDF
  PDF.plotOn(pMass) ;
  RooHist* hMass_Pull = pMass->pullHist(); 
  Double_t Fit_chi2 = pMass->chiSquare(nFitParams);
  PDF.plotOn(pMass, Components(D_CB), LineColor(kRed));
  PDF.plotOn(pMass, Components(Ds_CB), LineColor(kOrange-3));
  PDF.plotOn(pMass, Components(CombBG_PDF), LineColor(kGray+2)) ;
  PDF.plotOn(pMass, Components(D_Ds_PDF), LineColor(kViolet)) ;
  pMass->Draw();
  //Label->Draw("SAME");
  cMass.Write();

  // Construct a histogram with the residuals of the data w.r.t. the curve
  TCanvas cMass_Pull(Title + " Mass Fit Pull", Title + " Mass Fit Pull", 1);
  RooPlot* pMass_Pull = D_MM->frame() ;
  pMass_Pull->GetXaxis()->SetLabelOffset(0.015);
  pMass_Pull->GetXaxis()->SetLabelSize(0.05);
  pMass_Pull->GetXaxis()->SetTitleSize(0.05);
  pMass_Pull->GetXaxis()->SetTitleOffset(1.2);
  pMass_Pull->GetYaxis()->SetLabelSize(0.05);
  pMass_Pull->GetYaxis()->SetTitleSize(0.05);
  pMass_Pull->GetYaxis()->SetTitleOffset(1.0);
  pMass_Pull->SetTitle("");
  pMass_Pull->SetYTitle("Pull");
  pMass_Pull->addPlotable(hMass_Pull,"P");
  pMass_Pull->Draw();
  cMass_Pull.Write();

}


void Main() 
{
  cout << "Hello there" << endl;
  
  // Limits
  Double_t MassMin = 1800.0;
  Double_t MassMax = 2050.0;

  // Get the tree
  TTree* D2PimumuTree = (TTree*) f1.Get("D2PimumuOSTuple/DecayTree"); 

  // Create the dataset variables
  RooRealVar* D_MM = new RooRealVar("D_MM", "D_MM", MassMin, MassMax, "MeV/c^{2}");
  RooRealVar* BDT = new RooRealVar("BDT", "BDT", 0.1, 0.25);

  // Create the RooArgSet that holds the variables
  RooArgSet D2PimumuSet(*D_MM, *BDT);
  RooDataSet *All_Data = new RooDataSet("All_Data", "All_Data", D2PimumuSet, Import(*D2PimumuTree));
   
  // Create an output file
  TFile fOutput("Results/Output_MagUp.root","recreate");   

  // Create things to hold the fit results
  RooRealVar *FitResults[2];
  
  // Perform the fit
  Fit_D2Pimumu_Mass( All_Data, D_MM, MassMin, MassMax, FitResults, fOutput, "All" );
 
  ofstream myfile;
  myfile.open("Results/Output_MagUP_D2PimumuOSTuple.txt",ios::out | ios::trunc);
  myfile << "Results" << endl;
  myfile << "_______" << endl;
  myfile << "MassMin = " << MassMin << " MeV/c2" << endl;
  myfile << "MassMax = " << MassMax << " MeV/c2" << endl;
  myfile << endl;
  myfile << "All Fit Results" << endl;
  myfile << "________________________________________________________" << endl;
  
  myfile << "D Yield (N_D)" << " = " << FitResults[0]->getValV() << " +/- " << FitResults[0].getError() << endl;
  myfile << "Comb background Yield (N_D BG)" << " = " << FitResults[1]->getValV() << " +/- " << FitResults[1].getError() << endl;
  myfile.close();

} // Do something!

