#include "/var/clus/usera/cliff/PostDoc/Header_Files/RootHeaders.h"
#include "/var/clus/usera/cliff/PostDoc/Header_Files/RooFitHeaders.h"
#include "/var/clus/usera/cliff/PostDoc/Header_Files/Global_Parameters.h"
#include "iostream"
#include "fstream"

using namespace RooFit;
using namespace TMath;
using namespace std;

// Get the data
TFile f1("/var/pcfst/r21/lhcb/cliff/ntuples/2011_Data/BdToKstarMuMu_MagAll_Data_1.03fb_BDT_presel_clean.root","read");

void Fit_Kstarmumu_Mass( RooDataSet* Data, RooRealVar* B0_M, Double_t MassMin, Double_t MassMax, Double_t Fit_Results[11], Double_t Fit_Result_Errors[10], TString Param_Names[11],  TPaveText* Label, TFile &fOutput, TString Title = "") {

  // Create the PDFs

  Int_t nFitParams = 9;
  Double_t nCands = Data->sumEntries();


  // B0 Double Crystal Ball
  RooRealVar mean_B0("m_{B^{0}}", "m_{B^{0}}", Global_Bd0_Mass, 5260.0, 5310.0, "MeV/c^{2}");
  RooRealVar sigma1("#sigma_{1}", "#sigma_{1}", 17.0, 10.0, 25.0, "MeV/c^{2}");
  RooRealVar sigma2("#sigma_{2}", "#sigma_{2}", 45.0, 25.0, 70.0, "MeV/c^{2}"); //26.0, 100.0, "MeV/c^{2}");
  RooRealVar alpha("#alpha", "#alpha", 2.24735); //1.4, 1.0, 3.0);//0.0, 10.0);
  //RooRealVar n("n", "n", 3.0, 0.5, 25.0);
  //nFitParams++;
  RooRealVar n("n", "n", 0.934334);//3.66);
  
  RooRealVar frac1("f_{1}", "f_{1}", 0.83, 0.0, 1.0);
  
  RooCBShape B0_CB1("B0_CB1", "B0_CB1", *B0_M, mean_B0, sigma1, alpha, n); 
  RooCBShape B0_CB2("B0_CB2", "B0_CB2", *B0_M, mean_B0, sigma2, alpha, n); 

  RooAddPdf B0_PDF("B0_PDF", "B0_PDF", RooArgList(B0_CB1, B0_CB2), RooArgList(frac1));

  // Bs0
  RooConstVar deltaMBsBd("#Delta m_{s-d}", "#Delta m_{s-d}", Global_Delta_M_Bs_Bd);
  RooFormulaVar mean_Bs0( "m_{B^{0}_{s}}","m_{B^{0}_{s}}","@0 + @1",RooArgList( mean_B0, deltaMBsBd ));
   
  RooCBShape Bs0_CB1("Bs0_CB1", "Bs0_CB1", *B0_M, mean_Bs0, sigma1, alpha, n); 
  RooCBShape Bs0_CB2("Bs0_CB2", "Bs0_CB2", *B0_M, mean_Bs0, sigma2, alpha, n); 

  RooAddPdf Bs0_PDF("Bs0_PDF", "Bs0_PDF", RooArgList(Bs0_CB1, Bs0_CB2), RooArgList(frac1));

  // Make a gaussian constraint on the fraction between the two CBs
  RooRealVar BdBsFrac("BdBsFrac", "fraction between Bs and Bd", 0.007, 0.0, 0.02);
  RooRealVar BdBsFracMean("BdBsFracMean", "mean of fraction between Bs and Bd", 0.0070);
  RooRealVar BdBsFracSigma("BdBsFracSigma", "mean of fraction between Bs and Bd", 0.0020);
  RooGaussian BdBsFracCons( "BdBsFracCons", "constraint on the fraction between Bs and Bd", BdBsFrac, BdBsFracMean, BdBsFracSigma);

  // Combinatorial Background
  RooRealVar K_CombBG("K_{CombBG}", "K_{CombBG}", -0.006, -0.1, 0.1, "c^{2}/MeV");//-1.0, 0.0, "c^{2}/MeV");
  RooExponential CombBG_PDF("CombBG_PDF", "CombBG_PDF", *B0_M, K_CombBG);
 
  // Yields
  RooRealVar B0_Yield("N_{B^{0}}", "N_{B^0}", 0.94*nCands, 0.0, 2.0*nCands);
  RooRealVar CombBG_Yield("N_{B^{0} Bg}", "N_{B^0 Bg}", 0.05*nCands, 0.0, 2.0*nCands);
  RooFormulaVar Bs0_Yield("N_{B^{0}_{s}}", "N_{B^{0}_{s}}", "@0*@1", RooArgList(B0_Yield, BdBsFrac));

  // Total PDFs
  RooAddPdf PDF("PDF", "PDF", RooArgList(B0_PDF, CombBG_PDF, Bs0_PDF ), RooArgSet(B0_Yield, CombBG_Yield, Bs0_Yield ));
 
  // Perform the fit
  PDF.fitTo(*Data, Extended(1), RooFit::Save( true ), RooFit::ExternalConstraints( RooArgSet(BdBsFracCons) ), PrintEvalErrors(-1), Minos(kTRUE) );

  // Plot the results
  TCanvas cMass(Title + " Mass Fit", Title + " Mass Fit", 1);
  RooPlot* pMass = B0_M->frame(Bins(50)) ;
  pMass->GetXaxis()->SetLabelOffset(0.015);
  pMass->GetXaxis()->SetLabelSize(0.05);
  pMass->GetXaxis()->SetTitleSize(0.05);
  pMass->GetXaxis()->SetTitleOffset(1.2);
  pMass->GetYaxis()->SetLabelSize(0.05);
  pMass->GetYaxis()->SetTitleSize(0.05);
  pMass->GetYaxis()->SetTitleOffset(1.5);
  pMass->SetTitle("");

  Data->plotOn(pMass,DataError(RooAbsData::SumW2) ) ;
  PDF.plotOn(pMass) ;
  RooHist* hMass_Pull = pMass->pullHist(); 
  Double_t Fit_chi2 = pMass->chiSquare(nFitParams);
  PDF.plotOn(pMass, Components(B0_CB1), LineColor(kRed));
  PDF.plotOn(pMass, Components(B0_CB2), LineColor(kOrange-3));
  PDF.plotOn(pMass, Components(CombBG_PDF), LineColor(kGray+2)) ;
  PDF.plotOn(pMass, Components(Bs0_PDF), LineColor(kViolet)) ;
  pMass->Draw();
  Label->Draw("SAME");
  cMass.Write();

  // Construct a histogram with the residuals of the data w.r.t. the curve
  TCanvas cMass_Pull(Title + " Mass Fit Pull", Title + " Mass Fit Pull", 1);
  RooPlot* pMass_Pull = B0_M->frame() ;
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

// Do something!
void Main() 
{
 
  cout << "Hello there" << endl;
  
  // Limits
  Double_t MassMin = 5150.0;
  Double_t MassMax = 5800.0;

  // Get the tree
  TTree* KstarmumuTree = (TTree*) f1.Get("treee"); 

  // Create the dataset variables
  RooRealVar* B0_M = new RooRealVar("B0_M", "m_{J/#PsiK*^{0}}", MassMin, MassMax, "MeV/c^{2}");
  RooRealVar* K_ProbNNp = new RooRealVar("K_ProbNNp", "K_ProbNNp", 0.0, 1.0);
  RooRealVar* K_ProbNNk = new RooRealVar("K_ProbNNk", "K_ProbNNk", 0.0, 1.0);
  RooRealVar* Pi_ProbNNp = new RooRealVar("Pi_ProbNNp", "Pi_ProbNNp", 0.0, 1.0);
  RooRealVar* Pi_ProbNNpi = new RooRealVar("Pi_ProbNNpi", "Pi_ProbNNpi", 0.0, 1.0);
 

  // Create the RooArgSet that holds the variables
  RooArgSet KstarmumuSet(*B0_M, *K_ProbNNp, *K_ProbNNk, *Pi_ProbNNp, *Pi_ProbNNpi);
  RooDataSet *All_Data = new RooDataSet("All_Data", "All_Data", KstarmumuSet, Import(*KstarmumuTree), Cut("(K_ProbNNk>K_ProbNNp)&&(Pi_ProbNNpi>Pi_ProbNNp)"));
   

  // Create an output file
  TFile fOutput("Results/Output.root","recreate");   

  // Create things to hold the fit results
  Double_t All_Fit_Results[11];
  Double_t All_Fit_Result_Errors[10];
  TString All_Param_Names[11];
  
 

  // Perform the fit
  Fit_Kstarmumu_Mass( All_Data, B0_M, MassMin, MassMax, All_Fit_Results, All_Fit_Result_Errors, All_Param_Names, lhcb7TeVMCR, fOutput, "All" );
 

  ofstream myfile;
  myfile.open("Results/Output_" + SProtonCut + "_" + SVersion + ".txt",ios::out | ios::trunc);
  myfile << "Results" << endl;
  myfile << "_______" << endl;
  myfile << "MassMin = " << MassMin << " MeV/c2" << endl;
  myfile << "MassMax = " << MassMax << " MeV/c2" << endl;
  myfile << endl;
  myfile << "All Fit Results" << endl;
  myfile << "________________________________________________________" << endl;
  for( Int_t i = 0; i < 10; i++){
    myfile << All_Param_Names[i] << " = " << All_Fit_Results[i] << " +/- " << All_Fit_Result_Errors[i] << endl;
  }
  myfile << All_Param_Names[10] << " = " << All_Fit_Results[10] << endl;
  myfile.close();

} // Do something!

