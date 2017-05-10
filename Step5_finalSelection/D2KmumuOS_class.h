//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed May 10 15:18:10 2017 by ROOT version 5.34/36
// from TTree DecayTree/DecayTree
// found on file: root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts/D2KMuMuOS.root
//////////////////////////////////////////////////////////

#ifndef D2KmumuOS_class_h
#define D2KmumuOS_class_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class D2KmumuOS_class {
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
   Double_t        Kplus_MC12TuneV2_ProbNNe;
   Double_t        Kplus_MC12TuneV2_ProbNNmu;
   Double_t        Kplus_MC12TuneV2_ProbNNpi;
   Double_t        Kplus_MC12TuneV2_ProbNNk;
   Double_t        Kplus_MC12TuneV2_ProbNNp;
   Double_t        Kplus_MC12TuneV2_ProbNNghost;
   Double_t        Kplus_MC12TuneV3_ProbNNe;
   Double_t        Kplus_MC12TuneV3_ProbNNmu;
   Double_t        Kplus_MC12TuneV3_ProbNNpi;
   Double_t        Kplus_MC12TuneV3_ProbNNk;
   Double_t        Kplus_MC12TuneV3_ProbNNp;
   Double_t        Kplus_MC12TuneV3_ProbNNghost;
   Double_t        Kplus_CosTheta;
   Double_t        Kplus_IP_OWNPV;
   Double_t        Kplus_IPCHI2_OWNPV;
   Double_t        Kplus_P;
   Double_t        Kplus_PT;
   Double_t        Kplus_PIDe;
   Double_t        Kplus_PIDmu;
   Double_t        Kplus_PIDK;
   Double_t        Kplus_PIDp;
   Double_t        Kplus_ProbNNe;
   Double_t        Kplus_ProbNNk;
   Double_t        Kplus_ProbNNp;
   Double_t        Kplus_ProbNNpi;
   Double_t        Kplus_ProbNNmu;
   Double_t        Kplus_ProbNNghost;
   Bool_t          Kplus_isMuon;
   Double_t        Kplus_TRACK_CHI2NDOF;
   Double_t        Kplus_TRACK_GhostProb;
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
   Double_t        muminus_MC12TuneV2_ProbNNe;
   Double_t        muminus_MC12TuneV2_ProbNNmu;
   Double_t        muminus_MC12TuneV2_ProbNNpi;
   Double_t        muminus_MC12TuneV2_ProbNNk;
   Double_t        muminus_MC12TuneV2_ProbNNp;
   Double_t        muminus_MC12TuneV2_ProbNNghost;
   Double_t        muminus_MC12TuneV3_ProbNNe;
   Double_t        muminus_MC12TuneV3_ProbNNmu;
   Double_t        muminus_MC12TuneV3_ProbNNpi;
   Double_t        muminus_MC12TuneV3_ProbNNk;
   Double_t        muminus_MC12TuneV3_ProbNNp;
   Double_t        muminus_MC12TuneV3_ProbNNghost;
   Double_t        muminus_CosTheta;
   Double_t        muminus_IP_OWNPV;
   Double_t        muminus_IPCHI2_OWNPV;
   Double_t        muminus_P;
   Double_t        muminus_PT;
   Double_t        muminus_PX;
   Double_t        muminus_PY;
   Double_t        muminus_PZ;
   Double_t        muminus_PIDe;
   Double_t        muminus_PIDmu;
   Double_t        muminus_PIDK;
   Double_t        muminus_PIDp;
   Double_t        muminus_ProbNNe;
   Double_t        muminus_ProbNNk;
   Double_t        muminus_ProbNNp;
   Double_t        muminus_ProbNNpi;
   Double_t        muminus_ProbNNmu;
   Double_t        muminus_ProbNNghost;
   Bool_t          muminus_isMuon;
   Double_t        muminus_TRACK_CHI2NDOF;
   Double_t        muminus_TRACK_GhostProb;
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
   TBranch        *b_Kplus_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_Kplus_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_Kplus_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_Kplus_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_Kplus_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_Kplus_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_Kplus_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_Kplus_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_Kplus_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_Kplus_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_Kplus_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_Kplus_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_Kplus_CosTheta;   //!
   TBranch        *b_Kplus_IP_OWNPV;   //!
   TBranch        *b_Kplus_IPCHI2_OWNPV;   //!
   TBranch        *b_Kplus_P;   //!
   TBranch        *b_Kplus_PT;   //!
   TBranch        *b_Kplus_PIDe;   //!
   TBranch        *b_Kplus_PIDmu;   //!
   TBranch        *b_Kplus_PIDK;   //!
   TBranch        *b_Kplus_PIDp;   //!
   TBranch        *b_Kplus_ProbNNe;   //!
   TBranch        *b_Kplus_ProbNNk;   //!
   TBranch        *b_Kplus_ProbNNp;   //!
   TBranch        *b_Kplus_ProbNNpi;   //!
   TBranch        *b_Kplus_ProbNNmu;   //!
   TBranch        *b_Kplus_ProbNNghost;   //!
   TBranch        *b_Kplus_isMuon;   //!
   TBranch        *b_Kplus_TRACK_CHI2NDOF;   //!
   TBranch        *b_Kplus_TRACK_GhostProb;   //!
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
   TBranch        *b_muminus_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_muminus_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_muminus_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_muminus_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_muminus_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_muminus_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_muminus_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_muminus_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_muminus_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_muminus_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_muminus_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_muminus_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_muminus_CosTheta;   //!
   TBranch        *b_muminus_IP_OWNPV;   //!
   TBranch        *b_muminus_IPCHI2_OWNPV;   //!
   TBranch        *b_muminus_P;   //!
   TBranch        *b_muminus_PT;   //!
   TBranch        *b_muminus_PX;   //!
   TBranch        *b_muminus_PY;   //!
   TBranch        *b_muminus_PZ;   //!
   TBranch        *b_muminus_PIDe;   //!
   TBranch        *b_muminus_PIDmu;   //!
   TBranch        *b_muminus_PIDK;   //!
   TBranch        *b_muminus_PIDp;   //!
   TBranch        *b_muminus_ProbNNe;   //!
   TBranch        *b_muminus_ProbNNk;   //!
   TBranch        *b_muminus_ProbNNp;   //!
   TBranch        *b_muminus_ProbNNpi;   //!
   TBranch        *b_muminus_ProbNNmu;   //!
   TBranch        *b_muminus_ProbNNghost;   //!
   TBranch        *b_muminus_isMuon;   //!
   TBranch        *b_muminus_TRACK_CHI2NDOF;   //!
   TBranch        *b_muminus_TRACK_GhostProb;   //!
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
   TBranch        *b_BDT;   //!

   D2KmumuOS_class(TTree *tree=0);
   virtual ~D2KmumuOS_class();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef D2KmumuOS_class_cxx
D2KmumuOS_class::D2KmumuOS_class(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts/D2KMuMuOS.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts/D2KMuMuOS.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts/D2KMuMuOS.root:/D2KmumuOSTuple");
      dir->GetObject("DecayTree",tree);

   }
   Init(tree);
}

D2KmumuOS_class::~D2KmumuOS_class()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t D2KmumuOS_class::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t D2KmumuOS_class::LoadTree(Long64_t entry)
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

void D2KmumuOS_class::Init(TTree *tree)
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
   fChain->SetBranchAddress("Kplus_MC12TuneV2_ProbNNe", &Kplus_MC12TuneV2_ProbNNe, &b_Kplus_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("Kplus_MC12TuneV2_ProbNNmu", &Kplus_MC12TuneV2_ProbNNmu, &b_Kplus_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("Kplus_MC12TuneV2_ProbNNpi", &Kplus_MC12TuneV2_ProbNNpi, &b_Kplus_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("Kplus_MC12TuneV2_ProbNNk", &Kplus_MC12TuneV2_ProbNNk, &b_Kplus_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("Kplus_MC12TuneV2_ProbNNp", &Kplus_MC12TuneV2_ProbNNp, &b_Kplus_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("Kplus_MC12TuneV2_ProbNNghost", &Kplus_MC12TuneV2_ProbNNghost, &b_Kplus_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("Kplus_MC12TuneV3_ProbNNe", &Kplus_MC12TuneV3_ProbNNe, &b_Kplus_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("Kplus_MC12TuneV3_ProbNNmu", &Kplus_MC12TuneV3_ProbNNmu, &b_Kplus_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("Kplus_MC12TuneV3_ProbNNpi", &Kplus_MC12TuneV3_ProbNNpi, &b_Kplus_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("Kplus_MC12TuneV3_ProbNNk", &Kplus_MC12TuneV3_ProbNNk, &b_Kplus_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("Kplus_MC12TuneV3_ProbNNp", &Kplus_MC12TuneV3_ProbNNp, &b_Kplus_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("Kplus_MC12TuneV3_ProbNNghost", &Kplus_MC12TuneV3_ProbNNghost, &b_Kplus_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("Kplus_CosTheta", &Kplus_CosTheta, &b_Kplus_CosTheta);
   fChain->SetBranchAddress("Kplus_IP_OWNPV", &Kplus_IP_OWNPV, &b_Kplus_IP_OWNPV);
   fChain->SetBranchAddress("Kplus_IPCHI2_OWNPV", &Kplus_IPCHI2_OWNPV, &b_Kplus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Kplus_P", &Kplus_P, &b_Kplus_P);
   fChain->SetBranchAddress("Kplus_PT", &Kplus_PT, &b_Kplus_PT);
   fChain->SetBranchAddress("Kplus_PIDe", &Kplus_PIDe, &b_Kplus_PIDe);
   fChain->SetBranchAddress("Kplus_PIDmu", &Kplus_PIDmu, &b_Kplus_PIDmu);
   fChain->SetBranchAddress("Kplus_PIDK", &Kplus_PIDK, &b_Kplus_PIDK);
   fChain->SetBranchAddress("Kplus_PIDp", &Kplus_PIDp, &b_Kplus_PIDp);
   fChain->SetBranchAddress("Kplus_ProbNNe", &Kplus_ProbNNe, &b_Kplus_ProbNNe);
   fChain->SetBranchAddress("Kplus_ProbNNk", &Kplus_ProbNNk, &b_Kplus_ProbNNk);
   fChain->SetBranchAddress("Kplus_ProbNNp", &Kplus_ProbNNp, &b_Kplus_ProbNNp);
   fChain->SetBranchAddress("Kplus_ProbNNpi", &Kplus_ProbNNpi, &b_Kplus_ProbNNpi);
   fChain->SetBranchAddress("Kplus_ProbNNmu", &Kplus_ProbNNmu, &b_Kplus_ProbNNmu);
   fChain->SetBranchAddress("Kplus_ProbNNghost", &Kplus_ProbNNghost, &b_Kplus_ProbNNghost);
   fChain->SetBranchAddress("Kplus_isMuon", &Kplus_isMuon, &b_Kplus_isMuon);
   fChain->SetBranchAddress("Kplus_TRACK_CHI2NDOF", &Kplus_TRACK_CHI2NDOF, &b_Kplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Kplus_TRACK_GhostProb", &Kplus_TRACK_GhostProb, &b_Kplus_TRACK_GhostProb);
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
   fChain->SetBranchAddress("muminus_MC12TuneV2_ProbNNe", &muminus_MC12TuneV2_ProbNNe, &b_muminus_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("muminus_MC12TuneV2_ProbNNmu", &muminus_MC12TuneV2_ProbNNmu, &b_muminus_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("muminus_MC12TuneV2_ProbNNpi", &muminus_MC12TuneV2_ProbNNpi, &b_muminus_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("muminus_MC12TuneV2_ProbNNk", &muminus_MC12TuneV2_ProbNNk, &b_muminus_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("muminus_MC12TuneV2_ProbNNp", &muminus_MC12TuneV2_ProbNNp, &b_muminus_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("muminus_MC12TuneV2_ProbNNghost", &muminus_MC12TuneV2_ProbNNghost, &b_muminus_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("muminus_MC12TuneV3_ProbNNe", &muminus_MC12TuneV3_ProbNNe, &b_muminus_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("muminus_MC12TuneV3_ProbNNmu", &muminus_MC12TuneV3_ProbNNmu, &b_muminus_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("muminus_MC12TuneV3_ProbNNpi", &muminus_MC12TuneV3_ProbNNpi, &b_muminus_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("muminus_MC12TuneV3_ProbNNk", &muminus_MC12TuneV3_ProbNNk, &b_muminus_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("muminus_MC12TuneV3_ProbNNp", &muminus_MC12TuneV3_ProbNNp, &b_muminus_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("muminus_MC12TuneV3_ProbNNghost", &muminus_MC12TuneV3_ProbNNghost, &b_muminus_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("muminus_CosTheta", &muminus_CosTheta, &b_muminus_CosTheta);
   fChain->SetBranchAddress("muminus_IP_OWNPV", &muminus_IP_OWNPV, &b_muminus_IP_OWNPV);
   fChain->SetBranchAddress("muminus_IPCHI2_OWNPV", &muminus_IPCHI2_OWNPV, &b_muminus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("muminus_P", &muminus_P, &b_muminus_P);
   fChain->SetBranchAddress("muminus_PT", &muminus_PT, &b_muminus_PT);
   fChain->SetBranchAddress("muminus_PX", &muminus_PX, &b_muminus_PX);
   fChain->SetBranchAddress("muminus_PY", &muminus_PY, &b_muminus_PY);
   fChain->SetBranchAddress("muminus_PZ", &muminus_PZ, &b_muminus_PZ);
   fChain->SetBranchAddress("muminus_PIDe", &muminus_PIDe, &b_muminus_PIDe);
   fChain->SetBranchAddress("muminus_PIDmu", &muminus_PIDmu, &b_muminus_PIDmu);
   fChain->SetBranchAddress("muminus_PIDK", &muminus_PIDK, &b_muminus_PIDK);
   fChain->SetBranchAddress("muminus_PIDp", &muminus_PIDp, &b_muminus_PIDp);
   fChain->SetBranchAddress("muminus_ProbNNe", &muminus_ProbNNe, &b_muminus_ProbNNe);
   fChain->SetBranchAddress("muminus_ProbNNk", &muminus_ProbNNk, &b_muminus_ProbNNk);
   fChain->SetBranchAddress("muminus_ProbNNp", &muminus_ProbNNp, &b_muminus_ProbNNp);
   fChain->SetBranchAddress("muminus_ProbNNpi", &muminus_ProbNNpi, &b_muminus_ProbNNpi);
   fChain->SetBranchAddress("muminus_ProbNNmu", &muminus_ProbNNmu, &b_muminus_ProbNNmu);
   fChain->SetBranchAddress("muminus_ProbNNghost", &muminus_ProbNNghost, &b_muminus_ProbNNghost);
   fChain->SetBranchAddress("muminus_isMuon", &muminus_isMuon, &b_muminus_isMuon);
   fChain->SetBranchAddress("muminus_TRACK_CHI2NDOF", &muminus_TRACK_CHI2NDOF, &b_muminus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("muminus_TRACK_GhostProb", &muminus_TRACK_GhostProb, &b_muminus_TRACK_GhostProb);
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
//    fChain->SetBranchAddress("BDT", &BDT, &b_BDT);
   Notify();
}

Bool_t D2KmumuOS_class::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void D2KmumuOS_class::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t D2KmumuOS_class::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef D2KmumuOS_class_cxx
