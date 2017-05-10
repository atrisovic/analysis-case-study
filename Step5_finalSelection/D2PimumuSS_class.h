//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed May 10 15:17:08 2017 by ROOT version 5.34/36
// from TTree DecayTree/DecayTree
// found on file: root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts/D2PiMuMuSS.root
//////////////////////////////////////////////////////////

#ifndef D2PimumuSS_class_h
#define D2PimumuSS_class_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class D2PimumuSS_class {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Double_t        D_ENDVERTEX_CHI2;
   Double_t        D_IP_OWNPV;
   Double_t        D_IPCHI2_OWNPV;
   Double_t        D_FD_OWNPV;
   Double_t        D_FDCHI2_OWNPV;
   Double_t        D_DIRA_OWNPV;
   Double_t        D_P;
   Double_t        D_PT;
   Double_t        D_MM;
   Double_t        D_MMERR;
   Double_t        D_M;
   Int_t           D_ID;
   Double_t        D_TAU;
   Double_t        D_TAUERR;
   Double_t        D_TAUCHI2;
   Bool_t          D_L0Global_Dec;
   Bool_t          D_L0Global_TIS;
   Bool_t          D_L0Global_TOS;
   Bool_t          D_Hlt1Global_Dec;
   Bool_t          D_Hlt1Global_TIS;
   Bool_t          D_Hlt1Global_TOS;
   Bool_t          D_Hlt1Phys_Dec;
   Bool_t          D_Hlt1Phys_TIS;
   Bool_t          D_Hlt1Phys_TOS;
   Bool_t          D_Hlt2Global_Dec;
   Bool_t          D_Hlt2Global_TIS;
   Bool_t          D_Hlt2Global_TOS;
   Bool_t          D_Hlt2Phys_Dec;
   Bool_t          D_Hlt2Phys_TIS;
   Bool_t          D_Hlt2Phys_TOS;
   Bool_t          D_L0DiMuonDecision_Dec;
   Bool_t          D_L0DiMuonDecision_TIS;
   Bool_t          D_L0DiMuonDecision_TOS;
   Bool_t          D_L0MuonDecision_Dec;
   Bool_t          D_L0MuonDecision_TIS;
   Bool_t          D_L0MuonDecision_TOS;
   Bool_t          D_L0MuonHighDecision_Dec;
   Bool_t          D_L0MuonHighDecision_TIS;
   Bool_t          D_L0MuonHighDecision_TOS;
   Bool_t          D_Hlt1DiMuonHighMassDecision_Dec;
   Bool_t          D_Hlt1DiMuonHighMassDecision_TIS;
   Bool_t          D_Hlt1DiMuonHighMassDecision_TOS;
   Bool_t          D_Hlt1DiMuonLowMassDecision_Dec;
   Bool_t          D_Hlt1DiMuonLowMassDecision_TIS;
   Bool_t          D_Hlt1DiMuonLowMassDecision_TOS;
   Bool_t          D_Hlt1SingleMuonHighPTDecision_Dec;
   Bool_t          D_Hlt1SingleMuonHighPTDecision_TIS;
   Bool_t          D_Hlt1SingleMuonHighPTDecision_TOS;
   Bool_t          D_Hlt1TrackMuonDecision_Dec;
   Bool_t          D_Hlt1TrackMuonDecision_TIS;
   Bool_t          D_Hlt1TrackMuonDecision_TOS;
   Bool_t          D_Hlt1TrackAllL0Decision_Dec;
   Bool_t          D_Hlt1TrackAllL0Decision_TIS;
   Bool_t          D_Hlt1TrackAllL0Decision_TOS;
   Bool_t          D_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec;
   Bool_t          D_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS;
   Bool_t          D_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS;
   Bool_t          D_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec;
   Bool_t          D_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS;
   Bool_t          D_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS;
   Bool_t          D_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec;
   Bool_t          D_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS;
   Bool_t          D_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS;
   Bool_t          D_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec;
   Bool_t          D_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS;
   Bool_t          D_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS;
   Bool_t          D_Hlt2DiMuonDY1Decision_Dec;
   Bool_t          D_Hlt2DiMuonDY1Decision_TIS;
   Bool_t          D_Hlt2DiMuonDY1Decision_TOS;
   Bool_t          D_Hlt2DiMuonDY2Decision_Dec;
   Bool_t          D_Hlt2DiMuonDY2Decision_TIS;
   Bool_t          D_Hlt2DiMuonDY2Decision_TOS;
   Bool_t          D_Hlt2DiMuonDY3Decision_Dec;
   Bool_t          D_Hlt2DiMuonDY3Decision_TIS;
   Bool_t          D_Hlt2DiMuonDY3Decision_TOS;
   Bool_t          D_Hlt2DiMuonDY4Decision_Dec;
   Bool_t          D_Hlt2DiMuonDY4Decision_TIS;
   Bool_t          D_Hlt2DiMuonDY4Decision_TOS;
   Bool_t          D_Hlt2DiMuonDetachedDecision_Dec;
   Bool_t          D_Hlt2DiMuonDetachedDecision_TIS;
   Bool_t          D_Hlt2DiMuonDetachedDecision_TOS;
   Bool_t          D_Hlt2DiMuonDetachedHeavyDecision_Dec;
   Bool_t          D_Hlt2DiMuonDetachedHeavyDecision_TIS;
   Bool_t          D_Hlt2DiMuonDetachedHeavyDecision_TOS;
   Bool_t          D_Hlt2DiMuonBDecision_Dec;
   Bool_t          D_Hlt2DiMuonBDecision_TIS;
   Bool_t          D_Hlt2DiMuonBDecision_TOS;
   Bool_t          D_Hlt2DiMuonLowMassDecision_Dec;
   Bool_t          D_Hlt2DiMuonLowMassDecision_TIS;
   Bool_t          D_Hlt2DiMuonLowMassDecision_TOS;
   Bool_t          D_Hlt2DiMuonDecision_Dec;
   Bool_t          D_Hlt2DiMuonDecision_TIS;
   Bool_t          D_Hlt2DiMuonDecision_TOS;
   Bool_t          D_Hlt2CharmSemilepD2HMuMuDecision_Dec;
   Bool_t          D_Hlt2CharmSemilepD2HMuMuDecision_TIS;
   Bool_t          D_Hlt2CharmSemilepD2HMuMuDecision_TOS;
   Bool_t          D_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec;
   Bool_t          D_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS;
   Bool_t          D_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS;
   Double_t        piminus_MC12TuneV2_ProbNNe;
   Double_t        piminus_MC12TuneV2_ProbNNmu;
   Double_t        piminus_MC12TuneV2_ProbNNpi;
   Double_t        piminus_MC12TuneV2_ProbNNk;
   Double_t        piminus_MC12TuneV2_ProbNNp;
   Double_t        piminus_MC12TuneV2_ProbNNghost;
   Double_t        piminus_MC12TuneV3_ProbNNe;
   Double_t        piminus_MC12TuneV3_ProbNNmu;
   Double_t        piminus_MC12TuneV3_ProbNNpi;
   Double_t        piminus_MC12TuneV3_ProbNNk;
   Double_t        piminus_MC12TuneV3_ProbNNp;
   Double_t        piminus_MC12TuneV3_ProbNNghost;
   Double_t        piminus_CosTheta;
   Double_t        piminus_IP_OWNPV;
   Double_t        piminus_IPCHI2_OWNPV;
   Double_t        piminus_P;
   Double_t        piminus_PT;
   Double_t        piminus_PIDe;
   Double_t        piminus_PIDmu;
   Double_t        piminus_PIDK;
   Double_t        piminus_PIDp;
   Double_t        piminus_ProbNNe;
   Double_t        piminus_ProbNNk;
   Double_t        piminus_ProbNNp;
   Double_t        piminus_ProbNNpi;
   Double_t        piminus_ProbNNmu;
   Double_t        piminus_ProbNNghost;
   Bool_t          piminus_isMuon;
   Double_t        piminus_TRACK_CHI2NDOF;
   Double_t        piminus_TRACK_GhostProb;
   Double_t        muplus_MC12TuneV2_ProbNNe;
   Double_t        muplus_MC12TuneV2_ProbNNmu;
   Double_t        muplus_MC12TuneV2_ProbNNpi;
   Double_t        muplus_MC12TuneV2_ProbNNk;
   Double_t        muplus_MC12TuneV2_ProbNNp;
   Double_t        muplus_MC12TuneV2_ProbNNghost;
   Double_t        muplus_MC12TuneV3_ProbNNe;
   Double_t        muplus_MC12TuneV3_ProbNNmu;
   Double_t        muplus_MC12TuneV3_ProbNNpi;
   Double_t        muplus_MC12TuneV3_ProbNNk;
   Double_t        muplus_MC12TuneV3_ProbNNp;
   Double_t        muplus_MC12TuneV3_ProbNNghost;
   Double_t        muplus_CosTheta;
   Double_t        muplus_IP_OWNPV;
   Double_t        muplus_IPCHI2_OWNPV;
   Double_t        muplus_P;
   Double_t        muplus_PT;
   Double_t        muplus_PX;
   Double_t        muplus_PY;
   Double_t        muplus_PZ;
   Double_t        muplus_PIDe;
   Double_t        muplus_PIDmu;
   Double_t        muplus_PIDK;
   Double_t        muplus_PIDp;
   Double_t        muplus_ProbNNe;
   Double_t        muplus_ProbNNk;
   Double_t        muplus_ProbNNp;
   Double_t        muplus_ProbNNpi;
   Double_t        muplus_ProbNNmu;
   Double_t        muplus_ProbNNghost;
   Bool_t          muplus_isMuon;
   Double_t        muplus_TRACK_CHI2NDOF;
   Double_t        muplus_TRACK_GhostProb;
   Double_t        muplus0_MC12TuneV2_ProbNNe;
   Double_t        muplus0_MC12TuneV2_ProbNNmu;
   Double_t        muplus0_MC12TuneV2_ProbNNpi;
   Double_t        muplus0_MC12TuneV2_ProbNNk;
   Double_t        muplus0_MC12TuneV2_ProbNNp;
   Double_t        muplus0_MC12TuneV2_ProbNNghost;
   Double_t        muplus0_MC12TuneV3_ProbNNe;
   Double_t        muplus0_MC12TuneV3_ProbNNmu;
   Double_t        muplus0_MC12TuneV3_ProbNNpi;
   Double_t        muplus0_MC12TuneV3_ProbNNk;
   Double_t        muplus0_MC12TuneV3_ProbNNp;
   Double_t        muplus0_MC12TuneV3_ProbNNghost;
   Double_t        muplus0_CosTheta;
   Double_t        muplus0_IP_OWNPV;
   Double_t        muplus0_IPCHI2_OWNPV;
   Double_t        muplus0_P;
   Double_t        muplus0_PT;
   Double_t        muplus0_PIDe;
   Double_t        muplus0_PIDmu;
   Double_t        muplus0_PIDK;
   Double_t        muplus0_PIDp;
   Double_t        muplus0_ProbNNe;
   Double_t        muplus0_ProbNNk;
   Double_t        muplus0_ProbNNp;
   Double_t        muplus0_ProbNNpi;
   Double_t        muplus0_ProbNNmu;
   Double_t        muplus0_ProbNNghost;
   Bool_t          muplus0_isMuon;
   Double_t        muplus0_TRACK_CHI2NDOF;
   Double_t        muplus0_TRACK_GhostProb;
   UInt_t          nCandidate;
   ULong64_t       totCandidates;
   ULong64_t       EventInSequence;
   UInt_t          runNumber;
   ULong64_t       eventNumber;
   Short_t         Polarity;
   Int_t           nPVs;
   Int_t           nTracks;
   Int_t           nSPDHits;
   Float_t         BDT;

   // List of branches
   TBranch        *b_D_ENDVERTEX_CHI2;   //!
   TBranch        *b_D_IP_OWNPV;   //!
   TBranch        *b_D_IPCHI2_OWNPV;   //!
   TBranch        *b_D_FD_OWNPV;   //!
   TBranch        *b_D_FDCHI2_OWNPV;   //!
   TBranch        *b_D_DIRA_OWNPV;   //!
   TBranch        *b_D_P;   //!
   TBranch        *b_D_PT;   //!
   TBranch        *b_D_MM;   //!
   TBranch        *b_D_MMERR;   //!
   TBranch        *b_D_M;   //!
   TBranch        *b_D_ID;   //!
   TBranch        *b_D_TAU;   //!
   TBranch        *b_D_TAUERR;   //!
   TBranch        *b_D_TAUCHI2;   //!
   TBranch        *b_D_L0Global_Dec;   //!
   TBranch        *b_D_L0Global_TIS;   //!
   TBranch        *b_D_L0Global_TOS;   //!
   TBranch        *b_D_Hlt1Global_Dec;   //!
   TBranch        *b_D_Hlt1Global_TIS;   //!
   TBranch        *b_D_Hlt1Global_TOS;   //!
   TBranch        *b_D_Hlt1Phys_Dec;   //!
   TBranch        *b_D_Hlt1Phys_TIS;   //!
   TBranch        *b_D_Hlt1Phys_TOS;   //!
   TBranch        *b_D_Hlt2Global_Dec;   //!
   TBranch        *b_D_Hlt2Global_TIS;   //!
   TBranch        *b_D_Hlt2Global_TOS;   //!
   TBranch        *b_D_Hlt2Phys_Dec;   //!
   TBranch        *b_D_Hlt2Phys_TIS;   //!
   TBranch        *b_D_Hlt2Phys_TOS;   //!
   TBranch        *b_D_L0DiMuonDecision_Dec;   //!
   TBranch        *b_D_L0DiMuonDecision_TIS;   //!
   TBranch        *b_D_L0DiMuonDecision_TOS;   //!
   TBranch        *b_D_L0MuonDecision_Dec;   //!
   TBranch        *b_D_L0MuonDecision_TIS;   //!
   TBranch        *b_D_L0MuonDecision_TOS;   //!
   TBranch        *b_D_L0MuonHighDecision_Dec;   //!
   TBranch        *b_D_L0MuonHighDecision_TIS;   //!
   TBranch        *b_D_L0MuonHighDecision_TOS;   //!
   TBranch        *b_D_Hlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_D_Hlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_D_Hlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_D_Hlt1DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_D_Hlt1DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_D_Hlt1DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_D_Hlt1SingleMuonHighPTDecision_Dec;   //!
   TBranch        *b_D_Hlt1SingleMuonHighPTDecision_TIS;   //!
   TBranch        *b_D_Hlt1SingleMuonHighPTDecision_TOS;   //!
   TBranch        *b_D_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_D_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_D_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_D_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_D_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_D_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_D_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec;   //!
   TBranch        *b_D_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS;   //!
   TBranch        *b_D_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS;   //!
   TBranch        *b_D_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec;   //!
   TBranch        *b_D_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS;   //!
   TBranch        *b_D_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS;   //!
   TBranch        *b_D_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec;   //!
   TBranch        *b_D_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS;   //!
   TBranch        *b_D_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS;   //!
   TBranch        *b_D_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec;   //!
   TBranch        *b_D_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS;   //!
   TBranch        *b_D_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS;   //!
   TBranch        *b_D_Hlt2DiMuonDY1Decision_Dec;   //!
   TBranch        *b_D_Hlt2DiMuonDY1Decision_TIS;   //!
   TBranch        *b_D_Hlt2DiMuonDY1Decision_TOS;   //!
   TBranch        *b_D_Hlt2DiMuonDY2Decision_Dec;   //!
   TBranch        *b_D_Hlt2DiMuonDY2Decision_TIS;   //!
   TBranch        *b_D_Hlt2DiMuonDY2Decision_TOS;   //!
   TBranch        *b_D_Hlt2DiMuonDY3Decision_Dec;   //!
   TBranch        *b_D_Hlt2DiMuonDY3Decision_TIS;   //!
   TBranch        *b_D_Hlt2DiMuonDY3Decision_TOS;   //!
   TBranch        *b_D_Hlt2DiMuonDY4Decision_Dec;   //!
   TBranch        *b_D_Hlt2DiMuonDY4Decision_TIS;   //!
   TBranch        *b_D_Hlt2DiMuonDY4Decision_TOS;   //!
   TBranch        *b_D_Hlt2DiMuonDetachedDecision_Dec;   //!
   TBranch        *b_D_Hlt2DiMuonDetachedDecision_TIS;   //!
   TBranch        *b_D_Hlt2DiMuonDetachedDecision_TOS;   //!
   TBranch        *b_D_Hlt2DiMuonDetachedHeavyDecision_Dec;   //!
   TBranch        *b_D_Hlt2DiMuonDetachedHeavyDecision_TIS;   //!
   TBranch        *b_D_Hlt2DiMuonDetachedHeavyDecision_TOS;   //!
   TBranch        *b_D_Hlt2DiMuonBDecision_Dec;   //!
   TBranch        *b_D_Hlt2DiMuonBDecision_TIS;   //!
   TBranch        *b_D_Hlt2DiMuonBDecision_TOS;   //!
   TBranch        *b_D_Hlt2DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_D_Hlt2DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_D_Hlt2DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_D_Hlt2DiMuonDecision_Dec;   //!
   TBranch        *b_D_Hlt2DiMuonDecision_TIS;   //!
   TBranch        *b_D_Hlt2DiMuonDecision_TOS;   //!
   TBranch        *b_D_Hlt2CharmSemilepD2HMuMuDecision_Dec;   //!
   TBranch        *b_D_Hlt2CharmSemilepD2HMuMuDecision_TIS;   //!
   TBranch        *b_D_Hlt2CharmSemilepD2HMuMuDecision_TOS;   //!
   TBranch        *b_D_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec;   //!
   TBranch        *b_D_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS;   //!
   TBranch        *b_D_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS;   //!
   TBranch        *b_piminus_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_piminus_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_piminus_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_piminus_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_piminus_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_piminus_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_piminus_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_piminus_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_piminus_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_piminus_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_piminus_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_piminus_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_piminus_CosTheta;   //!
   TBranch        *b_piminus_IP_OWNPV;   //!
   TBranch        *b_piminus_IPCHI2_OWNPV;   //!
   TBranch        *b_piminus_P;   //!
   TBranch        *b_piminus_PT;   //!
   TBranch        *b_piminus_PIDe;   //!
   TBranch        *b_piminus_PIDmu;   //!
   TBranch        *b_piminus_PIDK;   //!
   TBranch        *b_piminus_PIDp;   //!
   TBranch        *b_piminus_ProbNNe;   //!
   TBranch        *b_piminus_ProbNNk;   //!
   TBranch        *b_piminus_ProbNNp;   //!
   TBranch        *b_piminus_ProbNNpi;   //!
   TBranch        *b_piminus_ProbNNmu;   //!
   TBranch        *b_piminus_ProbNNghost;   //!
   TBranch        *b_piminus_isMuon;   //!
   TBranch        *b_piminus_TRACK_CHI2NDOF;   //!
   TBranch        *b_piminus_TRACK_GhostProb;   //!
   TBranch        *b_muplus_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_muplus_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_muplus_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_muplus_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_muplus_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_muplus_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_muplus_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_muplus_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_muplus_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_muplus_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_muplus_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_muplus_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_muplus_CosTheta;   //!
   TBranch        *b_muplus_IP_OWNPV;   //!
   TBranch        *b_muplus_IPCHI2_OWNPV;   //!
   TBranch        *b_muplus_P;   //!
   TBranch        *b_muplus_PT;   //!
   TBranch        *b_muplus_PX;   //!
   TBranch        *b_muplus_PY;   //!
   TBranch        *b_muplus_PZ;   //!
   TBranch        *b_muplus_PIDe;   //!
   TBranch        *b_muplus_PIDmu;   //!
   TBranch        *b_muplus_PIDK;   //!
   TBranch        *b_muplus_PIDp;   //!
   TBranch        *b_muplus_ProbNNe;   //!
   TBranch        *b_muplus_ProbNNk;   //!
   TBranch        *b_muplus_ProbNNp;   //!
   TBranch        *b_muplus_ProbNNpi;   //!
   TBranch        *b_muplus_ProbNNmu;   //!
   TBranch        *b_muplus_ProbNNghost;   //!
   TBranch        *b_muplus_isMuon;   //!
   TBranch        *b_muplus_TRACK_CHI2NDOF;   //!
   TBranch        *b_muplus_TRACK_GhostProb;   //!
   TBranch        *b_muplus0_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_muplus0_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_muplus0_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_muplus0_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_muplus0_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_muplus0_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_muplus0_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_muplus0_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_muplus0_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_muplus0_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_muplus0_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_muplus0_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_muplus0_CosTheta;   //!
   TBranch        *b_muplus0_IP_OWNPV;   //!
   TBranch        *b_muplus0_IPCHI2_OWNPV;   //!
   TBranch        *b_muplus0_P;   //!
   TBranch        *b_muplus0_PT;   //!
   TBranch        *b_muplus0_PIDe;   //!
   TBranch        *b_muplus0_PIDmu;   //!
   TBranch        *b_muplus0_PIDK;   //!
   TBranch        *b_muplus0_PIDp;   //!
   TBranch        *b_muplus0_ProbNNe;   //!
   TBranch        *b_muplus0_ProbNNk;   //!
   TBranch        *b_muplus0_ProbNNp;   //!
   TBranch        *b_muplus0_ProbNNpi;   //!
   TBranch        *b_muplus0_ProbNNmu;   //!
   TBranch        *b_muplus0_ProbNNghost;   //!
   TBranch        *b_muplus0_isMuon;   //!
   TBranch        *b_muplus0_TRACK_CHI2NDOF;   //!
   TBranch        *b_muplus0_TRACK_GhostProb;   //!
   TBranch        *b_nCandidate;   //!
   TBranch        *b_totCandidates;   //!
   TBranch        *b_EventInSequence;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_Polarity;   //!
   TBranch        *b_nPVs;   //!
   TBranch        *b_nTracks;   //!
   TBranch        *b_nSPDHits;   //!
   TBranch        *b_BDT;   //!

   D2PimumuSS_class(TTree *tree=0);
   virtual ~D2PimumuSS_class();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef D2PimumuSS_class_cxx
D2PimumuSS_class::D2PimumuSS_class(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts/D2PiMuMuSS.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts/D2PiMuMuSS.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts/D2PiMuMuSS.root:/D2PimumuSSTuple");
      dir->GetObject("DecayTree",tree);

   }
   Init(tree);
}

D2PimumuSS_class::~D2PimumuSS_class()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t D2PimumuSS_class::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t D2PimumuSS_class::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void D2PimumuSS_class::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("D_ENDVERTEX_CHI2", &D_ENDVERTEX_CHI2, &b_D_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("D_IP_OWNPV", &D_IP_OWNPV, &b_D_IP_OWNPV);
   fChain->SetBranchAddress("D_IPCHI2_OWNPV", &D_IPCHI2_OWNPV, &b_D_IPCHI2_OWNPV);
   fChain->SetBranchAddress("D_FD_OWNPV", &D_FD_OWNPV, &b_D_FD_OWNPV);
   fChain->SetBranchAddress("D_FDCHI2_OWNPV", &D_FDCHI2_OWNPV, &b_D_FDCHI2_OWNPV);
   fChain->SetBranchAddress("D_DIRA_OWNPV", &D_DIRA_OWNPV, &b_D_DIRA_OWNPV);
   fChain->SetBranchAddress("D_P", &D_P, &b_D_P);
   fChain->SetBranchAddress("D_PT", &D_PT, &b_D_PT);
   fChain->SetBranchAddress("D_MM", &D_MM, &b_D_MM);
   fChain->SetBranchAddress("D_MMERR", &D_MMERR, &b_D_MMERR);
   fChain->SetBranchAddress("D_M", &D_M, &b_D_M);
   fChain->SetBranchAddress("D_ID", &D_ID, &b_D_ID);
   fChain->SetBranchAddress("D_TAU", &D_TAU, &b_D_TAU);
   fChain->SetBranchAddress("D_TAUERR", &D_TAUERR, &b_D_TAUERR);
   fChain->SetBranchAddress("D_TAUCHI2", &D_TAUCHI2, &b_D_TAUCHI2);
   fChain->SetBranchAddress("D_L0Global_Dec", &D_L0Global_Dec, &b_D_L0Global_Dec);
   fChain->SetBranchAddress("D_L0Global_TIS", &D_L0Global_TIS, &b_D_L0Global_TIS);
   fChain->SetBranchAddress("D_L0Global_TOS", &D_L0Global_TOS, &b_D_L0Global_TOS);
   fChain->SetBranchAddress("D_Hlt1Global_Dec", &D_Hlt1Global_Dec, &b_D_Hlt1Global_Dec);
   fChain->SetBranchAddress("D_Hlt1Global_TIS", &D_Hlt1Global_TIS, &b_D_Hlt1Global_TIS);
   fChain->SetBranchAddress("D_Hlt1Global_TOS", &D_Hlt1Global_TOS, &b_D_Hlt1Global_TOS);
   fChain->SetBranchAddress("D_Hlt1Phys_Dec", &D_Hlt1Phys_Dec, &b_D_Hlt1Phys_Dec);
   fChain->SetBranchAddress("D_Hlt1Phys_TIS", &D_Hlt1Phys_TIS, &b_D_Hlt1Phys_TIS);
   fChain->SetBranchAddress("D_Hlt1Phys_TOS", &D_Hlt1Phys_TOS, &b_D_Hlt1Phys_TOS);
   fChain->SetBranchAddress("D_Hlt2Global_Dec", &D_Hlt2Global_Dec, &b_D_Hlt2Global_Dec);
   fChain->SetBranchAddress("D_Hlt2Global_TIS", &D_Hlt2Global_TIS, &b_D_Hlt2Global_TIS);
   fChain->SetBranchAddress("D_Hlt2Global_TOS", &D_Hlt2Global_TOS, &b_D_Hlt2Global_TOS);
   fChain->SetBranchAddress("D_Hlt2Phys_Dec", &D_Hlt2Phys_Dec, &b_D_Hlt2Phys_Dec);
   fChain->SetBranchAddress("D_Hlt2Phys_TIS", &D_Hlt2Phys_TIS, &b_D_Hlt2Phys_TIS);
   fChain->SetBranchAddress("D_Hlt2Phys_TOS", &D_Hlt2Phys_TOS, &b_D_Hlt2Phys_TOS);
   fChain->SetBranchAddress("D_L0DiMuonDecision_Dec", &D_L0DiMuonDecision_Dec, &b_D_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("D_L0DiMuonDecision_TIS", &D_L0DiMuonDecision_TIS, &b_D_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("D_L0DiMuonDecision_TOS", &D_L0DiMuonDecision_TOS, &b_D_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("D_L0MuonDecision_Dec", &D_L0MuonDecision_Dec, &b_D_L0MuonDecision_Dec);
   fChain->SetBranchAddress("D_L0MuonDecision_TIS", &D_L0MuonDecision_TIS, &b_D_L0MuonDecision_TIS);
   fChain->SetBranchAddress("D_L0MuonDecision_TOS", &D_L0MuonDecision_TOS, &b_D_L0MuonDecision_TOS);
   fChain->SetBranchAddress("D_L0MuonHighDecision_Dec", &D_L0MuonHighDecision_Dec, &b_D_L0MuonHighDecision_Dec);
   fChain->SetBranchAddress("D_L0MuonHighDecision_TIS", &D_L0MuonHighDecision_TIS, &b_D_L0MuonHighDecision_TIS);
   fChain->SetBranchAddress("D_L0MuonHighDecision_TOS", &D_L0MuonHighDecision_TOS, &b_D_L0MuonHighDecision_TOS);
   fChain->SetBranchAddress("D_Hlt1DiMuonHighMassDecision_Dec", &D_Hlt1DiMuonHighMassDecision_Dec, &b_D_Hlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("D_Hlt1DiMuonHighMassDecision_TIS", &D_Hlt1DiMuonHighMassDecision_TIS, &b_D_Hlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("D_Hlt1DiMuonHighMassDecision_TOS", &D_Hlt1DiMuonHighMassDecision_TOS, &b_D_Hlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("D_Hlt1DiMuonLowMassDecision_Dec", &D_Hlt1DiMuonLowMassDecision_Dec, &b_D_Hlt1DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("D_Hlt1DiMuonLowMassDecision_TIS", &D_Hlt1DiMuonLowMassDecision_TIS, &b_D_Hlt1DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("D_Hlt1DiMuonLowMassDecision_TOS", &D_Hlt1DiMuonLowMassDecision_TOS, &b_D_Hlt1DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("D_Hlt1SingleMuonHighPTDecision_Dec", &D_Hlt1SingleMuonHighPTDecision_Dec, &b_D_Hlt1SingleMuonHighPTDecision_Dec);
   fChain->SetBranchAddress("D_Hlt1SingleMuonHighPTDecision_TIS", &D_Hlt1SingleMuonHighPTDecision_TIS, &b_D_Hlt1SingleMuonHighPTDecision_TIS);
   fChain->SetBranchAddress("D_Hlt1SingleMuonHighPTDecision_TOS", &D_Hlt1SingleMuonHighPTDecision_TOS, &b_D_Hlt1SingleMuonHighPTDecision_TOS);
   fChain->SetBranchAddress("D_Hlt1TrackMuonDecision_Dec", &D_Hlt1TrackMuonDecision_Dec, &b_D_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("D_Hlt1TrackMuonDecision_TIS", &D_Hlt1TrackMuonDecision_TIS, &b_D_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("D_Hlt1TrackMuonDecision_TOS", &D_Hlt1TrackMuonDecision_TOS, &b_D_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("D_Hlt1TrackAllL0Decision_Dec", &D_Hlt1TrackAllL0Decision_Dec, &b_D_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("D_Hlt1TrackAllL0Decision_TIS", &D_Hlt1TrackAllL0Decision_TIS, &b_D_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("D_Hlt1TrackAllL0Decision_TOS", &D_Hlt1TrackAllL0Decision_TOS, &b_D_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("D_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec", &D_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec, &b_D_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec);
   fChain->SetBranchAddress("D_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS", &D_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS, &b_D_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS);
   fChain->SetBranchAddress("D_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS", &D_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS, &b_D_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS);
   fChain->SetBranchAddress("D_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec", &D_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec, &b_D_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec);
   fChain->SetBranchAddress("D_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS", &D_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS, &b_D_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS);
   fChain->SetBranchAddress("D_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS", &D_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS, &b_D_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS);
   fChain->SetBranchAddress("D_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec", &D_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec, &b_D_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec);
   fChain->SetBranchAddress("D_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS", &D_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS, &b_D_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS);
   fChain->SetBranchAddress("D_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS", &D_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS, &b_D_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS);
   fChain->SetBranchAddress("D_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec", &D_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec, &b_D_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec);
   fChain->SetBranchAddress("D_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS", &D_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS, &b_D_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS);
   fChain->SetBranchAddress("D_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS", &D_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS, &b_D_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS);
   fChain->SetBranchAddress("D_Hlt2DiMuonDY1Decision_Dec", &D_Hlt2DiMuonDY1Decision_Dec, &b_D_Hlt2DiMuonDY1Decision_Dec);
   fChain->SetBranchAddress("D_Hlt2DiMuonDY1Decision_TIS", &D_Hlt2DiMuonDY1Decision_TIS, &b_D_Hlt2DiMuonDY1Decision_TIS);
   fChain->SetBranchAddress("D_Hlt2DiMuonDY1Decision_TOS", &D_Hlt2DiMuonDY1Decision_TOS, &b_D_Hlt2DiMuonDY1Decision_TOS);
   fChain->SetBranchAddress("D_Hlt2DiMuonDY2Decision_Dec", &D_Hlt2DiMuonDY2Decision_Dec, &b_D_Hlt2DiMuonDY2Decision_Dec);
   fChain->SetBranchAddress("D_Hlt2DiMuonDY2Decision_TIS", &D_Hlt2DiMuonDY2Decision_TIS, &b_D_Hlt2DiMuonDY2Decision_TIS);
   fChain->SetBranchAddress("D_Hlt2DiMuonDY2Decision_TOS", &D_Hlt2DiMuonDY2Decision_TOS, &b_D_Hlt2DiMuonDY2Decision_TOS);
   fChain->SetBranchAddress("D_Hlt2DiMuonDY3Decision_Dec", &D_Hlt2DiMuonDY3Decision_Dec, &b_D_Hlt2DiMuonDY3Decision_Dec);
   fChain->SetBranchAddress("D_Hlt2DiMuonDY3Decision_TIS", &D_Hlt2DiMuonDY3Decision_TIS, &b_D_Hlt2DiMuonDY3Decision_TIS);
   fChain->SetBranchAddress("D_Hlt2DiMuonDY3Decision_TOS", &D_Hlt2DiMuonDY3Decision_TOS, &b_D_Hlt2DiMuonDY3Decision_TOS);
   fChain->SetBranchAddress("D_Hlt2DiMuonDY4Decision_Dec", &D_Hlt2DiMuonDY4Decision_Dec, &b_D_Hlt2DiMuonDY4Decision_Dec);
   fChain->SetBranchAddress("D_Hlt2DiMuonDY4Decision_TIS", &D_Hlt2DiMuonDY4Decision_TIS, &b_D_Hlt2DiMuonDY4Decision_TIS);
   fChain->SetBranchAddress("D_Hlt2DiMuonDY4Decision_TOS", &D_Hlt2DiMuonDY4Decision_TOS, &b_D_Hlt2DiMuonDY4Decision_TOS);
   fChain->SetBranchAddress("D_Hlt2DiMuonDetachedDecision_Dec", &D_Hlt2DiMuonDetachedDecision_Dec, &b_D_Hlt2DiMuonDetachedDecision_Dec);
   fChain->SetBranchAddress("D_Hlt2DiMuonDetachedDecision_TIS", &D_Hlt2DiMuonDetachedDecision_TIS, &b_D_Hlt2DiMuonDetachedDecision_TIS);
   fChain->SetBranchAddress("D_Hlt2DiMuonDetachedDecision_TOS", &D_Hlt2DiMuonDetachedDecision_TOS, &b_D_Hlt2DiMuonDetachedDecision_TOS);
   fChain->SetBranchAddress("D_Hlt2DiMuonDetachedHeavyDecision_Dec", &D_Hlt2DiMuonDetachedHeavyDecision_Dec, &b_D_Hlt2DiMuonDetachedHeavyDecision_Dec);
   fChain->SetBranchAddress("D_Hlt2DiMuonDetachedHeavyDecision_TIS", &D_Hlt2DiMuonDetachedHeavyDecision_TIS, &b_D_Hlt2DiMuonDetachedHeavyDecision_TIS);
   fChain->SetBranchAddress("D_Hlt2DiMuonDetachedHeavyDecision_TOS", &D_Hlt2DiMuonDetachedHeavyDecision_TOS, &b_D_Hlt2DiMuonDetachedHeavyDecision_TOS);
   fChain->SetBranchAddress("D_Hlt2DiMuonBDecision_Dec", &D_Hlt2DiMuonBDecision_Dec, &b_D_Hlt2DiMuonBDecision_Dec);
   fChain->SetBranchAddress("D_Hlt2DiMuonBDecision_TIS", &D_Hlt2DiMuonBDecision_TIS, &b_D_Hlt2DiMuonBDecision_TIS);
   fChain->SetBranchAddress("D_Hlt2DiMuonBDecision_TOS", &D_Hlt2DiMuonBDecision_TOS, &b_D_Hlt2DiMuonBDecision_TOS);
   fChain->SetBranchAddress("D_Hlt2DiMuonLowMassDecision_Dec", &D_Hlt2DiMuonLowMassDecision_Dec, &b_D_Hlt2DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("D_Hlt2DiMuonLowMassDecision_TIS", &D_Hlt2DiMuonLowMassDecision_TIS, &b_D_Hlt2DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("D_Hlt2DiMuonLowMassDecision_TOS", &D_Hlt2DiMuonLowMassDecision_TOS, &b_D_Hlt2DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("D_Hlt2DiMuonDecision_Dec", &D_Hlt2DiMuonDecision_Dec, &b_D_Hlt2DiMuonDecision_Dec);
   fChain->SetBranchAddress("D_Hlt2DiMuonDecision_TIS", &D_Hlt2DiMuonDecision_TIS, &b_D_Hlt2DiMuonDecision_TIS);
   fChain->SetBranchAddress("D_Hlt2DiMuonDecision_TOS", &D_Hlt2DiMuonDecision_TOS, &b_D_Hlt2DiMuonDecision_TOS);
   fChain->SetBranchAddress("D_Hlt2CharmSemilepD2HMuMuDecision_Dec", &D_Hlt2CharmSemilepD2HMuMuDecision_Dec, &b_D_Hlt2CharmSemilepD2HMuMuDecision_Dec);
   fChain->SetBranchAddress("D_Hlt2CharmSemilepD2HMuMuDecision_TIS", &D_Hlt2CharmSemilepD2HMuMuDecision_TIS, &b_D_Hlt2CharmSemilepD2HMuMuDecision_TIS);
   fChain->SetBranchAddress("D_Hlt2CharmSemilepD2HMuMuDecision_TOS", &D_Hlt2CharmSemilepD2HMuMuDecision_TOS, &b_D_Hlt2CharmSemilepD2HMuMuDecision_TOS);
   fChain->SetBranchAddress("D_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec", &D_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec, &b_D_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec);
   fChain->SetBranchAddress("D_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS", &D_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS, &b_D_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS);
   fChain->SetBranchAddress("D_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS", &D_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS, &b_D_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS);
   fChain->SetBranchAddress("piminus_MC12TuneV2_ProbNNe", &piminus_MC12TuneV2_ProbNNe, &b_piminus_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("piminus_MC12TuneV2_ProbNNmu", &piminus_MC12TuneV2_ProbNNmu, &b_piminus_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("piminus_MC12TuneV2_ProbNNpi", &piminus_MC12TuneV2_ProbNNpi, &b_piminus_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("piminus_MC12TuneV2_ProbNNk", &piminus_MC12TuneV2_ProbNNk, &b_piminus_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("piminus_MC12TuneV2_ProbNNp", &piminus_MC12TuneV2_ProbNNp, &b_piminus_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("piminus_MC12TuneV2_ProbNNghost", &piminus_MC12TuneV2_ProbNNghost, &b_piminus_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("piminus_MC12TuneV3_ProbNNe", &piminus_MC12TuneV3_ProbNNe, &b_piminus_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("piminus_MC12TuneV3_ProbNNmu", &piminus_MC12TuneV3_ProbNNmu, &b_piminus_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("piminus_MC12TuneV3_ProbNNpi", &piminus_MC12TuneV3_ProbNNpi, &b_piminus_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("piminus_MC12TuneV3_ProbNNk", &piminus_MC12TuneV3_ProbNNk, &b_piminus_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("piminus_MC12TuneV3_ProbNNp", &piminus_MC12TuneV3_ProbNNp, &b_piminus_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("piminus_MC12TuneV3_ProbNNghost", &piminus_MC12TuneV3_ProbNNghost, &b_piminus_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("piminus_CosTheta", &piminus_CosTheta, &b_piminus_CosTheta);
   fChain->SetBranchAddress("piminus_IP_OWNPV", &piminus_IP_OWNPV, &b_piminus_IP_OWNPV);
   fChain->SetBranchAddress("piminus_IPCHI2_OWNPV", &piminus_IPCHI2_OWNPV, &b_piminus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("piminus_P", &piminus_P, &b_piminus_P);
   fChain->SetBranchAddress("piminus_PT", &piminus_PT, &b_piminus_PT);
   fChain->SetBranchAddress("piminus_PIDe", &piminus_PIDe, &b_piminus_PIDe);
   fChain->SetBranchAddress("piminus_PIDmu", &piminus_PIDmu, &b_piminus_PIDmu);
   fChain->SetBranchAddress("piminus_PIDK", &piminus_PIDK, &b_piminus_PIDK);
   fChain->SetBranchAddress("piminus_PIDp", &piminus_PIDp, &b_piminus_PIDp);
   fChain->SetBranchAddress("piminus_ProbNNe", &piminus_ProbNNe, &b_piminus_ProbNNe);
   fChain->SetBranchAddress("piminus_ProbNNk", &piminus_ProbNNk, &b_piminus_ProbNNk);
   fChain->SetBranchAddress("piminus_ProbNNp", &piminus_ProbNNp, &b_piminus_ProbNNp);
   fChain->SetBranchAddress("piminus_ProbNNpi", &piminus_ProbNNpi, &b_piminus_ProbNNpi);
   fChain->SetBranchAddress("piminus_ProbNNmu", &piminus_ProbNNmu, &b_piminus_ProbNNmu);
   fChain->SetBranchAddress("piminus_ProbNNghost", &piminus_ProbNNghost, &b_piminus_ProbNNghost);
   fChain->SetBranchAddress("piminus_isMuon", &piminus_isMuon, &b_piminus_isMuon);
   fChain->SetBranchAddress("piminus_TRACK_CHI2NDOF", &piminus_TRACK_CHI2NDOF, &b_piminus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("piminus_TRACK_GhostProb", &piminus_TRACK_GhostProb, &b_piminus_TRACK_GhostProb);
   fChain->SetBranchAddress("muplus_MC12TuneV2_ProbNNe", &muplus_MC12TuneV2_ProbNNe, &b_muplus_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("muplus_MC12TuneV2_ProbNNmu", &muplus_MC12TuneV2_ProbNNmu, &b_muplus_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("muplus_MC12TuneV2_ProbNNpi", &muplus_MC12TuneV2_ProbNNpi, &b_muplus_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("muplus_MC12TuneV2_ProbNNk", &muplus_MC12TuneV2_ProbNNk, &b_muplus_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("muplus_MC12TuneV2_ProbNNp", &muplus_MC12TuneV2_ProbNNp, &b_muplus_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("muplus_MC12TuneV2_ProbNNghost", &muplus_MC12TuneV2_ProbNNghost, &b_muplus_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("muplus_MC12TuneV3_ProbNNe", &muplus_MC12TuneV3_ProbNNe, &b_muplus_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("muplus_MC12TuneV3_ProbNNmu", &muplus_MC12TuneV3_ProbNNmu, &b_muplus_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("muplus_MC12TuneV3_ProbNNpi", &muplus_MC12TuneV3_ProbNNpi, &b_muplus_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("muplus_MC12TuneV3_ProbNNk", &muplus_MC12TuneV3_ProbNNk, &b_muplus_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("muplus_MC12TuneV3_ProbNNp", &muplus_MC12TuneV3_ProbNNp, &b_muplus_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("muplus_MC12TuneV3_ProbNNghost", &muplus_MC12TuneV3_ProbNNghost, &b_muplus_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("muplus_CosTheta", &muplus_CosTheta, &b_muplus_CosTheta);
   fChain->SetBranchAddress("muplus_IP_OWNPV", &muplus_IP_OWNPV, &b_muplus_IP_OWNPV);
   fChain->SetBranchAddress("muplus_IPCHI2_OWNPV", &muplus_IPCHI2_OWNPV, &b_muplus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("muplus_P", &muplus_P, &b_muplus_P);
   fChain->SetBranchAddress("muplus_PT", &muplus_PT, &b_muplus_PT);
   fChain->SetBranchAddress("muplus_PX", &muplus_PX, &b_muplus_PX);
   fChain->SetBranchAddress("muplus_PY", &muplus_PY, &b_muplus_PY);
   fChain->SetBranchAddress("muplus_PZ", &muplus_PZ, &b_muplus_PZ);
   fChain->SetBranchAddress("muplus_PIDe", &muplus_PIDe, &b_muplus_PIDe);
   fChain->SetBranchAddress("muplus_PIDmu", &muplus_PIDmu, &b_muplus_PIDmu);
   fChain->SetBranchAddress("muplus_PIDK", &muplus_PIDK, &b_muplus_PIDK);
   fChain->SetBranchAddress("muplus_PIDp", &muplus_PIDp, &b_muplus_PIDp);
   fChain->SetBranchAddress("muplus_ProbNNe", &muplus_ProbNNe, &b_muplus_ProbNNe);
   fChain->SetBranchAddress("muplus_ProbNNk", &muplus_ProbNNk, &b_muplus_ProbNNk);
   fChain->SetBranchAddress("muplus_ProbNNp", &muplus_ProbNNp, &b_muplus_ProbNNp);
   fChain->SetBranchAddress("muplus_ProbNNpi", &muplus_ProbNNpi, &b_muplus_ProbNNpi);
   fChain->SetBranchAddress("muplus_ProbNNmu", &muplus_ProbNNmu, &b_muplus_ProbNNmu);
   fChain->SetBranchAddress("muplus_ProbNNghost", &muplus_ProbNNghost, &b_muplus_ProbNNghost);
   fChain->SetBranchAddress("muplus_isMuon", &muplus_isMuon, &b_muplus_isMuon);
   fChain->SetBranchAddress("muplus_TRACK_CHI2NDOF", &muplus_TRACK_CHI2NDOF, &b_muplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("muplus_TRACK_GhostProb", &muplus_TRACK_GhostProb, &b_muplus_TRACK_GhostProb);
   fChain->SetBranchAddress("muplus0_MC12TuneV2_ProbNNe", &muplus0_MC12TuneV2_ProbNNe, &b_muplus0_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("muplus0_MC12TuneV2_ProbNNmu", &muplus0_MC12TuneV2_ProbNNmu, &b_muplus0_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("muplus0_MC12TuneV2_ProbNNpi", &muplus0_MC12TuneV2_ProbNNpi, &b_muplus0_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("muplus0_MC12TuneV2_ProbNNk", &muplus0_MC12TuneV2_ProbNNk, &b_muplus0_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("muplus0_MC12TuneV2_ProbNNp", &muplus0_MC12TuneV2_ProbNNp, &b_muplus0_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("muplus0_MC12TuneV2_ProbNNghost", &muplus0_MC12TuneV2_ProbNNghost, &b_muplus0_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("muplus0_MC12TuneV3_ProbNNe", &muplus0_MC12TuneV3_ProbNNe, &b_muplus0_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("muplus0_MC12TuneV3_ProbNNmu", &muplus0_MC12TuneV3_ProbNNmu, &b_muplus0_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("muplus0_MC12TuneV3_ProbNNpi", &muplus0_MC12TuneV3_ProbNNpi, &b_muplus0_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("muplus0_MC12TuneV3_ProbNNk", &muplus0_MC12TuneV3_ProbNNk, &b_muplus0_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("muplus0_MC12TuneV3_ProbNNp", &muplus0_MC12TuneV3_ProbNNp, &b_muplus0_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("muplus0_MC12TuneV3_ProbNNghost", &muplus0_MC12TuneV3_ProbNNghost, &b_muplus0_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("muplus0_CosTheta", &muplus0_CosTheta, &b_muplus0_CosTheta);
   fChain->SetBranchAddress("muplus0_IP_OWNPV", &muplus0_IP_OWNPV, &b_muplus0_IP_OWNPV);
   fChain->SetBranchAddress("muplus0_IPCHI2_OWNPV", &muplus0_IPCHI2_OWNPV, &b_muplus0_IPCHI2_OWNPV);
   fChain->SetBranchAddress("muplus0_P", &muplus0_P, &b_muplus0_P);
   fChain->SetBranchAddress("muplus0_PT", &muplus0_PT, &b_muplus0_PT);
   fChain->SetBranchAddress("muplus0_PIDe", &muplus0_PIDe, &b_muplus0_PIDe);
   fChain->SetBranchAddress("muplus0_PIDmu", &muplus0_PIDmu, &b_muplus0_PIDmu);
   fChain->SetBranchAddress("muplus0_PIDK", &muplus0_PIDK, &b_muplus0_PIDK);
   fChain->SetBranchAddress("muplus0_PIDp", &muplus0_PIDp, &b_muplus0_PIDp);
   fChain->SetBranchAddress("muplus0_ProbNNe", &muplus0_ProbNNe, &b_muplus0_ProbNNe);
   fChain->SetBranchAddress("muplus0_ProbNNk", &muplus0_ProbNNk, &b_muplus0_ProbNNk);
   fChain->SetBranchAddress("muplus0_ProbNNp", &muplus0_ProbNNp, &b_muplus0_ProbNNp);
   fChain->SetBranchAddress("muplus0_ProbNNpi", &muplus0_ProbNNpi, &b_muplus0_ProbNNpi);
   fChain->SetBranchAddress("muplus0_ProbNNmu", &muplus0_ProbNNmu, &b_muplus0_ProbNNmu);
   fChain->SetBranchAddress("muplus0_ProbNNghost", &muplus0_ProbNNghost, &b_muplus0_ProbNNghost);
   fChain->SetBranchAddress("muplus0_isMuon", &muplus0_isMuon, &b_muplus0_isMuon);
   fChain->SetBranchAddress("muplus0_TRACK_CHI2NDOF", &muplus0_TRACK_CHI2NDOF, &b_muplus0_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("muplus0_TRACK_GhostProb", &muplus0_TRACK_GhostProb, &b_muplus0_TRACK_GhostProb);
   fChain->SetBranchAddress("nCandidate", &nCandidate, &b_nCandidate);
   fChain->SetBranchAddress("totCandidates", &totCandidates, &b_totCandidates);
   fChain->SetBranchAddress("EventInSequence", &EventInSequence, &b_EventInSequence);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("Polarity", &Polarity, &b_Polarity);
   fChain->SetBranchAddress("nPVs", &nPVs, &b_nPVs);
   fChain->SetBranchAddress("nTracks", &nTracks, &b_nTracks);
   fChain->SetBranchAddress("nSPDHits", &nSPDHits, &b_nSPDHits);
   fChain->SetBranchAddress("BDT", &BDT, &b_BDT);
   Notify();
}

Bool_t D2PimumuSS_class::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void D2PimumuSS_class::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t D2PimumuSS_class::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef D2PimumuSS_class_cxx
