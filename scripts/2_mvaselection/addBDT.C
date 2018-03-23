#include <iostream>
#include <string>
#include <fstream>
#include "root_libs.h"
#include <vector>
#include "Riostream.h"
#include "TMVA/Reader.h"

void addBDT()
{
  TString fname="../1_preselection/D2PiMuMuOS.root";
  TString dname="D2PimumuOSTuple";
  TString tname="DecayTree";
  Info("addBDT", "Going to add BDT for file  %s \n and tree %s/%s ",
       fname.Data(), dname.Data(), tname.Data());

  //Load the file with the ntuple to update

  TFile *f = TFile::Open(fname,"update");
  f->cd(dname);
  TTree *t = (TTree*)f->Get(dname+"/"+tname);

  //Declare variables and set branches

  Double_t D_dira_ownpv;
  Double_t D_ipchi2_ownpv;
  Double_t D_endver_chi2;
  Double_t d_tau;
  Double_t d_mm;
  Double_t piplus_pt;
  Double_t piplus_ipchi2_ownpv;
  Double_t piplus_p;
  Double_t muplus_p;
  Double_t muplus_pidmu;

  Double_t muminus_p;
  Double_t muminus_pidmu;
  
  TBranch        *b_D_dira_ownpv;   //!
  TBranch        *b_D_ipchi2_ownpv;     //!
  TBranch        *b_D_endver_chi2;   //!
  TBranch        *b_d_tau;     //!
  TBranch        *b_d_mm;   //!

  TBranch        *b_piplus_pt;   //!
  TBranch        *b_piplus_p;   //!
  TBranch        *b_piplus_ipchi2_ownpv;   //!

  TBranch        *b_muplus_p;   //!
  TBranch        *b_muplus_pidmu;     //!

  TBranch        *b_muminus_p;     //!
  TBranch        *b_muminus_pidmu;   //!  

  t->SetBranchAddress("D_DIRA_OWNPV", &D_dira_ownpv, &b_D_dira_ownpv);
  t->SetBranchAddress("D_IPCHI2_OWNPV", &D_ipchi2_ownpv, &b_D_ipchi2_ownpv);
  t->SetBranchAddress("D_ENDVERTEX_CHI2", &D_endver_chi2, &b_D_endver_chi2);
  t->SetBranchAddress("D_TAU", &d_tau, &b_d_tau);
  t->SetBranchAddress("D_MM", &d_mm, &b_d_mm);

  t->SetBranchAddress("piplus_PT", &piplus_pt, &b_piplus_pt);
  t->SetBranchAddress("piplus_IPCHI2_OWNPV", &piplus_ipchi2_ownpv, &b_piplus_ipchi2_ownpv);
  t->SetBranchAddress("piplus_P", &piplus_p, &b_piplus_p);
  t->SetBranchAddress("muminus_P", &muminus_p, &b_muminus_p);

  t->SetBranchAddress("muplus_P", &muplus_p, &b_muplus_p);
  t->SetBranchAddress("muplus_PIDmu", &muplus_pidmu, &b_muplus_pidmu);

  t->SetBranchAddress("muminus_P", &muminus_p, &b_muminus_p);
  t->SetBranchAddress("muminus_PIDmu", &muminus_pidmu, &b_muminus_pidmu);

  Float_t BDT;     //BDTS classifier output
  Float_t var0,var1,var2,var3,var4,var5, var6, var7, var8, var9, var10, var11, var12, var13, var14, var15, spect0,spect1, spect2;


  TString method = "BDT";
  std::cout << "----------------------------------------------------" << std::endl;
  std::cout << "\nMethod used: " << method << std::endl;
  std::cout << "----------------------------------------------------" << std::endl;

  TBranch * BDTBranch = t->Branch("BDT",&BDT,"BDT/F");
  
  TMVA::Reader *reader = new TMVA::Reader( "!Color:!Silent" );
  reader->AddVariable("D_DIRA_OWNPV", &var0);
  reader->AddVariable("D_IPCHI2_OWNPV", &var1);
  reader->AddVariable("D_ENDVERTEX_CHI2", &var2);
  reader->AddVariable("piplus_PT", &var3);
  reader->AddVariable("log(piplus_IPCHI2_OWNPV)", &var4);
  reader->AddVariable("log(piplus_P)", &var5);

  reader->AddVariable("max(muminus_P, muplus_P)", &var6);
  reader->AddVariable("min(muminus_P, muplus_P)", &var7);
  reader->AddVariable("max(muminus_PT, muplus_PT)", &var8);
  reader->AddVariable("min(muminus_PT, muplus_PT)", &var9);
  reader->AddVariable("log(D_TAU)", &var10);
  reader->AddVariable("log(min(muminus_IPCHI2_OWNPV,muplus_IPCHI2_OWNPV))", &var11);
  reader->AddVariable("log(max(muminus_IPCHI2_OWNPV,muplus_IPCHI2_OWNPV))", &var12);
  
  reader->AddVariable("D_PT", &var13);
  reader->AddVariable("log(D_FDCHI2_OWNPV)", &var14);
  reader->AddVariable("D_P", &var15);

/*
  reader->AddSpectator("D_MM",&spect0);
  reader->AddSpectator("muplus_PIDmu",&spect1);
  reader->AddSpectator("muminus_PIDmu",&spect2);
  */
/*
 FROM TMVA CLASSIFICATION BDT WEIGHTS XML
   Expression="max(muminus_P,muplus_P)" Label="max_mu_p" Title="max_mu_p" 
  Expression="min(muminus_P,muplus_P)" Label="min_mu_p" Title="min_mu_p" 
  Expression="max(muminus_PT,muplus_PT)" Label="max_mu_pt" Title="max_mu_pt"
   Expression="min(muminus_PT,muplus_PT)" Label="min_mu_pt" Title="min_mu_pt" 

    Expression="log(D_TAU)" Label="D_tau" Title="D_tau" 
   Expression="log(min(muminus_IPCHI2_OWNPV,muplus_IPCHI2_OWNPV))" Label="min_mu_ip" Title="min_mu_ip" 
   Expression="log(max(muminus_IPCHI2_OWNPV,muplus_IPCHI2_OWNPV))" Label="max_mu_ip" Title="max_mu_ip"
    Expression="D_PT" Label="D_pt" Title="D_pt"
    Expression="log(D_FDCHI2_OWNPV)" Label="D_fd" Title="D_fd"
    Expression="D_P" Label="D_p" Title="D_p" 

*/

  TString methodName = method;
  methodName += TString(" method");
  TString weightFile = "weights/TMVAClassification_BDT.weights.xml";
  reader->BookMVA( methodName, weightFile );
  Int_t nentries = (Int_t) t->GetEntries();

  for (Int_t i = 0; i < nentries; i++)
  {
    if (i%5000 == 0) std::cout << "--- ... Processing event: " << i << std::endl;
    t->GetEntry(i);

    var0 = D_dira_ownpv;
    var1 = D_ipchi2_ownpv;
    var2 = D_endver_chi2;
    var3 = piplus_pt;
    var4 = log(piplus_ipchi2_ownpv);
    var5 = log(piplus_p);
    var6 = max(muminus_p, muplus_p);
    var7 = min(muminus_p, muplus_p);
    //var8 = max(muminus_pt, muplus_pt);
    //var9 = min(muminus_pt, muplus_pt);
    var10 = d_tau;
    // var11 =min(muminus_IPCHI2_OWNPV,muplus_IPCHI2_OWNPV);
    // var12 =max(muminus_IPCHI2_OWNPV,muplus_IPCHI2_OWNPV);
    //var13 =D_PT;
    //var14 =log(D_FDCHI2_OWNPV);
    //var15 =D_P;
    spect0 = muminus_p;
    spect1 = muplus_p;

    BDT = reader->EvaluateMVA(methodName);
    BDTBranch->Fill();
  }
  /*
  Double_t d_mm;
  Double_t piplus_pt;
  Double_t piplus_ipchi2_ownpv;
  Double_t piplus_p;
  Double_t muplus_p;
  Double_t muplus_pidmu;

  Double_t muminus_p;
  Double_t muminus_pidmu;
  */
  t->Write("",TObject::kOverwrite);
  f->Close();
  cout << endl << "-----------------------------------" << endl;
}
