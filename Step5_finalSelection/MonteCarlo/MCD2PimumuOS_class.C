#define MCD2PimumuOS_class_cxx
#include "MCD2PimumuOS_class.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void MCD2PimumuOS_class::Loop()
{
//   In a ROOT session, you can do:
//      root> .L MCD2PimumuOS_class.C
//      root> MCD2PimumuOS_class t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;

   TFile *const outFile1 = TFile::Open("MC_D2PiMuMu_final.root", "recreate");
   std::cout<<"Empty file created: "<<outFile1->GetName()<<std::endl; 
   TTree *const outTree1 = fChain->CloneTree(0);
   Long64_t nentries = fChain->GetEntriesFast();
   std::cout<<"[INFO] Run over "<<nentries<<" entries"<<std::endl; 
   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
        Long64_t ientry = LoadTree(jentry);
        if (ientry < 0) break;
        nb = fChain->GetEntry(jentry);   nbytes += nb;
        // BDT cut > 0.1
        if(BDT < 0.1) continue;
        // PID mu > 1
        if(muplus_PIDmu < 1) continue;
        if(muminus_PIDmu < 1) continue;
        // from ANA note: DDL_{KPi}<0
        if(piplus_PIDK > 0) continue;
        if(piplus_PIDmu > 0) continue;
        // muons must satisfy ISMUON
        if(muplus_isMuon == 0) continue;
        if(muminus_isMuon == 0) continue;
        outTree1->Fill();
   }
   std::cout<<"[INFO] Number of events in the output tree: "<<outTree1->GetEntries()<<std::endl; 
   std::cout<<"[INFO] Efficiency: "<<double(outTree1->GetEntries())/(double(nentries))<<std::endl;  
   outFile1->Write();
   outFile1->Close();
}
