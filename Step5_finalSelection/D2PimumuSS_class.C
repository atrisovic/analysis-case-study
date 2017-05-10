#define D2PimumuSS_class_cxx
#include "D2PimumuSS_class.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void D2PimumuSS_class::Loop()
{
//   In a ROOT session, you can do:
//      Root > .L D2PimumuSS_class.C
//      Root > D2PimumuSS_class t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries
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
   TFile *const outFile1 = TFile::Open("D2PimumuSS_final.root", "recreate");
   TTree *const outTree1 = fChain->CloneTree(0);
   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      // BDT cut > 0.1
      if(Cut(BDT) < 0.1) continue;
      // PID mu > 1
      if(Cut(muplus_PIDmu) < 1) continue;
      if(Cut(muminus_PIDmu) < 1) continue;
      // from ANA note: DDL_{KPi}<0
      if(Cut(piplus_PIDK > 0)) continue;
      if(Cut(piplus_PIDmu > 0)) continue;
      // muons must satisfy ISMUON
      if(Cut(muplus_isMuon) == 0) continue;
      if(Cut(muminus_isMuon) == 0) continue;
      //
      outTree1->Fill();
   }
   outFile1->Write();
   outFile1->Close();
}
