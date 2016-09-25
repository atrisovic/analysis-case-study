#include <iostream>
#include <string>        
#include <fstream>       
#include "root_libs.h"   
#include <vector>        
#include "Riostream.h"  

#include "TMVA/Reader.h"

void help()
{
  cout << endl << "      addbdt       " << endl
       << " -h             : print this help " << endl
       << " -f [file name]    " << endl
       << " -d [dir name]  :  directory inside root file " << endl
       << " -t [tree name] :  tree inside directory   " << endl
       << " -c [category]  : 0 = B_s0 muplus muminus " << endl
       << "                : 1 = B0 muplus muminus   " << endl
       << "                : -1 = B_s0 muplus muplus0   " << endl
       << endl;
  
}

void addBDT(int flaggo)
{
  TString fname="Ntuples/D2hMuMu12_MagU_2PiMuMuOS_NTuple_Reduced.root";
  TString dname="D2PimumuOSTuple";
  TString tname="DecayTree";
  Info("addBDT", "Going to add BDT for file  %s \n and tree %s/%s ", 
       fname.Data(), dname.Data(), tname.Data());

  //Load the file with the ntuple to update
  TString met = "";
  if(fname.Contains("castor")) met = "rfio:";
  TFile *f = TFile::Open(met+fname,"update");
  f->cd(dname);

  TTree *t = (TTree*)f->Get(dname+"/"+tname);


  //Declare variables and set branches
 
  Double_t B_s0_PT;
  Double_t B_s0_eta;
  Double_t B_s0_doca;
  Double_t B_s0_cosnk;
  Double_t muplus_PT;
  Double_t muminus_PT;
  Double_t B_s0_M;
  Double_t B_s0_TAU;

  TBranch        *b_B_s0_PT;   //!
  TBranch        *b_B_s0_eta;     //!
  TBranch        *b_B_s0_cosnk;   //!
  TBranch        *b_B_s0_doca;   //!
  TBranch        *b_muminus_PT;   //!
  TBranch        *b_muplus_PT;   //!
  TBranch        *b_B_s0_M;     //!
  TBranch        *b_B_s0_TAU;   //!

  TString Bname = "";
  TString nameplus = "";
  TString nameminus = "";
  if (flaggo == 0){
    Bname = "B_s0";
    nameplus = "muplus";
    nameminus = "muminus";
  }else if (flaggo == 1){
    Bname = "B0";
    nameplus = "muplus";
    nameminus = "muminus";
  }else if (flaggo == 2){
    Bname = "Bplus";
    nameplus = "muplus";
    nameminus = "muminus";
  }else if (flaggo == 3){
    Bname = "B_s0";
    nameplus = "eplus";
    nameminus = "muminus";
  }else if (flaggo == 4){
    Bname = "B_s0";
    nameplus = "eplus";
    nameminus = "eminus";
  }else{
    std::cout << "wrong flag" << std::endl;
    return ;
  }

  /*
  factory->AddVariable( "D_dira := D_DIRA_OWNPV", 'F' );
   factory->AddVariable( "D_ipchi := D_IPCHI2_OWNPV", 'F' );
   factory->AddVariable( "D_edchi := D_ENDVERTEX_CHI2", 'F' );
   factory->AddVariable( "pi_pt := piplus_PT", 'F' );
   
   factory->AddVariable( "pi_ipchi := piplus_IPCHI2_OWNPV", 'F' );
   factory->AddVariable( "pi_p := piplus_P", 'F' );

   factory->AddVariable( "max_mu_p := max(muminus_P, muplus_P)", 'F' );
   factory->AddVariable( "min_mu_p := min(muminus_P, muplus_P)", 'F' );
   factory->AddVariable( "max_mu_pt := max(muminus_PT, muplus_PT)", 'F' );
   factory->AddVariable( "min_mu_pt := min(muminus_PT, muplus_PT)", 'F' );
   factory->AddVariable( "D_tau := D_TAU", 'F' );
  */
  
  t->SetBranchAddress(Bname+"_PT", &B_s0_PT, &b_B_s0_PT);
  t->SetBranchAddress(Bname+"_eta", &B_s0_eta, &b_B_s0_eta);
  t->SetBranchAddress(Bname+"_doca", &B_s0_doca, &b_B_s0_doca);
  t->SetBranchAddress(Bname+"_cosnk", &B_s0_cosnk, &b_B_s0_cosnk);
  t->SetBranchAddress(nameplus+"_PT", &muplus_PT, &b_muplus_PT);
  t->SetBranchAddress(nameminus+"_PT", &muminus_PT, &b_muminus_PT);
  t->SetBranchAddress(Bname+"_M", &B_s0_M, &b_B_s0_M);
  t->SetBranchAddress(Bname+"_TAU", &B_s0_TAU, &b_B_s0_TAU);

  Float_t BDTD4;     //BDTS classifier output
  Float_t var0,var1,var2,var3,var4,var5, var6, var7, var8, var9, var10, spect0,spect1, spect2;

  TString method = "BDTD";
  std::cout << "----------------------------------------------------" << std::endl;
  std::cout << "\nMethod used: " << method << std::endl;
  std::cout << "----------------------------------------------------" << std::endl;

  TBranch * BDTD4Branch = t->Branch("BDTD4",&BDTD4,"BDTD4/F");
  
  TMVA::Reader *reader = new TMVA::Reader( "!Color:!Silent" );
  reader->AddVariable("D_DIRA_OWNPV",             &var0);
  reader->AddVariable("D_IPCHI2_OWNPV",            &var1);
  reader->AddVariable("D_ENDVERTEX_CHI2",           &var2);
  reader->AddVariable("piplus_PT",          &var3);
  reader->AddVariable("piplus_IPCHI2_OWNPV", &var4);
  reader->AddVariable("piplus_P", &var5);
  reader->AddVariable("max(muminus_P, muplus_P)", &var6);
  reader->AddVariable("min(muminus_P, muplus_P)", &var7);
  reader->AddVariable("max(muminus_PT, muplus_PT)", &var8);
  reader->AddVariable("min(muminus_PT, muplus_PT)", &var9);
  reader->AddVariable("D_TAU", &var10);
  reader->AddSpectator("D_MM",&spect0);
  reader->AddSpectator("muplus_PIDmu",&spect1);
  reader->AddSpectator("muminus_PIDmu",&spect2);
  
  //Ana: OK
  TString methodName = method;
  methodName += TString(" method"); 
  TString weightFile = "weights/TMVAClassification_BDT.weights.xml"; 

  reader->BookMVA( methodName, weightFile );

  Int_t nentries = (Int_t) t->GetEntries();
  for (Int_t i = 0; i<nentries; i++){
    if (i%5000 == 0) std::cout << "--- ... Processing event: " << i << std::endl;

    t->GetEntry(i);
  
    //    var0 = B_s0_CTAU_ps;     
    var0 = B_s0_PT;     
    var1 = B_s0_eta;    
    var2 = B_s0_doca;
    var3 = B_s0_cosnk;      
    var4 = min(muplus_PT,muminus_PT);  
    var5 = max(muplus_PT,muminus_PT);  
    spect0 = B_s0_M;
    spect1 = B_s0_TAU;

    BDTD4 = reader->EvaluateMVA(methodName);
    BDTD4Branch->Fill();
    
  }
  t->Write("",TObject::kOverwrite);
  f->Close();
    
  cout << endl << "-----------------------------------" << endl;
  
}




//============================================================
// MAIN
//============================================================
int main(int argc, char **argv){
  TString fname;
  TString dname;
  TString tname = "DecayTree";
  int flaggo = 0;

  if(argc<2){
    help() ;
    return 1;
  }

  for(Int_t i=1; i<argc; i++){
    TString opt(argv[i]);
    cout << " Parsing option: " << opt << endl;
    if(opt.Contains("-h")){
      help();
      return 0;
    }else if(opt.Contains("-f")){
      i++;
      TString val(argv[i]);
      fname = val; 
    }else if(opt.Contains("-d")){
      i++;
      TString val(argv[i]);
      dname = val;
    }else if(opt.Contains("-t")){
      i++;
      TString val(argv[i]);
      tname = val;
    }else if(opt.Contains("-c")){
      i++;
      TString val(argv[i]);
      flaggo = val.Atoi();
    }else{
      Error("Option parsing...","unknown option %s",opt.Data());
      return -1;
    }
  }

  if(fname ==""){
    Error("","You must specify the file name");
    cout << endl;
    help();
    return -1;
  }
  

  if(dname != ""){
    addBDT(fname, dname, tname,flaggo);
    return 0;
  }
  Info("" ," No directory specified: will try B2MuMuTuple and B2HHTuple" );
  
  
  // If no dir is specified do both
  addBDT(fname, "B2MuMuTuple", tname,  flaggo);
  
  cout << endl;
  
  
  addBDT(fname, "B2HHTuple",   tname,  flaggo);


  cout << " This is the end..." << endl;
  
  return 0;
}
