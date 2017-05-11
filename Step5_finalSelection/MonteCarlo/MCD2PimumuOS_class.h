//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu May 11 16:15:16 2017 by ROOT version 6.08/06
// from TTree DecayTree/DecayTree
// found on file: root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis-case-study/Step5_finalSelection/MC_D2PiMuMu.root
//////////////////////////////////////////////////////////

#ifndef MCD2PimumuOS_class_h
#define MCD2PimumuOS_class_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class MCD2PimumuOS_class {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   const Int_t kMaxD_ENDVERTEX_COV = 1;
   const Int_t kMaxD_OWNPV_COV = 1;
   const Int_t kMaxpiplus_OWNPV_COV = 1;
   const Int_t kMaxpiplus_ORIVX_COV = 1;
   const Int_t kMaxmuplus_OWNPV_COV = 1;
   const Int_t kMaxmuplus_ORIVX_COV = 1;
   const Int_t kMaxmuminus_OWNPV_COV = 1;
   const Int_t kMaxmuminus_ORIVX_COV = 1;

   // Declaration of leaf types
   Double_t        D_ENDVERTEX_X;
   Double_t        D_ENDVERTEX_Y;
   Double_t        D_ENDVERTEX_Z;
   Double_t        D_ENDVERTEX_XERR;
   Double_t        D_ENDVERTEX_YERR;
   Double_t        D_ENDVERTEX_ZERR;
   Double_t        D_ENDVERTEX_CHI2;
   Int_t           D_ENDVERTEX_NDOF;
   Float_t         D_ENDVERTEX_COV_[3][3];
   Double_t        D_OWNPV_X;
   Double_t        D_OWNPV_Y;
   Double_t        D_OWNPV_Z;
   Double_t        D_OWNPV_XERR;
   Double_t        D_OWNPV_YERR;
   Double_t        D_OWNPV_ZERR;
   Double_t        D_OWNPV_CHI2;
   Int_t           D_OWNPV_NDOF;
   Float_t         D_OWNPV_COV_[3][3];
   Double_t        D_IP_OWNPV;
   Double_t        D_IPCHI2_OWNPV;
   Double_t        D_FD_OWNPV;
   Double_t        D_FDCHI2_OWNPV;
   Double_t        D_DIRA_OWNPV;
   Double_t        D_P;
   Double_t        D_PT;
   Double_t        D_PE;
   Double_t        D_PX;
   Double_t        D_PY;
   Double_t        D_PZ;
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
   Double_t        piplus_MC12TuneV2_ProbNNe;
   Double_t        piplus_MC12TuneV2_ProbNNmu;
   Double_t        piplus_MC12TuneV2_ProbNNpi;
   Double_t        piplus_MC12TuneV2_ProbNNk;
   Double_t        piplus_MC12TuneV2_ProbNNp;
   Double_t        piplus_MC12TuneV2_ProbNNghost;
   Double_t        piplus_MC12TuneV3_ProbNNe;
   Double_t        piplus_MC12TuneV3_ProbNNmu;
   Double_t        piplus_MC12TuneV3_ProbNNpi;
   Double_t        piplus_MC12TuneV3_ProbNNk;
   Double_t        piplus_MC12TuneV3_ProbNNp;
   Double_t        piplus_MC12TuneV3_ProbNNghost;
   Double_t        piplus_CosTheta;
   Double_t        piplus_OWNPV_X;
   Double_t        piplus_OWNPV_Y;
   Double_t        piplus_OWNPV_Z;
   Double_t        piplus_OWNPV_XERR;
   Double_t        piplus_OWNPV_YERR;
   Double_t        piplus_OWNPV_ZERR;
   Double_t        piplus_OWNPV_CHI2;
   Int_t           piplus_OWNPV_NDOF;
   Float_t         piplus_OWNPV_COV_[3][3];
   Double_t        piplus_IP_OWNPV;
   Double_t        piplus_IPCHI2_OWNPV;
   Double_t        piplus_ORIVX_X;
   Double_t        piplus_ORIVX_Y;
   Double_t        piplus_ORIVX_Z;
   Double_t        piplus_ORIVX_XERR;
   Double_t        piplus_ORIVX_YERR;
   Double_t        piplus_ORIVX_ZERR;
   Double_t        piplus_ORIVX_CHI2;
   Int_t           piplus_ORIVX_NDOF;
   Float_t         piplus_ORIVX_COV_[3][3];
   Double_t        piplus_P;
   Double_t        piplus_PT;
   Double_t        piplus_PE;
   Double_t        piplus_PX;
   Double_t        piplus_PY;
   Double_t        piplus_PZ;
   Double_t        piplus_M;
   Int_t           piplus_ID;
   Double_t        piplus_PIDe;
   Double_t        piplus_PIDmu;
   Double_t        piplus_PIDK;
   Double_t        piplus_PIDp;
   Double_t        piplus_ProbNNe;
   Double_t        piplus_ProbNNk;
   Double_t        piplus_ProbNNp;
   Double_t        piplus_ProbNNpi;
   Double_t        piplus_ProbNNmu;
   Double_t        piplus_ProbNNghost;
   Bool_t          piplus_hasMuon;
   Bool_t          piplus_isMuon;
   Bool_t          piplus_hasRich;
   Bool_t          piplus_hasCalo;
   Bool_t          piplus_L0Global_Dec;
   Bool_t          piplus_L0Global_TIS;
   Bool_t          piplus_L0Global_TOS;
   Bool_t          piplus_Hlt1Global_Dec;
   Bool_t          piplus_Hlt1Global_TIS;
   Bool_t          piplus_Hlt1Global_TOS;
   Bool_t          piplus_Hlt1Phys_Dec;
   Bool_t          piplus_Hlt1Phys_TIS;
   Bool_t          piplus_Hlt1Phys_TOS;
   Bool_t          piplus_Hlt2Global_Dec;
   Bool_t          piplus_Hlt2Global_TIS;
   Bool_t          piplus_Hlt2Global_TOS;
   Bool_t          piplus_Hlt2Phys_Dec;
   Bool_t          piplus_Hlt2Phys_TIS;
   Bool_t          piplus_Hlt2Phys_TOS;
   Bool_t          piplus_L0DiMuonDecision_Dec;
   Bool_t          piplus_L0DiMuonDecision_TIS;
   Bool_t          piplus_L0DiMuonDecision_TOS;
   Bool_t          piplus_L0MuonDecision_Dec;
   Bool_t          piplus_L0MuonDecision_TIS;
   Bool_t          piplus_L0MuonDecision_TOS;
   Bool_t          piplus_L0MuonHighDecision_Dec;
   Bool_t          piplus_L0MuonHighDecision_TIS;
   Bool_t          piplus_L0MuonHighDecision_TOS;
   Bool_t          piplus_Hlt1DiMuonHighMassDecision_Dec;
   Bool_t          piplus_Hlt1DiMuonHighMassDecision_TIS;
   Bool_t          piplus_Hlt1DiMuonHighMassDecision_TOS;
   Bool_t          piplus_Hlt1DiMuonLowMassDecision_Dec;
   Bool_t          piplus_Hlt1DiMuonLowMassDecision_TIS;
   Bool_t          piplus_Hlt1DiMuonLowMassDecision_TOS;
   Bool_t          piplus_Hlt1SingleMuonHighPTDecision_Dec;
   Bool_t          piplus_Hlt1SingleMuonHighPTDecision_TIS;
   Bool_t          piplus_Hlt1SingleMuonHighPTDecision_TOS;
   Bool_t          piplus_Hlt1TrackMuonDecision_Dec;
   Bool_t          piplus_Hlt1TrackMuonDecision_TIS;
   Bool_t          piplus_Hlt1TrackMuonDecision_TOS;
   Bool_t          piplus_Hlt1TrackAllL0Decision_Dec;
   Bool_t          piplus_Hlt1TrackAllL0Decision_TIS;
   Bool_t          piplus_Hlt1TrackAllL0Decision_TOS;
   Bool_t          piplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec;
   Bool_t          piplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS;
   Bool_t          piplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS;
   Bool_t          piplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec;
   Bool_t          piplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS;
   Bool_t          piplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS;
   Bool_t          piplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec;
   Bool_t          piplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS;
   Bool_t          piplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS;
   Bool_t          piplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec;
   Bool_t          piplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS;
   Bool_t          piplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS;
   Bool_t          piplus_Hlt2DiMuonDY1Decision_Dec;
   Bool_t          piplus_Hlt2DiMuonDY1Decision_TIS;
   Bool_t          piplus_Hlt2DiMuonDY1Decision_TOS;
   Bool_t          piplus_Hlt2DiMuonDY2Decision_Dec;
   Bool_t          piplus_Hlt2DiMuonDY2Decision_TIS;
   Bool_t          piplus_Hlt2DiMuonDY2Decision_TOS;
   Bool_t          piplus_Hlt2DiMuonDY3Decision_Dec;
   Bool_t          piplus_Hlt2DiMuonDY3Decision_TIS;
   Bool_t          piplus_Hlt2DiMuonDY3Decision_TOS;
   Bool_t          piplus_Hlt2DiMuonDY4Decision_Dec;
   Bool_t          piplus_Hlt2DiMuonDY4Decision_TIS;
   Bool_t          piplus_Hlt2DiMuonDY4Decision_TOS;
   Bool_t          piplus_Hlt2DiMuonDetachedDecision_Dec;
   Bool_t          piplus_Hlt2DiMuonDetachedDecision_TIS;
   Bool_t          piplus_Hlt2DiMuonDetachedDecision_TOS;
   Bool_t          piplus_Hlt2DiMuonDetachedHeavyDecision_Dec;
   Bool_t          piplus_Hlt2DiMuonDetachedHeavyDecision_TIS;
   Bool_t          piplus_Hlt2DiMuonDetachedHeavyDecision_TOS;
   Bool_t          piplus_Hlt2DiMuonBDecision_Dec;
   Bool_t          piplus_Hlt2DiMuonBDecision_TIS;
   Bool_t          piplus_Hlt2DiMuonBDecision_TOS;
   Bool_t          piplus_Hlt2DiMuonLowMassDecision_Dec;
   Bool_t          piplus_Hlt2DiMuonLowMassDecision_TIS;
   Bool_t          piplus_Hlt2DiMuonLowMassDecision_TOS;
   Bool_t          piplus_Hlt2DiMuonDecision_Dec;
   Bool_t          piplus_Hlt2DiMuonDecision_TIS;
   Bool_t          piplus_Hlt2DiMuonDecision_TOS;
   Bool_t          piplus_Hlt2CharmSemilepD2HMuMuDecision_Dec;
   Bool_t          piplus_Hlt2CharmSemilepD2HMuMuDecision_TIS;
   Bool_t          piplus_Hlt2CharmSemilepD2HMuMuDecision_TOS;
   Bool_t          piplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec;
   Bool_t          piplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS;
   Bool_t          piplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS;
   Int_t           piplus_TRACK_Type;
   Int_t           piplus_TRACK_Key;
   Double_t        piplus_TRACK_CHI2NDOF;
   Double_t        piplus_TRACK_PCHI2;
   Double_t        piplus_TRACK_MatchCHI2;
   Double_t        piplus_TRACK_GhostProb;
   Double_t        piplus_TRACK_CloneDist;
   Double_t        piplus_TRACK_Likelihood;
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
   Double_t        muplus_OWNPV_X;
   Double_t        muplus_OWNPV_Y;
   Double_t        muplus_OWNPV_Z;
   Double_t        muplus_OWNPV_XERR;
   Double_t        muplus_OWNPV_YERR;
   Double_t        muplus_OWNPV_ZERR;
   Double_t        muplus_OWNPV_CHI2;
   Int_t           muplus_OWNPV_NDOF;
   Float_t         muplus_OWNPV_COV_[3][3];
   Double_t        muplus_IP_OWNPV;
   Double_t        muplus_IPCHI2_OWNPV;
   Double_t        muplus_ORIVX_X;
   Double_t        muplus_ORIVX_Y;
   Double_t        muplus_ORIVX_Z;
   Double_t        muplus_ORIVX_XERR;
   Double_t        muplus_ORIVX_YERR;
   Double_t        muplus_ORIVX_ZERR;
   Double_t        muplus_ORIVX_CHI2;
   Int_t           muplus_ORIVX_NDOF;
   Float_t         muplus_ORIVX_COV_[3][3];
   Double_t        muplus_P;
   Double_t        muplus_PT;
   Double_t        muplus_PE;
   Double_t        muplus_PX;
   Double_t        muplus_PY;
   Double_t        muplus_PZ;
   Double_t        muplus_M;
   Int_t           muplus_ID;
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
   Bool_t          muplus_hasMuon;
   Bool_t          muplus_isMuon;
   Bool_t          muplus_hasRich;
   Bool_t          muplus_hasCalo;
   Bool_t          muplus_L0Global_Dec;
   Bool_t          muplus_L0Global_TIS;
   Bool_t          muplus_L0Global_TOS;
   Bool_t          muplus_Hlt1Global_Dec;
   Bool_t          muplus_Hlt1Global_TIS;
   Bool_t          muplus_Hlt1Global_TOS;
   Bool_t          muplus_Hlt1Phys_Dec;
   Bool_t          muplus_Hlt1Phys_TIS;
   Bool_t          muplus_Hlt1Phys_TOS;
   Bool_t          muplus_Hlt2Global_Dec;
   Bool_t          muplus_Hlt2Global_TIS;
   Bool_t          muplus_Hlt2Global_TOS;
   Bool_t          muplus_Hlt2Phys_Dec;
   Bool_t          muplus_Hlt2Phys_TIS;
   Bool_t          muplus_Hlt2Phys_TOS;
   Bool_t          muplus_L0DiMuonDecision_Dec;
   Bool_t          muplus_L0DiMuonDecision_TIS;
   Bool_t          muplus_L0DiMuonDecision_TOS;
   Bool_t          muplus_L0MuonDecision_Dec;
   Bool_t          muplus_L0MuonDecision_TIS;
   Bool_t          muplus_L0MuonDecision_TOS;
   Bool_t          muplus_L0MuonHighDecision_Dec;
   Bool_t          muplus_L0MuonHighDecision_TIS;
   Bool_t          muplus_L0MuonHighDecision_TOS;
   Bool_t          muplus_Hlt1DiMuonHighMassDecision_Dec;
   Bool_t          muplus_Hlt1DiMuonHighMassDecision_TIS;
   Bool_t          muplus_Hlt1DiMuonHighMassDecision_TOS;
   Bool_t          muplus_Hlt1DiMuonLowMassDecision_Dec;
   Bool_t          muplus_Hlt1DiMuonLowMassDecision_TIS;
   Bool_t          muplus_Hlt1DiMuonLowMassDecision_TOS;
   Bool_t          muplus_Hlt1SingleMuonHighPTDecision_Dec;
   Bool_t          muplus_Hlt1SingleMuonHighPTDecision_TIS;
   Bool_t          muplus_Hlt1SingleMuonHighPTDecision_TOS;
   Bool_t          muplus_Hlt1TrackMuonDecision_Dec;
   Bool_t          muplus_Hlt1TrackMuonDecision_TIS;
   Bool_t          muplus_Hlt1TrackMuonDecision_TOS;
   Bool_t          muplus_Hlt1TrackAllL0Decision_Dec;
   Bool_t          muplus_Hlt1TrackAllL0Decision_TIS;
   Bool_t          muplus_Hlt1TrackAllL0Decision_TOS;
   Bool_t          muplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec;
   Bool_t          muplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS;
   Bool_t          muplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS;
   Bool_t          muplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec;
   Bool_t          muplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS;
   Bool_t          muplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS;
   Bool_t          muplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec;
   Bool_t          muplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS;
   Bool_t          muplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS;
   Bool_t          muplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec;
   Bool_t          muplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS;
   Bool_t          muplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS;
   Bool_t          muplus_Hlt2DiMuonDY1Decision_Dec;
   Bool_t          muplus_Hlt2DiMuonDY1Decision_TIS;
   Bool_t          muplus_Hlt2DiMuonDY1Decision_TOS;
   Bool_t          muplus_Hlt2DiMuonDY2Decision_Dec;
   Bool_t          muplus_Hlt2DiMuonDY2Decision_TIS;
   Bool_t          muplus_Hlt2DiMuonDY2Decision_TOS;
   Bool_t          muplus_Hlt2DiMuonDY3Decision_Dec;
   Bool_t          muplus_Hlt2DiMuonDY3Decision_TIS;
   Bool_t          muplus_Hlt2DiMuonDY3Decision_TOS;
   Bool_t          muplus_Hlt2DiMuonDY4Decision_Dec;
   Bool_t          muplus_Hlt2DiMuonDY4Decision_TIS;
   Bool_t          muplus_Hlt2DiMuonDY4Decision_TOS;
   Bool_t          muplus_Hlt2DiMuonDetachedDecision_Dec;
   Bool_t          muplus_Hlt2DiMuonDetachedDecision_TIS;
   Bool_t          muplus_Hlt2DiMuonDetachedDecision_TOS;
   Bool_t          muplus_Hlt2DiMuonDetachedHeavyDecision_Dec;
   Bool_t          muplus_Hlt2DiMuonDetachedHeavyDecision_TIS;
   Bool_t          muplus_Hlt2DiMuonDetachedHeavyDecision_TOS;
   Bool_t          muplus_Hlt2DiMuonBDecision_Dec;
   Bool_t          muplus_Hlt2DiMuonBDecision_TIS;
   Bool_t          muplus_Hlt2DiMuonBDecision_TOS;
   Bool_t          muplus_Hlt2DiMuonLowMassDecision_Dec;
   Bool_t          muplus_Hlt2DiMuonLowMassDecision_TIS;
   Bool_t          muplus_Hlt2DiMuonLowMassDecision_TOS;
   Bool_t          muplus_Hlt2DiMuonDecision_Dec;
   Bool_t          muplus_Hlt2DiMuonDecision_TIS;
   Bool_t          muplus_Hlt2DiMuonDecision_TOS;
   Bool_t          muplus_Hlt2CharmSemilepD2HMuMuDecision_Dec;
   Bool_t          muplus_Hlt2CharmSemilepD2HMuMuDecision_TIS;
   Bool_t          muplus_Hlt2CharmSemilepD2HMuMuDecision_TOS;
   Bool_t          muplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec;
   Bool_t          muplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS;
   Bool_t          muplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS;
   Int_t           muplus_TRACK_Type;
   Int_t           muplus_TRACK_Key;
   Double_t        muplus_TRACK_CHI2NDOF;
   Double_t        muplus_TRACK_PCHI2;
   Double_t        muplus_TRACK_MatchCHI2;
   Double_t        muplus_TRACK_GhostProb;
   Double_t        muplus_TRACK_CloneDist;
   Double_t        muplus_TRACK_Likelihood;
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
   Double_t        muminus_OWNPV_X;
   Double_t        muminus_OWNPV_Y;
   Double_t        muminus_OWNPV_Z;
   Double_t        muminus_OWNPV_XERR;
   Double_t        muminus_OWNPV_YERR;
   Double_t        muminus_OWNPV_ZERR;
   Double_t        muminus_OWNPV_CHI2;
   Int_t           muminus_OWNPV_NDOF;
   Float_t         muminus_OWNPV_COV_[3][3];
   Double_t        muminus_IP_OWNPV;
   Double_t        muminus_IPCHI2_OWNPV;
   Double_t        muminus_ORIVX_X;
   Double_t        muminus_ORIVX_Y;
   Double_t        muminus_ORIVX_Z;
   Double_t        muminus_ORIVX_XERR;
   Double_t        muminus_ORIVX_YERR;
   Double_t        muminus_ORIVX_ZERR;
   Double_t        muminus_ORIVX_CHI2;
   Int_t           muminus_ORIVX_NDOF;
   Float_t         muminus_ORIVX_COV_[3][3];
   Double_t        muminus_P;
   Double_t        muminus_PT;
   Double_t        muminus_PE;
   Double_t        muminus_PX;
   Double_t        muminus_PY;
   Double_t        muminus_PZ;
   Double_t        muminus_M;
   Int_t           muminus_ID;
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
   Bool_t          muminus_hasMuon;
   Bool_t          muminus_isMuon;
   Bool_t          muminus_hasRich;
   Bool_t          muminus_hasCalo;
   Bool_t          muminus_L0Global_Dec;
   Bool_t          muminus_L0Global_TIS;
   Bool_t          muminus_L0Global_TOS;
   Bool_t          muminus_Hlt1Global_Dec;
   Bool_t          muminus_Hlt1Global_TIS;
   Bool_t          muminus_Hlt1Global_TOS;
   Bool_t          muminus_Hlt1Phys_Dec;
   Bool_t          muminus_Hlt1Phys_TIS;
   Bool_t          muminus_Hlt1Phys_TOS;
   Bool_t          muminus_Hlt2Global_Dec;
   Bool_t          muminus_Hlt2Global_TIS;
   Bool_t          muminus_Hlt2Global_TOS;
   Bool_t          muminus_Hlt2Phys_Dec;
   Bool_t          muminus_Hlt2Phys_TIS;
   Bool_t          muminus_Hlt2Phys_TOS;
   Bool_t          muminus_L0DiMuonDecision_Dec;
   Bool_t          muminus_L0DiMuonDecision_TIS;
   Bool_t          muminus_L0DiMuonDecision_TOS;
   Bool_t          muminus_L0MuonDecision_Dec;
   Bool_t          muminus_L0MuonDecision_TIS;
   Bool_t          muminus_L0MuonDecision_TOS;
   Bool_t          muminus_L0MuonHighDecision_Dec;
   Bool_t          muminus_L0MuonHighDecision_TIS;
   Bool_t          muminus_L0MuonHighDecision_TOS;
   Bool_t          muminus_Hlt1DiMuonHighMassDecision_Dec;
   Bool_t          muminus_Hlt1DiMuonHighMassDecision_TIS;
   Bool_t          muminus_Hlt1DiMuonHighMassDecision_TOS;
   Bool_t          muminus_Hlt1DiMuonLowMassDecision_Dec;
   Bool_t          muminus_Hlt1DiMuonLowMassDecision_TIS;
   Bool_t          muminus_Hlt1DiMuonLowMassDecision_TOS;
   Bool_t          muminus_Hlt1SingleMuonHighPTDecision_Dec;
   Bool_t          muminus_Hlt1SingleMuonHighPTDecision_TIS;
   Bool_t          muminus_Hlt1SingleMuonHighPTDecision_TOS;
   Bool_t          muminus_Hlt1TrackMuonDecision_Dec;
   Bool_t          muminus_Hlt1TrackMuonDecision_TIS;
   Bool_t          muminus_Hlt1TrackMuonDecision_TOS;
   Bool_t          muminus_Hlt1TrackAllL0Decision_Dec;
   Bool_t          muminus_Hlt1TrackAllL0Decision_TIS;
   Bool_t          muminus_Hlt1TrackAllL0Decision_TOS;
   Bool_t          muminus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec;
   Bool_t          muminus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS;
   Bool_t          muminus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS;
   Bool_t          muminus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec;
   Bool_t          muminus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS;
   Bool_t          muminus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS;
   Bool_t          muminus_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec;
   Bool_t          muminus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS;
   Bool_t          muminus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS;
   Bool_t          muminus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec;
   Bool_t          muminus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS;
   Bool_t          muminus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS;
   Bool_t          muminus_Hlt2DiMuonDY1Decision_Dec;
   Bool_t          muminus_Hlt2DiMuonDY1Decision_TIS;
   Bool_t          muminus_Hlt2DiMuonDY1Decision_TOS;
   Bool_t          muminus_Hlt2DiMuonDY2Decision_Dec;
   Bool_t          muminus_Hlt2DiMuonDY2Decision_TIS;
   Bool_t          muminus_Hlt2DiMuonDY2Decision_TOS;
   Bool_t          muminus_Hlt2DiMuonDY3Decision_Dec;
   Bool_t          muminus_Hlt2DiMuonDY3Decision_TIS;
   Bool_t          muminus_Hlt2DiMuonDY3Decision_TOS;
   Bool_t          muminus_Hlt2DiMuonDY4Decision_Dec;
   Bool_t          muminus_Hlt2DiMuonDY4Decision_TIS;
   Bool_t          muminus_Hlt2DiMuonDY4Decision_TOS;
   Bool_t          muminus_Hlt2DiMuonDetachedDecision_Dec;
   Bool_t          muminus_Hlt2DiMuonDetachedDecision_TIS;
   Bool_t          muminus_Hlt2DiMuonDetachedDecision_TOS;
   Bool_t          muminus_Hlt2DiMuonDetachedHeavyDecision_Dec;
   Bool_t          muminus_Hlt2DiMuonDetachedHeavyDecision_TIS;
   Bool_t          muminus_Hlt2DiMuonDetachedHeavyDecision_TOS;
   Bool_t          muminus_Hlt2DiMuonBDecision_Dec;
   Bool_t          muminus_Hlt2DiMuonBDecision_TIS;
   Bool_t          muminus_Hlt2DiMuonBDecision_TOS;
   Bool_t          muminus_Hlt2DiMuonLowMassDecision_Dec;
   Bool_t          muminus_Hlt2DiMuonLowMassDecision_TIS;
   Bool_t          muminus_Hlt2DiMuonLowMassDecision_TOS;
   Bool_t          muminus_Hlt2DiMuonDecision_Dec;
   Bool_t          muminus_Hlt2DiMuonDecision_TIS;
   Bool_t          muminus_Hlt2DiMuonDecision_TOS;
   Bool_t          muminus_Hlt2CharmSemilepD2HMuMuDecision_Dec;
   Bool_t          muminus_Hlt2CharmSemilepD2HMuMuDecision_TIS;
   Bool_t          muminus_Hlt2CharmSemilepD2HMuMuDecision_TOS;
   Bool_t          muminus_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec;
   Bool_t          muminus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS;
   Bool_t          muminus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS;
   Int_t           muminus_TRACK_Type;
   Int_t           muminus_TRACK_Key;
   Double_t        muminus_TRACK_CHI2NDOF;
   Double_t        muminus_TRACK_PCHI2;
   Double_t        muminus_TRACK_MatchCHI2;
   Double_t        muminus_TRACK_GhostProb;
   Double_t        muminus_TRACK_CloneDist;
   Double_t        muminus_TRACK_Likelihood;
   UInt_t          nCandidate;
   ULong64_t       totCandidates;
   ULong64_t       EventInSequence;
   UInt_t          runNumber;
   ULong64_t       eventNumber;
   UInt_t          BCID;
   Int_t           BCType;
   UInt_t          OdinTCK;
   UInt_t          L0DUTCK;
   UInt_t          HLT1TCK;
   UInt_t          HLT2TCK;
   ULong64_t       GpsTime;
   Short_t         Polarity;
   Int_t           nPV;
   Float_t         PVX[100];   //[nPV]
   Float_t         PVY[100];   //[nPV]
   Float_t         PVZ[100];   //[nPV]
   Float_t         PVXERR[100];   //[nPV]
   Float_t         PVYERR[100];   //[nPV]
   Float_t         PVZERR[100];   //[nPV]
   Float_t         PVCHI2[100];   //[nPV]
   Float_t         PVNDOF[100];   //[nPV]
   Float_t         PVNTRACKS[100];   //[nPV]
   Int_t           nPVs;
   Int_t           nTracks;
   Int_t           nLongTracks;
   Int_t           nDownstreamTracks;
   Int_t           nUpstreamTracks;
   Int_t           nVeloTracks;
   Int_t           nTTracks;
   Int_t           nBackTracks;
   Int_t           nRich1Hits;
   Int_t           nRich2Hits;
   Int_t           nVeloClusters;
   Int_t           nITClusters;
   Int_t           nTTClusters;
   Int_t           nOTClusters;
   Int_t           nSPDHits;
   Int_t           nMuonCoordsS0;
   Int_t           nMuonCoordsS1;
   Int_t           nMuonCoordsS2;
   Int_t           nMuonCoordsS3;
   Int_t           nMuonCoordsS4;
   Int_t           nMuonTracks;
   Int_t           L0Global;
   UInt_t          Hlt1Global;
   UInt_t          Hlt2Global;

   // List of branches
   TBranch        *b_D_ENDVERTEX_X;   //!
   TBranch        *b_D_ENDVERTEX_Y;   //!
   TBranch        *b_D_ENDVERTEX_Z;   //!
   TBranch        *b_D_ENDVERTEX_XERR;   //!
   TBranch        *b_D_ENDVERTEX_YERR;   //!
   TBranch        *b_D_ENDVERTEX_ZERR;   //!
   TBranch        *b_D_ENDVERTEX_CHI2;   //!
   TBranch        *b_D_ENDVERTEX_NDOF;   //!
   TBranch        *b_D_ENDVERTEX_COV_;   //!
   TBranch        *b_D_OWNPV_X;   //!
   TBranch        *b_D_OWNPV_Y;   //!
   TBranch        *b_D_OWNPV_Z;   //!
   TBranch        *b_D_OWNPV_XERR;   //!
   TBranch        *b_D_OWNPV_YERR;   //!
   TBranch        *b_D_OWNPV_ZERR;   //!
   TBranch        *b_D_OWNPV_CHI2;   //!
   TBranch        *b_D_OWNPV_NDOF;   //!
   TBranch        *b_D_OWNPV_COV_;   //!
   TBranch        *b_D_IP_OWNPV;   //!
   TBranch        *b_D_IPCHI2_OWNPV;   //!
   TBranch        *b_D_FD_OWNPV;   //!
   TBranch        *b_D_FDCHI2_OWNPV;   //!
   TBranch        *b_D_DIRA_OWNPV;   //!
   TBranch        *b_D_P;   //!
   TBranch        *b_D_PT;   //!
   TBranch        *b_D_PE;   //!
   TBranch        *b_D_PX;   //!
   TBranch        *b_D_PY;   //!
   TBranch        *b_D_PZ;   //!
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
   TBranch        *b_piplus_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_piplus_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_piplus_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_piplus_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_piplus_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_piplus_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_piplus_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_piplus_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_piplus_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_piplus_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_piplus_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_piplus_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_piplus_CosTheta;   //!
   TBranch        *b_piplus_OWNPV_X;   //!
   TBranch        *b_piplus_OWNPV_Y;   //!
   TBranch        *b_piplus_OWNPV_Z;   //!
   TBranch        *b_piplus_OWNPV_XERR;   //!
   TBranch        *b_piplus_OWNPV_YERR;   //!
   TBranch        *b_piplus_OWNPV_ZERR;   //!
   TBranch        *b_piplus_OWNPV_CHI2;   //!
   TBranch        *b_piplus_OWNPV_NDOF;   //!
   TBranch        *b_piplus_OWNPV_COV_;   //!
   TBranch        *b_piplus_IP_OWNPV;   //!
   TBranch        *b_piplus_IPCHI2_OWNPV;   //!
   TBranch        *b_piplus_ORIVX_X;   //!
   TBranch        *b_piplus_ORIVX_Y;   //!
   TBranch        *b_piplus_ORIVX_Z;   //!
   TBranch        *b_piplus_ORIVX_XERR;   //!
   TBranch        *b_piplus_ORIVX_YERR;   //!
   TBranch        *b_piplus_ORIVX_ZERR;   //!
   TBranch        *b_piplus_ORIVX_CHI2;   //!
   TBranch        *b_piplus_ORIVX_NDOF;   //!
   TBranch        *b_piplus_ORIVX_COV_;   //!
   TBranch        *b_piplus_P;   //!
   TBranch        *b_piplus_PT;   //!
   TBranch        *b_piplus_PE;   //!
   TBranch        *b_piplus_PX;   //!
   TBranch        *b_piplus_PY;   //!
   TBranch        *b_piplus_PZ;   //!
   TBranch        *b_piplus_M;   //!
   TBranch        *b_piplus_ID;   //!
   TBranch        *b_piplus_PIDe;   //!
   TBranch        *b_piplus_PIDmu;   //!
   TBranch        *b_piplus_PIDK;   //!
   TBranch        *b_piplus_PIDp;   //!
   TBranch        *b_piplus_ProbNNe;   //!
   TBranch        *b_piplus_ProbNNk;   //!
   TBranch        *b_piplus_ProbNNp;   //!
   TBranch        *b_piplus_ProbNNpi;   //!
   TBranch        *b_piplus_ProbNNmu;   //!
   TBranch        *b_piplus_ProbNNghost;   //!
   TBranch        *b_piplus_hasMuon;   //!
   TBranch        *b_piplus_isMuon;   //!
   TBranch        *b_piplus_hasRich;   //!
   TBranch        *b_piplus_hasCalo;   //!
   TBranch        *b_piplus_L0Global_Dec;   //!
   TBranch        *b_piplus_L0Global_TIS;   //!
   TBranch        *b_piplus_L0Global_TOS;   //!
   TBranch        *b_piplus_Hlt1Global_Dec;   //!
   TBranch        *b_piplus_Hlt1Global_TIS;   //!
   TBranch        *b_piplus_Hlt1Global_TOS;   //!
   TBranch        *b_piplus_Hlt1Phys_Dec;   //!
   TBranch        *b_piplus_Hlt1Phys_TIS;   //!
   TBranch        *b_piplus_Hlt1Phys_TOS;   //!
   TBranch        *b_piplus_Hlt2Global_Dec;   //!
   TBranch        *b_piplus_Hlt2Global_TIS;   //!
   TBranch        *b_piplus_Hlt2Global_TOS;   //!
   TBranch        *b_piplus_Hlt2Phys_Dec;   //!
   TBranch        *b_piplus_Hlt2Phys_TIS;   //!
   TBranch        *b_piplus_Hlt2Phys_TOS;   //!
   TBranch        *b_piplus_L0DiMuonDecision_Dec;   //!
   TBranch        *b_piplus_L0DiMuonDecision_TIS;   //!
   TBranch        *b_piplus_L0DiMuonDecision_TOS;   //!
   TBranch        *b_piplus_L0MuonDecision_Dec;   //!
   TBranch        *b_piplus_L0MuonDecision_TIS;   //!
   TBranch        *b_piplus_L0MuonDecision_TOS;   //!
   TBranch        *b_piplus_L0MuonHighDecision_Dec;   //!
   TBranch        *b_piplus_L0MuonHighDecision_TIS;   //!
   TBranch        *b_piplus_L0MuonHighDecision_TOS;   //!
   TBranch        *b_piplus_Hlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_piplus_Hlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_piplus_Hlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_piplus_Hlt1DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_piplus_Hlt1DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_piplus_Hlt1DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_piplus_Hlt1SingleMuonHighPTDecision_Dec;   //!
   TBranch        *b_piplus_Hlt1SingleMuonHighPTDecision_TIS;   //!
   TBranch        *b_piplus_Hlt1SingleMuonHighPTDecision_TOS;   //!
   TBranch        *b_piplus_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_piplus_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_piplus_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_piplus_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_piplus_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_piplus_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_piplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec;   //!
   TBranch        *b_piplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS;   //!
   TBranch        *b_piplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS;   //!
   TBranch        *b_piplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec;   //!
   TBranch        *b_piplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS;   //!
   TBranch        *b_piplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS;   //!
   TBranch        *b_piplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec;   //!
   TBranch        *b_piplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS;   //!
   TBranch        *b_piplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS;   //!
   TBranch        *b_piplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec;   //!
   TBranch        *b_piplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS;   //!
   TBranch        *b_piplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS;   //!
   TBranch        *b_piplus_Hlt2DiMuonDY1Decision_Dec;   //!
   TBranch        *b_piplus_Hlt2DiMuonDY1Decision_TIS;   //!
   TBranch        *b_piplus_Hlt2DiMuonDY1Decision_TOS;   //!
   TBranch        *b_piplus_Hlt2DiMuonDY2Decision_Dec;   //!
   TBranch        *b_piplus_Hlt2DiMuonDY2Decision_TIS;   //!
   TBranch        *b_piplus_Hlt2DiMuonDY2Decision_TOS;   //!
   TBranch        *b_piplus_Hlt2DiMuonDY3Decision_Dec;   //!
   TBranch        *b_piplus_Hlt2DiMuonDY3Decision_TIS;   //!
   TBranch        *b_piplus_Hlt2DiMuonDY3Decision_TOS;   //!
   TBranch        *b_piplus_Hlt2DiMuonDY4Decision_Dec;   //!
   TBranch        *b_piplus_Hlt2DiMuonDY4Decision_TIS;   //!
   TBranch        *b_piplus_Hlt2DiMuonDY4Decision_TOS;   //!
   TBranch        *b_piplus_Hlt2DiMuonDetachedDecision_Dec;   //!
   TBranch        *b_piplus_Hlt2DiMuonDetachedDecision_TIS;   //!
   TBranch        *b_piplus_Hlt2DiMuonDetachedDecision_TOS;   //!
   TBranch        *b_piplus_Hlt2DiMuonDetachedHeavyDecision_Dec;   //!
   TBranch        *b_piplus_Hlt2DiMuonDetachedHeavyDecision_TIS;   //!
   TBranch        *b_piplus_Hlt2DiMuonDetachedHeavyDecision_TOS;   //!
   TBranch        *b_piplus_Hlt2DiMuonBDecision_Dec;   //!
   TBranch        *b_piplus_Hlt2DiMuonBDecision_TIS;   //!
   TBranch        *b_piplus_Hlt2DiMuonBDecision_TOS;   //!
   TBranch        *b_piplus_Hlt2DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_piplus_Hlt2DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_piplus_Hlt2DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_piplus_Hlt2DiMuonDecision_Dec;   //!
   TBranch        *b_piplus_Hlt2DiMuonDecision_TIS;   //!
   TBranch        *b_piplus_Hlt2DiMuonDecision_TOS;   //!
   TBranch        *b_piplus_Hlt2CharmSemilepD2HMuMuDecision_Dec;   //!
   TBranch        *b_piplus_Hlt2CharmSemilepD2HMuMuDecision_TIS;   //!
   TBranch        *b_piplus_Hlt2CharmSemilepD2HMuMuDecision_TOS;   //!
   TBranch        *b_piplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec;   //!
   TBranch        *b_piplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS;   //!
   TBranch        *b_piplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS;   //!
   TBranch        *b_piplus_TRACK_Type;   //!
   TBranch        *b_piplus_TRACK_Key;   //!
   TBranch        *b_piplus_TRACK_CHI2NDOF;   //!
   TBranch        *b_piplus_TRACK_PCHI2;   //!
   TBranch        *b_piplus_TRACK_MatchCHI2;   //!
   TBranch        *b_piplus_TRACK_GhostProb;   //!
   TBranch        *b_piplus_TRACK_CloneDist;   //!
   TBranch        *b_piplus_TRACK_Likelihood;   //!
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
   TBranch        *b_muplus_OWNPV_X;   //!
   TBranch        *b_muplus_OWNPV_Y;   //!
   TBranch        *b_muplus_OWNPV_Z;   //!
   TBranch        *b_muplus_OWNPV_XERR;   //!
   TBranch        *b_muplus_OWNPV_YERR;   //!
   TBranch        *b_muplus_OWNPV_ZERR;   //!
   TBranch        *b_muplus_OWNPV_CHI2;   //!
   TBranch        *b_muplus_OWNPV_NDOF;   //!
   TBranch        *b_muplus_OWNPV_COV_;   //!
   TBranch        *b_muplus_IP_OWNPV;   //!
   TBranch        *b_muplus_IPCHI2_OWNPV;   //!
   TBranch        *b_muplus_ORIVX_X;   //!
   TBranch        *b_muplus_ORIVX_Y;   //!
   TBranch        *b_muplus_ORIVX_Z;   //!
   TBranch        *b_muplus_ORIVX_XERR;   //!
   TBranch        *b_muplus_ORIVX_YERR;   //!
   TBranch        *b_muplus_ORIVX_ZERR;   //!
   TBranch        *b_muplus_ORIVX_CHI2;   //!
   TBranch        *b_muplus_ORIVX_NDOF;   //!
   TBranch        *b_muplus_ORIVX_COV_;   //!
   TBranch        *b_muplus_P;   //!
   TBranch        *b_muplus_PT;   //!
   TBranch        *b_muplus_PE;   //!
   TBranch        *b_muplus_PX;   //!
   TBranch        *b_muplus_PY;   //!
   TBranch        *b_muplus_PZ;   //!
   TBranch        *b_muplus_M;   //!
   TBranch        *b_muplus_ID;   //!
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
   TBranch        *b_muplus_hasMuon;   //!
   TBranch        *b_muplus_isMuon;   //!
   TBranch        *b_muplus_hasRich;   //!
   TBranch        *b_muplus_hasCalo;   //!
   TBranch        *b_muplus_L0Global_Dec;   //!
   TBranch        *b_muplus_L0Global_TIS;   //!
   TBranch        *b_muplus_L0Global_TOS;   //!
   TBranch        *b_muplus_Hlt1Global_Dec;   //!
   TBranch        *b_muplus_Hlt1Global_TIS;   //!
   TBranch        *b_muplus_Hlt1Global_TOS;   //!
   TBranch        *b_muplus_Hlt1Phys_Dec;   //!
   TBranch        *b_muplus_Hlt1Phys_TIS;   //!
   TBranch        *b_muplus_Hlt1Phys_TOS;   //!
   TBranch        *b_muplus_Hlt2Global_Dec;   //!
   TBranch        *b_muplus_Hlt2Global_TIS;   //!
   TBranch        *b_muplus_Hlt2Global_TOS;   //!
   TBranch        *b_muplus_Hlt2Phys_Dec;   //!
   TBranch        *b_muplus_Hlt2Phys_TIS;   //!
   TBranch        *b_muplus_Hlt2Phys_TOS;   //!
   TBranch        *b_muplus_L0DiMuonDecision_Dec;   //!
   TBranch        *b_muplus_L0DiMuonDecision_TIS;   //!
   TBranch        *b_muplus_L0DiMuonDecision_TOS;   //!
   TBranch        *b_muplus_L0MuonDecision_Dec;   //!
   TBranch        *b_muplus_L0MuonDecision_TIS;   //!
   TBranch        *b_muplus_L0MuonDecision_TOS;   //!
   TBranch        *b_muplus_L0MuonHighDecision_Dec;   //!
   TBranch        *b_muplus_L0MuonHighDecision_TIS;   //!
   TBranch        *b_muplus_L0MuonHighDecision_TOS;   //!
   TBranch        *b_muplus_Hlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_muplus_Hlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_muplus_Hlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_muplus_Hlt1DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_muplus_Hlt1DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_muplus_Hlt1DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_muplus_Hlt1SingleMuonHighPTDecision_Dec;   //!
   TBranch        *b_muplus_Hlt1SingleMuonHighPTDecision_TIS;   //!
   TBranch        *b_muplus_Hlt1SingleMuonHighPTDecision_TOS;   //!
   TBranch        *b_muplus_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_muplus_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_muplus_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_muplus_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_muplus_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_muplus_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_muplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2DiMuonDY1Decision_Dec;   //!
   TBranch        *b_muplus_Hlt2DiMuonDY1Decision_TIS;   //!
   TBranch        *b_muplus_Hlt2DiMuonDY1Decision_TOS;   //!
   TBranch        *b_muplus_Hlt2DiMuonDY2Decision_Dec;   //!
   TBranch        *b_muplus_Hlt2DiMuonDY2Decision_TIS;   //!
   TBranch        *b_muplus_Hlt2DiMuonDY2Decision_TOS;   //!
   TBranch        *b_muplus_Hlt2DiMuonDY3Decision_Dec;   //!
   TBranch        *b_muplus_Hlt2DiMuonDY3Decision_TIS;   //!
   TBranch        *b_muplus_Hlt2DiMuonDY3Decision_TOS;   //!
   TBranch        *b_muplus_Hlt2DiMuonDY4Decision_Dec;   //!
   TBranch        *b_muplus_Hlt2DiMuonDY4Decision_TIS;   //!
   TBranch        *b_muplus_Hlt2DiMuonDY4Decision_TOS;   //!
   TBranch        *b_muplus_Hlt2DiMuonDetachedDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2DiMuonDetachedDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2DiMuonDetachedDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2DiMuonDetachedHeavyDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2DiMuonDetachedHeavyDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2DiMuonDetachedHeavyDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2DiMuonBDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2DiMuonBDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2DiMuonBDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2DiMuonDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2DiMuonDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2DiMuonDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2CharmSemilepD2HMuMuDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2CharmSemilepD2HMuMuDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2CharmSemilepD2HMuMuDecision_TOS;   //!
   TBranch        *b_muplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec;   //!
   TBranch        *b_muplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS;   //!
   TBranch        *b_muplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS;   //!
   TBranch        *b_muplus_TRACK_Type;   //!
   TBranch        *b_muplus_TRACK_Key;   //!
   TBranch        *b_muplus_TRACK_CHI2NDOF;   //!
   TBranch        *b_muplus_TRACK_PCHI2;   //!
   TBranch        *b_muplus_TRACK_MatchCHI2;   //!
   TBranch        *b_muplus_TRACK_GhostProb;   //!
   TBranch        *b_muplus_TRACK_CloneDist;   //!
   TBranch        *b_muplus_TRACK_Likelihood;   //!
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
   TBranch        *b_muminus_OWNPV_X;   //!
   TBranch        *b_muminus_OWNPV_Y;   //!
   TBranch        *b_muminus_OWNPV_Z;   //!
   TBranch        *b_muminus_OWNPV_XERR;   //!
   TBranch        *b_muminus_OWNPV_YERR;   //!
   TBranch        *b_muminus_OWNPV_ZERR;   //!
   TBranch        *b_muminus_OWNPV_CHI2;   //!
   TBranch        *b_muminus_OWNPV_NDOF;   //!
   TBranch        *b_muminus_OWNPV_COV_;   //!
   TBranch        *b_muminus_IP_OWNPV;   //!
   TBranch        *b_muminus_IPCHI2_OWNPV;   //!
   TBranch        *b_muminus_ORIVX_X;   //!
   TBranch        *b_muminus_ORIVX_Y;   //!
   TBranch        *b_muminus_ORIVX_Z;   //!
   TBranch        *b_muminus_ORIVX_XERR;   //!
   TBranch        *b_muminus_ORIVX_YERR;   //!
   TBranch        *b_muminus_ORIVX_ZERR;   //!
   TBranch        *b_muminus_ORIVX_CHI2;   //!
   TBranch        *b_muminus_ORIVX_NDOF;   //!
   TBranch        *b_muminus_ORIVX_COV_;   //!
   TBranch        *b_muminus_P;   //!
   TBranch        *b_muminus_PT;   //!
   TBranch        *b_muminus_PE;   //!
   TBranch        *b_muminus_PX;   //!
   TBranch        *b_muminus_PY;   //!
   TBranch        *b_muminus_PZ;   //!
   TBranch        *b_muminus_M;   //!
   TBranch        *b_muminus_ID;   //!
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
   TBranch        *b_muminus_hasMuon;   //!
   TBranch        *b_muminus_isMuon;   //!
   TBranch        *b_muminus_hasRich;   //!
   TBranch        *b_muminus_hasCalo;   //!
   TBranch        *b_muminus_L0Global_Dec;   //!
   TBranch        *b_muminus_L0Global_TIS;   //!
   TBranch        *b_muminus_L0Global_TOS;   //!
   TBranch        *b_muminus_Hlt1Global_Dec;   //!
   TBranch        *b_muminus_Hlt1Global_TIS;   //!
   TBranch        *b_muminus_Hlt1Global_TOS;   //!
   TBranch        *b_muminus_Hlt1Phys_Dec;   //!
   TBranch        *b_muminus_Hlt1Phys_TIS;   //!
   TBranch        *b_muminus_Hlt1Phys_TOS;   //!
   TBranch        *b_muminus_Hlt2Global_Dec;   //!
   TBranch        *b_muminus_Hlt2Global_TIS;   //!
   TBranch        *b_muminus_Hlt2Global_TOS;   //!
   TBranch        *b_muminus_Hlt2Phys_Dec;   //!
   TBranch        *b_muminus_Hlt2Phys_TIS;   //!
   TBranch        *b_muminus_Hlt2Phys_TOS;   //!
   TBranch        *b_muminus_L0DiMuonDecision_Dec;   //!
   TBranch        *b_muminus_L0DiMuonDecision_TIS;   //!
   TBranch        *b_muminus_L0DiMuonDecision_TOS;   //!
   TBranch        *b_muminus_L0MuonDecision_Dec;   //!
   TBranch        *b_muminus_L0MuonDecision_TIS;   //!
   TBranch        *b_muminus_L0MuonDecision_TOS;   //!
   TBranch        *b_muminus_L0MuonHighDecision_Dec;   //!
   TBranch        *b_muminus_L0MuonHighDecision_TIS;   //!
   TBranch        *b_muminus_L0MuonHighDecision_TOS;   //!
   TBranch        *b_muminus_Hlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_muminus_Hlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_muminus_Hlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_muminus_Hlt1DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_muminus_Hlt1DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_muminus_Hlt1DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_muminus_Hlt1SingleMuonHighPTDecision_Dec;   //!
   TBranch        *b_muminus_Hlt1SingleMuonHighPTDecision_TIS;   //!
   TBranch        *b_muminus_Hlt1SingleMuonHighPTDecision_TOS;   //!
   TBranch        *b_muminus_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_muminus_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_muminus_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_muminus_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_muminus_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_muminus_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_muminus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2DiMuonDY1Decision_Dec;   //!
   TBranch        *b_muminus_Hlt2DiMuonDY1Decision_TIS;   //!
   TBranch        *b_muminus_Hlt2DiMuonDY1Decision_TOS;   //!
   TBranch        *b_muminus_Hlt2DiMuonDY2Decision_Dec;   //!
   TBranch        *b_muminus_Hlt2DiMuonDY2Decision_TIS;   //!
   TBranch        *b_muminus_Hlt2DiMuonDY2Decision_TOS;   //!
   TBranch        *b_muminus_Hlt2DiMuonDY3Decision_Dec;   //!
   TBranch        *b_muminus_Hlt2DiMuonDY3Decision_TIS;   //!
   TBranch        *b_muminus_Hlt2DiMuonDY3Decision_TOS;   //!
   TBranch        *b_muminus_Hlt2DiMuonDY4Decision_Dec;   //!
   TBranch        *b_muminus_Hlt2DiMuonDY4Decision_TIS;   //!
   TBranch        *b_muminus_Hlt2DiMuonDY4Decision_TOS;   //!
   TBranch        *b_muminus_Hlt2DiMuonDetachedDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2DiMuonDetachedDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2DiMuonDetachedDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2DiMuonDetachedHeavyDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2DiMuonDetachedHeavyDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2DiMuonDetachedHeavyDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2DiMuonBDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2DiMuonBDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2DiMuonBDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2DiMuonDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2DiMuonDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2DiMuonDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2CharmSemilepD2HMuMuDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2CharmSemilepD2HMuMuDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2CharmSemilepD2HMuMuDecision_TOS;   //!
   TBranch        *b_muminus_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec;   //!
   TBranch        *b_muminus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS;   //!
   TBranch        *b_muminus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS;   //!
   TBranch        *b_muminus_TRACK_Type;   //!
   TBranch        *b_muminus_TRACK_Key;   //!
   TBranch        *b_muminus_TRACK_CHI2NDOF;   //!
   TBranch        *b_muminus_TRACK_PCHI2;   //!
   TBranch        *b_muminus_TRACK_MatchCHI2;   //!
   TBranch        *b_muminus_TRACK_GhostProb;   //!
   TBranch        *b_muminus_TRACK_CloneDist;   //!
   TBranch        *b_muminus_TRACK_Likelihood;   //!
   TBranch        *b_nCandidate;   //!
   TBranch        *b_totCandidates;   //!
   TBranch        *b_EventInSequence;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_BCID;   //!
   TBranch        *b_BCType;   //!
   TBranch        *b_OdinTCK;   //!
   TBranch        *b_L0DUTCK;   //!
   TBranch        *b_HLT1TCK;   //!
   TBranch        *b_HLT2TCK;   //!
   TBranch        *b_GpsTime;   //!
   TBranch        *b_Polarity;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_PVX;   //!
   TBranch        *b_PVY;   //!
   TBranch        *b_PVZ;   //!
   TBranch        *b_PVXERR;   //!
   TBranch        *b_PVYERR;   //!
   TBranch        *b_PVZERR;   //!
   TBranch        *b_PVCHI2;   //!
   TBranch        *b_PVNDOF;   //!
   TBranch        *b_PVNTRACKS;   //!
   TBranch        *b_nPVs;   //!
   TBranch        *b_nTracks;   //!
   TBranch        *b_nLongTracks;   //!
   TBranch        *b_nDownstreamTracks;   //!
   TBranch        *b_nUpstreamTracks;   //!
   TBranch        *b_nVeloTracks;   //!
   TBranch        *b_nTTracks;   //!
   TBranch        *b_nBackTracks;   //!
   TBranch        *b_nRich1Hits;   //!
   TBranch        *b_nRich2Hits;   //!
   TBranch        *b_nVeloClusters;   //!
   TBranch        *b_nITClusters;   //!
   TBranch        *b_nTTClusters;   //!
   TBranch        *b_nOTClusters;   //!
   TBranch        *b_nSPDHits;   //!
   TBranch        *b_nMuonCoordsS0;   //!
   TBranch        *b_nMuonCoordsS1;   //!
   TBranch        *b_nMuonCoordsS2;   //!
   TBranch        *b_nMuonCoordsS3;   //!
   TBranch        *b_nMuonCoordsS4;   //!
   TBranch        *b_nMuonTracks;   //!
   TBranch        *b_L0Global;   //!
   TBranch        *b_Hlt1Global;   //!
   TBranch        *b_Hlt2Global;   //!

   MCD2PimumuOS_class(TTree *tree=0);
   virtual ~MCD2PimumuOS_class();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef MCD2PimumuOS_class_cxx
MCD2PimumuOS_class::MCD2PimumuOS_class(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis-case-study/Step5_finalSelection/MC_D2PiMuMu.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis-case-study/Step5_finalSelection/MC_D2PiMuMu.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis-case-study/Step5_finalSelection/MC_D2PiMuMu.root:/D2PimumuOSTuple");
      dir->GetObject("DecayTree",tree);

   }
   Init(tree);
}

MCD2PimumuOS_class::~MCD2PimumuOS_class()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t MCD2PimumuOS_class::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t MCD2PimumuOS_class::LoadTree(Long64_t entry)
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

void MCD2PimumuOS_class::Init(TTree *tree)
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

   fChain->SetBranchAddress("D_ENDVERTEX_X", &D_ENDVERTEX_X, &b_D_ENDVERTEX_X);
   fChain->SetBranchAddress("D_ENDVERTEX_Y", &D_ENDVERTEX_Y, &b_D_ENDVERTEX_Y);
   fChain->SetBranchAddress("D_ENDVERTEX_Z", &D_ENDVERTEX_Z, &b_D_ENDVERTEX_Z);
   fChain->SetBranchAddress("D_ENDVERTEX_XERR", &D_ENDVERTEX_XERR, &b_D_ENDVERTEX_XERR);
   fChain->SetBranchAddress("D_ENDVERTEX_YERR", &D_ENDVERTEX_YERR, &b_D_ENDVERTEX_YERR);
   fChain->SetBranchAddress("D_ENDVERTEX_ZERR", &D_ENDVERTEX_ZERR, &b_D_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("D_ENDVERTEX_CHI2", &D_ENDVERTEX_CHI2, &b_D_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("D_ENDVERTEX_NDOF", &D_ENDVERTEX_NDOF, &b_D_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("D_ENDVERTEX_COV_", D_ENDVERTEX_COV_, &b_D_ENDVERTEX_COV_);
   fChain->SetBranchAddress("D_OWNPV_X", &D_OWNPV_X, &b_D_OWNPV_X);
   fChain->SetBranchAddress("D_OWNPV_Y", &D_OWNPV_Y, &b_D_OWNPV_Y);
   fChain->SetBranchAddress("D_OWNPV_Z", &D_OWNPV_Z, &b_D_OWNPV_Z);
   fChain->SetBranchAddress("D_OWNPV_XERR", &D_OWNPV_XERR, &b_D_OWNPV_XERR);
   fChain->SetBranchAddress("D_OWNPV_YERR", &D_OWNPV_YERR, &b_D_OWNPV_YERR);
   fChain->SetBranchAddress("D_OWNPV_ZERR", &D_OWNPV_ZERR, &b_D_OWNPV_ZERR);
   fChain->SetBranchAddress("D_OWNPV_CHI2", &D_OWNPV_CHI2, &b_D_OWNPV_CHI2);
   fChain->SetBranchAddress("D_OWNPV_NDOF", &D_OWNPV_NDOF, &b_D_OWNPV_NDOF);
   fChain->SetBranchAddress("D_OWNPV_COV_", D_OWNPV_COV_, &b_D_OWNPV_COV_);
   fChain->SetBranchAddress("D_IP_OWNPV", &D_IP_OWNPV, &b_D_IP_OWNPV);
   fChain->SetBranchAddress("D_IPCHI2_OWNPV", &D_IPCHI2_OWNPV, &b_D_IPCHI2_OWNPV);
   fChain->SetBranchAddress("D_FD_OWNPV", &D_FD_OWNPV, &b_D_FD_OWNPV);
   fChain->SetBranchAddress("D_FDCHI2_OWNPV", &D_FDCHI2_OWNPV, &b_D_FDCHI2_OWNPV);
   fChain->SetBranchAddress("D_DIRA_OWNPV", &D_DIRA_OWNPV, &b_D_DIRA_OWNPV);
   fChain->SetBranchAddress("D_P", &D_P, &b_D_P);
   fChain->SetBranchAddress("D_PT", &D_PT, &b_D_PT);
   fChain->SetBranchAddress("D_PE", &D_PE, &b_D_PE);
   fChain->SetBranchAddress("D_PX", &D_PX, &b_D_PX);
   fChain->SetBranchAddress("D_PY", &D_PY, &b_D_PY);
   fChain->SetBranchAddress("D_PZ", &D_PZ, &b_D_PZ);
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
   fChain->SetBranchAddress("piplus_MC12TuneV2_ProbNNe", &piplus_MC12TuneV2_ProbNNe, &b_piplus_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("piplus_MC12TuneV2_ProbNNmu", &piplus_MC12TuneV2_ProbNNmu, &b_piplus_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("piplus_MC12TuneV2_ProbNNpi", &piplus_MC12TuneV2_ProbNNpi, &b_piplus_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("piplus_MC12TuneV2_ProbNNk", &piplus_MC12TuneV2_ProbNNk, &b_piplus_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("piplus_MC12TuneV2_ProbNNp", &piplus_MC12TuneV2_ProbNNp, &b_piplus_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("piplus_MC12TuneV2_ProbNNghost", &piplus_MC12TuneV2_ProbNNghost, &b_piplus_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("piplus_MC12TuneV3_ProbNNe", &piplus_MC12TuneV3_ProbNNe, &b_piplus_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("piplus_MC12TuneV3_ProbNNmu", &piplus_MC12TuneV3_ProbNNmu, &b_piplus_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("piplus_MC12TuneV3_ProbNNpi", &piplus_MC12TuneV3_ProbNNpi, &b_piplus_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("piplus_MC12TuneV3_ProbNNk", &piplus_MC12TuneV3_ProbNNk, &b_piplus_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("piplus_MC12TuneV3_ProbNNp", &piplus_MC12TuneV3_ProbNNp, &b_piplus_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("piplus_MC12TuneV3_ProbNNghost", &piplus_MC12TuneV3_ProbNNghost, &b_piplus_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("piplus_CosTheta", &piplus_CosTheta, &b_piplus_CosTheta);
   fChain->SetBranchAddress("piplus_OWNPV_X", &piplus_OWNPV_X, &b_piplus_OWNPV_X);
   fChain->SetBranchAddress("piplus_OWNPV_Y", &piplus_OWNPV_Y, &b_piplus_OWNPV_Y);
   fChain->SetBranchAddress("piplus_OWNPV_Z", &piplus_OWNPV_Z, &b_piplus_OWNPV_Z);
   fChain->SetBranchAddress("piplus_OWNPV_XERR", &piplus_OWNPV_XERR, &b_piplus_OWNPV_XERR);
   fChain->SetBranchAddress("piplus_OWNPV_YERR", &piplus_OWNPV_YERR, &b_piplus_OWNPV_YERR);
   fChain->SetBranchAddress("piplus_OWNPV_ZERR", &piplus_OWNPV_ZERR, &b_piplus_OWNPV_ZERR);
   fChain->SetBranchAddress("piplus_OWNPV_CHI2", &piplus_OWNPV_CHI2, &b_piplus_OWNPV_CHI2);
   fChain->SetBranchAddress("piplus_OWNPV_NDOF", &piplus_OWNPV_NDOF, &b_piplus_OWNPV_NDOF);
   fChain->SetBranchAddress("piplus_OWNPV_COV_", piplus_OWNPV_COV_, &b_piplus_OWNPV_COV_);
   fChain->SetBranchAddress("piplus_IP_OWNPV", &piplus_IP_OWNPV, &b_piplus_IP_OWNPV);
   fChain->SetBranchAddress("piplus_IPCHI2_OWNPV", &piplus_IPCHI2_OWNPV, &b_piplus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("piplus_ORIVX_X", &piplus_ORIVX_X, &b_piplus_ORIVX_X);
   fChain->SetBranchAddress("piplus_ORIVX_Y", &piplus_ORIVX_Y, &b_piplus_ORIVX_Y);
   fChain->SetBranchAddress("piplus_ORIVX_Z", &piplus_ORIVX_Z, &b_piplus_ORIVX_Z);
   fChain->SetBranchAddress("piplus_ORIVX_XERR", &piplus_ORIVX_XERR, &b_piplus_ORIVX_XERR);
   fChain->SetBranchAddress("piplus_ORIVX_YERR", &piplus_ORIVX_YERR, &b_piplus_ORIVX_YERR);
   fChain->SetBranchAddress("piplus_ORIVX_ZERR", &piplus_ORIVX_ZERR, &b_piplus_ORIVX_ZERR);
   fChain->SetBranchAddress("piplus_ORIVX_CHI2", &piplus_ORIVX_CHI2, &b_piplus_ORIVX_CHI2);
   fChain->SetBranchAddress("piplus_ORIVX_NDOF", &piplus_ORIVX_NDOF, &b_piplus_ORIVX_NDOF);
   fChain->SetBranchAddress("piplus_ORIVX_COV_", piplus_ORIVX_COV_, &b_piplus_ORIVX_COV_);
   fChain->SetBranchAddress("piplus_P", &piplus_P, &b_piplus_P);
   fChain->SetBranchAddress("piplus_PT", &piplus_PT, &b_piplus_PT);
   fChain->SetBranchAddress("piplus_PE", &piplus_PE, &b_piplus_PE);
   fChain->SetBranchAddress("piplus_PX", &piplus_PX, &b_piplus_PX);
   fChain->SetBranchAddress("piplus_PY", &piplus_PY, &b_piplus_PY);
   fChain->SetBranchAddress("piplus_PZ", &piplus_PZ, &b_piplus_PZ);
   fChain->SetBranchAddress("piplus_M", &piplus_M, &b_piplus_M);
   fChain->SetBranchAddress("piplus_ID", &piplus_ID, &b_piplus_ID);
   fChain->SetBranchAddress("piplus_PIDe", &piplus_PIDe, &b_piplus_PIDe);
   fChain->SetBranchAddress("piplus_PIDmu", &piplus_PIDmu, &b_piplus_PIDmu);
   fChain->SetBranchAddress("piplus_PIDK", &piplus_PIDK, &b_piplus_PIDK);
   fChain->SetBranchAddress("piplus_PIDp", &piplus_PIDp, &b_piplus_PIDp);
   fChain->SetBranchAddress("piplus_ProbNNe", &piplus_ProbNNe, &b_piplus_ProbNNe);
   fChain->SetBranchAddress("piplus_ProbNNk", &piplus_ProbNNk, &b_piplus_ProbNNk);
   fChain->SetBranchAddress("piplus_ProbNNp", &piplus_ProbNNp, &b_piplus_ProbNNp);
   fChain->SetBranchAddress("piplus_ProbNNpi", &piplus_ProbNNpi, &b_piplus_ProbNNpi);
   fChain->SetBranchAddress("piplus_ProbNNmu", &piplus_ProbNNmu, &b_piplus_ProbNNmu);
   fChain->SetBranchAddress("piplus_ProbNNghost", &piplus_ProbNNghost, &b_piplus_ProbNNghost);
   fChain->SetBranchAddress("piplus_hasMuon", &piplus_hasMuon, &b_piplus_hasMuon);
   fChain->SetBranchAddress("piplus_isMuon", &piplus_isMuon, &b_piplus_isMuon);
   fChain->SetBranchAddress("piplus_hasRich", &piplus_hasRich, &b_piplus_hasRich);
   fChain->SetBranchAddress("piplus_hasCalo", &piplus_hasCalo, &b_piplus_hasCalo);
   fChain->SetBranchAddress("piplus_L0Global_Dec", &piplus_L0Global_Dec, &b_piplus_L0Global_Dec);
   fChain->SetBranchAddress("piplus_L0Global_TIS", &piplus_L0Global_TIS, &b_piplus_L0Global_TIS);
   fChain->SetBranchAddress("piplus_L0Global_TOS", &piplus_L0Global_TOS, &b_piplus_L0Global_TOS);
   fChain->SetBranchAddress("piplus_Hlt1Global_Dec", &piplus_Hlt1Global_Dec, &b_piplus_Hlt1Global_Dec);
   fChain->SetBranchAddress("piplus_Hlt1Global_TIS", &piplus_Hlt1Global_TIS, &b_piplus_Hlt1Global_TIS);
   fChain->SetBranchAddress("piplus_Hlt1Global_TOS", &piplus_Hlt1Global_TOS, &b_piplus_Hlt1Global_TOS);
   fChain->SetBranchAddress("piplus_Hlt1Phys_Dec", &piplus_Hlt1Phys_Dec, &b_piplus_Hlt1Phys_Dec);
   fChain->SetBranchAddress("piplus_Hlt1Phys_TIS", &piplus_Hlt1Phys_TIS, &b_piplus_Hlt1Phys_TIS);
   fChain->SetBranchAddress("piplus_Hlt1Phys_TOS", &piplus_Hlt1Phys_TOS, &b_piplus_Hlt1Phys_TOS);
   fChain->SetBranchAddress("piplus_Hlt2Global_Dec", &piplus_Hlt2Global_Dec, &b_piplus_Hlt2Global_Dec);
   fChain->SetBranchAddress("piplus_Hlt2Global_TIS", &piplus_Hlt2Global_TIS, &b_piplus_Hlt2Global_TIS);
   fChain->SetBranchAddress("piplus_Hlt2Global_TOS", &piplus_Hlt2Global_TOS, &b_piplus_Hlt2Global_TOS);
   fChain->SetBranchAddress("piplus_Hlt2Phys_Dec", &piplus_Hlt2Phys_Dec, &b_piplus_Hlt2Phys_Dec);
   fChain->SetBranchAddress("piplus_Hlt2Phys_TIS", &piplus_Hlt2Phys_TIS, &b_piplus_Hlt2Phys_TIS);
   fChain->SetBranchAddress("piplus_Hlt2Phys_TOS", &piplus_Hlt2Phys_TOS, &b_piplus_Hlt2Phys_TOS);
   fChain->SetBranchAddress("piplus_L0DiMuonDecision_Dec", &piplus_L0DiMuonDecision_Dec, &b_piplus_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("piplus_L0DiMuonDecision_TIS", &piplus_L0DiMuonDecision_TIS, &b_piplus_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("piplus_L0DiMuonDecision_TOS", &piplus_L0DiMuonDecision_TOS, &b_piplus_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("piplus_L0MuonDecision_Dec", &piplus_L0MuonDecision_Dec, &b_piplus_L0MuonDecision_Dec);
   fChain->SetBranchAddress("piplus_L0MuonDecision_TIS", &piplus_L0MuonDecision_TIS, &b_piplus_L0MuonDecision_TIS);
   fChain->SetBranchAddress("piplus_L0MuonDecision_TOS", &piplus_L0MuonDecision_TOS, &b_piplus_L0MuonDecision_TOS);
   fChain->SetBranchAddress("piplus_L0MuonHighDecision_Dec", &piplus_L0MuonHighDecision_Dec, &b_piplus_L0MuonHighDecision_Dec);
   fChain->SetBranchAddress("piplus_L0MuonHighDecision_TIS", &piplus_L0MuonHighDecision_TIS, &b_piplus_L0MuonHighDecision_TIS);
   fChain->SetBranchAddress("piplus_L0MuonHighDecision_TOS", &piplus_L0MuonHighDecision_TOS, &b_piplus_L0MuonHighDecision_TOS);
   fChain->SetBranchAddress("piplus_Hlt1DiMuonHighMassDecision_Dec", &piplus_Hlt1DiMuonHighMassDecision_Dec, &b_piplus_Hlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("piplus_Hlt1DiMuonHighMassDecision_TIS", &piplus_Hlt1DiMuonHighMassDecision_TIS, &b_piplus_Hlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("piplus_Hlt1DiMuonHighMassDecision_TOS", &piplus_Hlt1DiMuonHighMassDecision_TOS, &b_piplus_Hlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("piplus_Hlt1DiMuonLowMassDecision_Dec", &piplus_Hlt1DiMuonLowMassDecision_Dec, &b_piplus_Hlt1DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("piplus_Hlt1DiMuonLowMassDecision_TIS", &piplus_Hlt1DiMuonLowMassDecision_TIS, &b_piplus_Hlt1DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("piplus_Hlt1DiMuonLowMassDecision_TOS", &piplus_Hlt1DiMuonLowMassDecision_TOS, &b_piplus_Hlt1DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("piplus_Hlt1SingleMuonHighPTDecision_Dec", &piplus_Hlt1SingleMuonHighPTDecision_Dec, &b_piplus_Hlt1SingleMuonHighPTDecision_Dec);
   fChain->SetBranchAddress("piplus_Hlt1SingleMuonHighPTDecision_TIS", &piplus_Hlt1SingleMuonHighPTDecision_TIS, &b_piplus_Hlt1SingleMuonHighPTDecision_TIS);
   fChain->SetBranchAddress("piplus_Hlt1SingleMuonHighPTDecision_TOS", &piplus_Hlt1SingleMuonHighPTDecision_TOS, &b_piplus_Hlt1SingleMuonHighPTDecision_TOS);
   fChain->SetBranchAddress("piplus_Hlt1TrackMuonDecision_Dec", &piplus_Hlt1TrackMuonDecision_Dec, &b_piplus_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("piplus_Hlt1TrackMuonDecision_TIS", &piplus_Hlt1TrackMuonDecision_TIS, &b_piplus_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("piplus_Hlt1TrackMuonDecision_TOS", &piplus_Hlt1TrackMuonDecision_TOS, &b_piplus_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("piplus_Hlt1TrackAllL0Decision_Dec", &piplus_Hlt1TrackAllL0Decision_Dec, &b_piplus_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("piplus_Hlt1TrackAllL0Decision_TIS", &piplus_Hlt1TrackAllL0Decision_TIS, &b_piplus_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("piplus_Hlt1TrackAllL0Decision_TOS", &piplus_Hlt1TrackAllL0Decision_TOS, &b_piplus_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("piplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec", &piplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec, &b_piplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec);
   fChain->SetBranchAddress("piplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS", &piplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS, &b_piplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS);
   fChain->SetBranchAddress("piplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS", &piplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS, &b_piplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS);
   fChain->SetBranchAddress("piplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec", &piplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec, &b_piplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec);
   fChain->SetBranchAddress("piplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS", &piplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS, &b_piplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS);
   fChain->SetBranchAddress("piplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS", &piplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS, &b_piplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS);
   fChain->SetBranchAddress("piplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec", &piplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec, &b_piplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec);
   fChain->SetBranchAddress("piplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS", &piplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS, &b_piplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS);
   fChain->SetBranchAddress("piplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS", &piplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS, &b_piplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS);
   fChain->SetBranchAddress("piplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec", &piplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec, &b_piplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec);
   fChain->SetBranchAddress("piplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS", &piplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS, &b_piplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS);
   fChain->SetBranchAddress("piplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS", &piplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS, &b_piplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDY1Decision_Dec", &piplus_Hlt2DiMuonDY1Decision_Dec, &b_piplus_Hlt2DiMuonDY1Decision_Dec);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDY1Decision_TIS", &piplus_Hlt2DiMuonDY1Decision_TIS, &b_piplus_Hlt2DiMuonDY1Decision_TIS);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDY1Decision_TOS", &piplus_Hlt2DiMuonDY1Decision_TOS, &b_piplus_Hlt2DiMuonDY1Decision_TOS);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDY2Decision_Dec", &piplus_Hlt2DiMuonDY2Decision_Dec, &b_piplus_Hlt2DiMuonDY2Decision_Dec);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDY2Decision_TIS", &piplus_Hlt2DiMuonDY2Decision_TIS, &b_piplus_Hlt2DiMuonDY2Decision_TIS);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDY2Decision_TOS", &piplus_Hlt2DiMuonDY2Decision_TOS, &b_piplus_Hlt2DiMuonDY2Decision_TOS);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDY3Decision_Dec", &piplus_Hlt2DiMuonDY3Decision_Dec, &b_piplus_Hlt2DiMuonDY3Decision_Dec);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDY3Decision_TIS", &piplus_Hlt2DiMuonDY3Decision_TIS, &b_piplus_Hlt2DiMuonDY3Decision_TIS);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDY3Decision_TOS", &piplus_Hlt2DiMuonDY3Decision_TOS, &b_piplus_Hlt2DiMuonDY3Decision_TOS);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDY4Decision_Dec", &piplus_Hlt2DiMuonDY4Decision_Dec, &b_piplus_Hlt2DiMuonDY4Decision_Dec);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDY4Decision_TIS", &piplus_Hlt2DiMuonDY4Decision_TIS, &b_piplus_Hlt2DiMuonDY4Decision_TIS);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDY4Decision_TOS", &piplus_Hlt2DiMuonDY4Decision_TOS, &b_piplus_Hlt2DiMuonDY4Decision_TOS);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDetachedDecision_Dec", &piplus_Hlt2DiMuonDetachedDecision_Dec, &b_piplus_Hlt2DiMuonDetachedDecision_Dec);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDetachedDecision_TIS", &piplus_Hlt2DiMuonDetachedDecision_TIS, &b_piplus_Hlt2DiMuonDetachedDecision_TIS);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDetachedDecision_TOS", &piplus_Hlt2DiMuonDetachedDecision_TOS, &b_piplus_Hlt2DiMuonDetachedDecision_TOS);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDetachedHeavyDecision_Dec", &piplus_Hlt2DiMuonDetachedHeavyDecision_Dec, &b_piplus_Hlt2DiMuonDetachedHeavyDecision_Dec);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDetachedHeavyDecision_TIS", &piplus_Hlt2DiMuonDetachedHeavyDecision_TIS, &b_piplus_Hlt2DiMuonDetachedHeavyDecision_TIS);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDetachedHeavyDecision_TOS", &piplus_Hlt2DiMuonDetachedHeavyDecision_TOS, &b_piplus_Hlt2DiMuonDetachedHeavyDecision_TOS);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonBDecision_Dec", &piplus_Hlt2DiMuonBDecision_Dec, &b_piplus_Hlt2DiMuonBDecision_Dec);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonBDecision_TIS", &piplus_Hlt2DiMuonBDecision_TIS, &b_piplus_Hlt2DiMuonBDecision_TIS);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonBDecision_TOS", &piplus_Hlt2DiMuonBDecision_TOS, &b_piplus_Hlt2DiMuonBDecision_TOS);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonLowMassDecision_Dec", &piplus_Hlt2DiMuonLowMassDecision_Dec, &b_piplus_Hlt2DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonLowMassDecision_TIS", &piplus_Hlt2DiMuonLowMassDecision_TIS, &b_piplus_Hlt2DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonLowMassDecision_TOS", &piplus_Hlt2DiMuonLowMassDecision_TOS, &b_piplus_Hlt2DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDecision_Dec", &piplus_Hlt2DiMuonDecision_Dec, &b_piplus_Hlt2DiMuonDecision_Dec);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDecision_TIS", &piplus_Hlt2DiMuonDecision_TIS, &b_piplus_Hlt2DiMuonDecision_TIS);
   fChain->SetBranchAddress("piplus_Hlt2DiMuonDecision_TOS", &piplus_Hlt2DiMuonDecision_TOS, &b_piplus_Hlt2DiMuonDecision_TOS);
   fChain->SetBranchAddress("piplus_Hlt2CharmSemilepD2HMuMuDecision_Dec", &piplus_Hlt2CharmSemilepD2HMuMuDecision_Dec, &b_piplus_Hlt2CharmSemilepD2HMuMuDecision_Dec);
   fChain->SetBranchAddress("piplus_Hlt2CharmSemilepD2HMuMuDecision_TIS", &piplus_Hlt2CharmSemilepD2HMuMuDecision_TIS, &b_piplus_Hlt2CharmSemilepD2HMuMuDecision_TIS);
   fChain->SetBranchAddress("piplus_Hlt2CharmSemilepD2HMuMuDecision_TOS", &piplus_Hlt2CharmSemilepD2HMuMuDecision_TOS, &b_piplus_Hlt2CharmSemilepD2HMuMuDecision_TOS);
   fChain->SetBranchAddress("piplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec", &piplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec, &b_piplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec);
   fChain->SetBranchAddress("piplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS", &piplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS, &b_piplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS);
   fChain->SetBranchAddress("piplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS", &piplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS, &b_piplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS);
   fChain->SetBranchAddress("piplus_TRACK_Type", &piplus_TRACK_Type, &b_piplus_TRACK_Type);
   fChain->SetBranchAddress("piplus_TRACK_Key", &piplus_TRACK_Key, &b_piplus_TRACK_Key);
   fChain->SetBranchAddress("piplus_TRACK_CHI2NDOF", &piplus_TRACK_CHI2NDOF, &b_piplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("piplus_TRACK_PCHI2", &piplus_TRACK_PCHI2, &b_piplus_TRACK_PCHI2);
   fChain->SetBranchAddress("piplus_TRACK_MatchCHI2", &piplus_TRACK_MatchCHI2, &b_piplus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("piplus_TRACK_GhostProb", &piplus_TRACK_GhostProb, &b_piplus_TRACK_GhostProb);
   fChain->SetBranchAddress("piplus_TRACK_CloneDist", &piplus_TRACK_CloneDist, &b_piplus_TRACK_CloneDist);
   fChain->SetBranchAddress("piplus_TRACK_Likelihood", &piplus_TRACK_Likelihood, &b_piplus_TRACK_Likelihood);
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
   fChain->SetBranchAddress("muplus_OWNPV_X", &muplus_OWNPV_X, &b_muplus_OWNPV_X);
   fChain->SetBranchAddress("muplus_OWNPV_Y", &muplus_OWNPV_Y, &b_muplus_OWNPV_Y);
   fChain->SetBranchAddress("muplus_OWNPV_Z", &muplus_OWNPV_Z, &b_muplus_OWNPV_Z);
   fChain->SetBranchAddress("muplus_OWNPV_XERR", &muplus_OWNPV_XERR, &b_muplus_OWNPV_XERR);
   fChain->SetBranchAddress("muplus_OWNPV_YERR", &muplus_OWNPV_YERR, &b_muplus_OWNPV_YERR);
   fChain->SetBranchAddress("muplus_OWNPV_ZERR", &muplus_OWNPV_ZERR, &b_muplus_OWNPV_ZERR);
   fChain->SetBranchAddress("muplus_OWNPV_CHI2", &muplus_OWNPV_CHI2, &b_muplus_OWNPV_CHI2);
   fChain->SetBranchAddress("muplus_OWNPV_NDOF", &muplus_OWNPV_NDOF, &b_muplus_OWNPV_NDOF);
   fChain->SetBranchAddress("muplus_OWNPV_COV_", muplus_OWNPV_COV_, &b_muplus_OWNPV_COV_);
   fChain->SetBranchAddress("muplus_IP_OWNPV", &muplus_IP_OWNPV, &b_muplus_IP_OWNPV);
   fChain->SetBranchAddress("muplus_IPCHI2_OWNPV", &muplus_IPCHI2_OWNPV, &b_muplus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("muplus_ORIVX_X", &muplus_ORIVX_X, &b_muplus_ORIVX_X);
   fChain->SetBranchAddress("muplus_ORIVX_Y", &muplus_ORIVX_Y, &b_muplus_ORIVX_Y);
   fChain->SetBranchAddress("muplus_ORIVX_Z", &muplus_ORIVX_Z, &b_muplus_ORIVX_Z);
   fChain->SetBranchAddress("muplus_ORIVX_XERR", &muplus_ORIVX_XERR, &b_muplus_ORIVX_XERR);
   fChain->SetBranchAddress("muplus_ORIVX_YERR", &muplus_ORIVX_YERR, &b_muplus_ORIVX_YERR);
   fChain->SetBranchAddress("muplus_ORIVX_ZERR", &muplus_ORIVX_ZERR, &b_muplus_ORIVX_ZERR);
   fChain->SetBranchAddress("muplus_ORIVX_CHI2", &muplus_ORIVX_CHI2, &b_muplus_ORIVX_CHI2);
   fChain->SetBranchAddress("muplus_ORIVX_NDOF", &muplus_ORIVX_NDOF, &b_muplus_ORIVX_NDOF);
   fChain->SetBranchAddress("muplus_ORIVX_COV_", muplus_ORIVX_COV_, &b_muplus_ORIVX_COV_);
   fChain->SetBranchAddress("muplus_P", &muplus_P, &b_muplus_P);
   fChain->SetBranchAddress("muplus_PT", &muplus_PT, &b_muplus_PT);
   fChain->SetBranchAddress("muplus_PE", &muplus_PE, &b_muplus_PE);
   fChain->SetBranchAddress("muplus_PX", &muplus_PX, &b_muplus_PX);
   fChain->SetBranchAddress("muplus_PY", &muplus_PY, &b_muplus_PY);
   fChain->SetBranchAddress("muplus_PZ", &muplus_PZ, &b_muplus_PZ);
   fChain->SetBranchAddress("muplus_M", &muplus_M, &b_muplus_M);
   fChain->SetBranchAddress("muplus_ID", &muplus_ID, &b_muplus_ID);
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
   fChain->SetBranchAddress("muplus_hasMuon", &muplus_hasMuon, &b_muplus_hasMuon);
   fChain->SetBranchAddress("muplus_isMuon", &muplus_isMuon, &b_muplus_isMuon);
   fChain->SetBranchAddress("muplus_hasRich", &muplus_hasRich, &b_muplus_hasRich);
   fChain->SetBranchAddress("muplus_hasCalo", &muplus_hasCalo, &b_muplus_hasCalo);
   fChain->SetBranchAddress("muplus_L0Global_Dec", &muplus_L0Global_Dec, &b_muplus_L0Global_Dec);
   fChain->SetBranchAddress("muplus_L0Global_TIS", &muplus_L0Global_TIS, &b_muplus_L0Global_TIS);
   fChain->SetBranchAddress("muplus_L0Global_TOS", &muplus_L0Global_TOS, &b_muplus_L0Global_TOS);
   fChain->SetBranchAddress("muplus_Hlt1Global_Dec", &muplus_Hlt1Global_Dec, &b_muplus_Hlt1Global_Dec);
   fChain->SetBranchAddress("muplus_Hlt1Global_TIS", &muplus_Hlt1Global_TIS, &b_muplus_Hlt1Global_TIS);
   fChain->SetBranchAddress("muplus_Hlt1Global_TOS", &muplus_Hlt1Global_TOS, &b_muplus_Hlt1Global_TOS);
   fChain->SetBranchAddress("muplus_Hlt1Phys_Dec", &muplus_Hlt1Phys_Dec, &b_muplus_Hlt1Phys_Dec);
   fChain->SetBranchAddress("muplus_Hlt1Phys_TIS", &muplus_Hlt1Phys_TIS, &b_muplus_Hlt1Phys_TIS);
   fChain->SetBranchAddress("muplus_Hlt1Phys_TOS", &muplus_Hlt1Phys_TOS, &b_muplus_Hlt1Phys_TOS);
   fChain->SetBranchAddress("muplus_Hlt2Global_Dec", &muplus_Hlt2Global_Dec, &b_muplus_Hlt2Global_Dec);
   fChain->SetBranchAddress("muplus_Hlt2Global_TIS", &muplus_Hlt2Global_TIS, &b_muplus_Hlt2Global_TIS);
   fChain->SetBranchAddress("muplus_Hlt2Global_TOS", &muplus_Hlt2Global_TOS, &b_muplus_Hlt2Global_TOS);
   fChain->SetBranchAddress("muplus_Hlt2Phys_Dec", &muplus_Hlt2Phys_Dec, &b_muplus_Hlt2Phys_Dec);
   fChain->SetBranchAddress("muplus_Hlt2Phys_TIS", &muplus_Hlt2Phys_TIS, &b_muplus_Hlt2Phys_TIS);
   fChain->SetBranchAddress("muplus_Hlt2Phys_TOS", &muplus_Hlt2Phys_TOS, &b_muplus_Hlt2Phys_TOS);
   fChain->SetBranchAddress("muplus_L0DiMuonDecision_Dec", &muplus_L0DiMuonDecision_Dec, &b_muplus_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("muplus_L0DiMuonDecision_TIS", &muplus_L0DiMuonDecision_TIS, &b_muplus_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("muplus_L0DiMuonDecision_TOS", &muplus_L0DiMuonDecision_TOS, &b_muplus_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("muplus_L0MuonDecision_Dec", &muplus_L0MuonDecision_Dec, &b_muplus_L0MuonDecision_Dec);
   fChain->SetBranchAddress("muplus_L0MuonDecision_TIS", &muplus_L0MuonDecision_TIS, &b_muplus_L0MuonDecision_TIS);
   fChain->SetBranchAddress("muplus_L0MuonDecision_TOS", &muplus_L0MuonDecision_TOS, &b_muplus_L0MuonDecision_TOS);
   fChain->SetBranchAddress("muplus_L0MuonHighDecision_Dec", &muplus_L0MuonHighDecision_Dec, &b_muplus_L0MuonHighDecision_Dec);
   fChain->SetBranchAddress("muplus_L0MuonHighDecision_TIS", &muplus_L0MuonHighDecision_TIS, &b_muplus_L0MuonHighDecision_TIS);
   fChain->SetBranchAddress("muplus_L0MuonHighDecision_TOS", &muplus_L0MuonHighDecision_TOS, &b_muplus_L0MuonHighDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt1DiMuonHighMassDecision_Dec", &muplus_Hlt1DiMuonHighMassDecision_Dec, &b_muplus_Hlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt1DiMuonHighMassDecision_TIS", &muplus_Hlt1DiMuonHighMassDecision_TIS, &b_muplus_Hlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt1DiMuonHighMassDecision_TOS", &muplus_Hlt1DiMuonHighMassDecision_TOS, &b_muplus_Hlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt1DiMuonLowMassDecision_Dec", &muplus_Hlt1DiMuonLowMassDecision_Dec, &b_muplus_Hlt1DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt1DiMuonLowMassDecision_TIS", &muplus_Hlt1DiMuonLowMassDecision_TIS, &b_muplus_Hlt1DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt1DiMuonLowMassDecision_TOS", &muplus_Hlt1DiMuonLowMassDecision_TOS, &b_muplus_Hlt1DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt1SingleMuonHighPTDecision_Dec", &muplus_Hlt1SingleMuonHighPTDecision_Dec, &b_muplus_Hlt1SingleMuonHighPTDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt1SingleMuonHighPTDecision_TIS", &muplus_Hlt1SingleMuonHighPTDecision_TIS, &b_muplus_Hlt1SingleMuonHighPTDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt1SingleMuonHighPTDecision_TOS", &muplus_Hlt1SingleMuonHighPTDecision_TOS, &b_muplus_Hlt1SingleMuonHighPTDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt1TrackMuonDecision_Dec", &muplus_Hlt1TrackMuonDecision_Dec, &b_muplus_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt1TrackMuonDecision_TIS", &muplus_Hlt1TrackMuonDecision_TIS, &b_muplus_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt1TrackMuonDecision_TOS", &muplus_Hlt1TrackMuonDecision_TOS, &b_muplus_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt1TrackAllL0Decision_Dec", &muplus_Hlt1TrackAllL0Decision_Dec, &b_muplus_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("muplus_Hlt1TrackAllL0Decision_TIS", &muplus_Hlt1TrackAllL0Decision_TIS, &b_muplus_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("muplus_Hlt1TrackAllL0Decision_TOS", &muplus_Hlt1TrackAllL0Decision_TOS, &b_muplus_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec", &muplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec, &b_muplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS", &muplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS, &b_muplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS", &muplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS, &b_muplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec", &muplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec, &b_muplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS", &muplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS, &b_muplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS", &muplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS, &b_muplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec", &muplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec, &b_muplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS", &muplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS, &b_muplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS", &muplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS, &b_muplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec", &muplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec, &b_muplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS", &muplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS, &b_muplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS", &muplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS, &b_muplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDY1Decision_Dec", &muplus_Hlt2DiMuonDY1Decision_Dec, &b_muplus_Hlt2DiMuonDY1Decision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDY1Decision_TIS", &muplus_Hlt2DiMuonDY1Decision_TIS, &b_muplus_Hlt2DiMuonDY1Decision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDY1Decision_TOS", &muplus_Hlt2DiMuonDY1Decision_TOS, &b_muplus_Hlt2DiMuonDY1Decision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDY2Decision_Dec", &muplus_Hlt2DiMuonDY2Decision_Dec, &b_muplus_Hlt2DiMuonDY2Decision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDY2Decision_TIS", &muplus_Hlt2DiMuonDY2Decision_TIS, &b_muplus_Hlt2DiMuonDY2Decision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDY2Decision_TOS", &muplus_Hlt2DiMuonDY2Decision_TOS, &b_muplus_Hlt2DiMuonDY2Decision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDY3Decision_Dec", &muplus_Hlt2DiMuonDY3Decision_Dec, &b_muplus_Hlt2DiMuonDY3Decision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDY3Decision_TIS", &muplus_Hlt2DiMuonDY3Decision_TIS, &b_muplus_Hlt2DiMuonDY3Decision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDY3Decision_TOS", &muplus_Hlt2DiMuonDY3Decision_TOS, &b_muplus_Hlt2DiMuonDY3Decision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDY4Decision_Dec", &muplus_Hlt2DiMuonDY4Decision_Dec, &b_muplus_Hlt2DiMuonDY4Decision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDY4Decision_TIS", &muplus_Hlt2DiMuonDY4Decision_TIS, &b_muplus_Hlt2DiMuonDY4Decision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDY4Decision_TOS", &muplus_Hlt2DiMuonDY4Decision_TOS, &b_muplus_Hlt2DiMuonDY4Decision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDetachedDecision_Dec", &muplus_Hlt2DiMuonDetachedDecision_Dec, &b_muplus_Hlt2DiMuonDetachedDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDetachedDecision_TIS", &muplus_Hlt2DiMuonDetachedDecision_TIS, &b_muplus_Hlt2DiMuonDetachedDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDetachedDecision_TOS", &muplus_Hlt2DiMuonDetachedDecision_TOS, &b_muplus_Hlt2DiMuonDetachedDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDetachedHeavyDecision_Dec", &muplus_Hlt2DiMuonDetachedHeavyDecision_Dec, &b_muplus_Hlt2DiMuonDetachedHeavyDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDetachedHeavyDecision_TIS", &muplus_Hlt2DiMuonDetachedHeavyDecision_TIS, &b_muplus_Hlt2DiMuonDetachedHeavyDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDetachedHeavyDecision_TOS", &muplus_Hlt2DiMuonDetachedHeavyDecision_TOS, &b_muplus_Hlt2DiMuonDetachedHeavyDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonBDecision_Dec", &muplus_Hlt2DiMuonBDecision_Dec, &b_muplus_Hlt2DiMuonBDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonBDecision_TIS", &muplus_Hlt2DiMuonBDecision_TIS, &b_muplus_Hlt2DiMuonBDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonBDecision_TOS", &muplus_Hlt2DiMuonBDecision_TOS, &b_muplus_Hlt2DiMuonBDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonLowMassDecision_Dec", &muplus_Hlt2DiMuonLowMassDecision_Dec, &b_muplus_Hlt2DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonLowMassDecision_TIS", &muplus_Hlt2DiMuonLowMassDecision_TIS, &b_muplus_Hlt2DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonLowMassDecision_TOS", &muplus_Hlt2DiMuonLowMassDecision_TOS, &b_muplus_Hlt2DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDecision_Dec", &muplus_Hlt2DiMuonDecision_Dec, &b_muplus_Hlt2DiMuonDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDecision_TIS", &muplus_Hlt2DiMuonDecision_TIS, &b_muplus_Hlt2DiMuonDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2DiMuonDecision_TOS", &muplus_Hlt2DiMuonDecision_TOS, &b_muplus_Hlt2DiMuonDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2CharmSemilepD2HMuMuDecision_Dec", &muplus_Hlt2CharmSemilepD2HMuMuDecision_Dec, &b_muplus_Hlt2CharmSemilepD2HMuMuDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2CharmSemilepD2HMuMuDecision_TIS", &muplus_Hlt2CharmSemilepD2HMuMuDecision_TIS, &b_muplus_Hlt2CharmSemilepD2HMuMuDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2CharmSemilepD2HMuMuDecision_TOS", &muplus_Hlt2CharmSemilepD2HMuMuDecision_TOS, &b_muplus_Hlt2CharmSemilepD2HMuMuDecision_TOS);
   fChain->SetBranchAddress("muplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec", &muplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec, &b_muplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec);
   fChain->SetBranchAddress("muplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS", &muplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS, &b_muplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS);
   fChain->SetBranchAddress("muplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS", &muplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS, &b_muplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS);
   fChain->SetBranchAddress("muplus_TRACK_Type", &muplus_TRACK_Type, &b_muplus_TRACK_Type);
   fChain->SetBranchAddress("muplus_TRACK_Key", &muplus_TRACK_Key, &b_muplus_TRACK_Key);
   fChain->SetBranchAddress("muplus_TRACK_CHI2NDOF", &muplus_TRACK_CHI2NDOF, &b_muplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("muplus_TRACK_PCHI2", &muplus_TRACK_PCHI2, &b_muplus_TRACK_PCHI2);
   fChain->SetBranchAddress("muplus_TRACK_MatchCHI2", &muplus_TRACK_MatchCHI2, &b_muplus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("muplus_TRACK_GhostProb", &muplus_TRACK_GhostProb, &b_muplus_TRACK_GhostProb);
   fChain->SetBranchAddress("muplus_TRACK_CloneDist", &muplus_TRACK_CloneDist, &b_muplus_TRACK_CloneDist);
   fChain->SetBranchAddress("muplus_TRACK_Likelihood", &muplus_TRACK_Likelihood, &b_muplus_TRACK_Likelihood);
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
   fChain->SetBranchAddress("muminus_OWNPV_X", &muminus_OWNPV_X, &b_muminus_OWNPV_X);
   fChain->SetBranchAddress("muminus_OWNPV_Y", &muminus_OWNPV_Y, &b_muminus_OWNPV_Y);
   fChain->SetBranchAddress("muminus_OWNPV_Z", &muminus_OWNPV_Z, &b_muminus_OWNPV_Z);
   fChain->SetBranchAddress("muminus_OWNPV_XERR", &muminus_OWNPV_XERR, &b_muminus_OWNPV_XERR);
   fChain->SetBranchAddress("muminus_OWNPV_YERR", &muminus_OWNPV_YERR, &b_muminus_OWNPV_YERR);
   fChain->SetBranchAddress("muminus_OWNPV_ZERR", &muminus_OWNPV_ZERR, &b_muminus_OWNPV_ZERR);
   fChain->SetBranchAddress("muminus_OWNPV_CHI2", &muminus_OWNPV_CHI2, &b_muminus_OWNPV_CHI2);
   fChain->SetBranchAddress("muminus_OWNPV_NDOF", &muminus_OWNPV_NDOF, &b_muminus_OWNPV_NDOF);
   fChain->SetBranchAddress("muminus_OWNPV_COV_", muminus_OWNPV_COV_, &b_muminus_OWNPV_COV_);
   fChain->SetBranchAddress("muminus_IP_OWNPV", &muminus_IP_OWNPV, &b_muminus_IP_OWNPV);
   fChain->SetBranchAddress("muminus_IPCHI2_OWNPV", &muminus_IPCHI2_OWNPV, &b_muminus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("muminus_ORIVX_X", &muminus_ORIVX_X, &b_muminus_ORIVX_X);
   fChain->SetBranchAddress("muminus_ORIVX_Y", &muminus_ORIVX_Y, &b_muminus_ORIVX_Y);
   fChain->SetBranchAddress("muminus_ORIVX_Z", &muminus_ORIVX_Z, &b_muminus_ORIVX_Z);
   fChain->SetBranchAddress("muminus_ORIVX_XERR", &muminus_ORIVX_XERR, &b_muminus_ORIVX_XERR);
   fChain->SetBranchAddress("muminus_ORIVX_YERR", &muminus_ORIVX_YERR, &b_muminus_ORIVX_YERR);
   fChain->SetBranchAddress("muminus_ORIVX_ZERR", &muminus_ORIVX_ZERR, &b_muminus_ORIVX_ZERR);
   fChain->SetBranchAddress("muminus_ORIVX_CHI2", &muminus_ORIVX_CHI2, &b_muminus_ORIVX_CHI2);
   fChain->SetBranchAddress("muminus_ORIVX_NDOF", &muminus_ORIVX_NDOF, &b_muminus_ORIVX_NDOF);
   fChain->SetBranchAddress("muminus_ORIVX_COV_", muminus_ORIVX_COV_, &b_muminus_ORIVX_COV_);
   fChain->SetBranchAddress("muminus_P", &muminus_P, &b_muminus_P);
   fChain->SetBranchAddress("muminus_PT", &muminus_PT, &b_muminus_PT);
   fChain->SetBranchAddress("muminus_PE", &muminus_PE, &b_muminus_PE);
   fChain->SetBranchAddress("muminus_PX", &muminus_PX, &b_muminus_PX);
   fChain->SetBranchAddress("muminus_PY", &muminus_PY, &b_muminus_PY);
   fChain->SetBranchAddress("muminus_PZ", &muminus_PZ, &b_muminus_PZ);
   fChain->SetBranchAddress("muminus_M", &muminus_M, &b_muminus_M);
   fChain->SetBranchAddress("muminus_ID", &muminus_ID, &b_muminus_ID);
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
   fChain->SetBranchAddress("muminus_hasMuon", &muminus_hasMuon, &b_muminus_hasMuon);
   fChain->SetBranchAddress("muminus_isMuon", &muminus_isMuon, &b_muminus_isMuon);
   fChain->SetBranchAddress("muminus_hasRich", &muminus_hasRich, &b_muminus_hasRich);
   fChain->SetBranchAddress("muminus_hasCalo", &muminus_hasCalo, &b_muminus_hasCalo);
   fChain->SetBranchAddress("muminus_L0Global_Dec", &muminus_L0Global_Dec, &b_muminus_L0Global_Dec);
   fChain->SetBranchAddress("muminus_L0Global_TIS", &muminus_L0Global_TIS, &b_muminus_L0Global_TIS);
   fChain->SetBranchAddress("muminus_L0Global_TOS", &muminus_L0Global_TOS, &b_muminus_L0Global_TOS);
   fChain->SetBranchAddress("muminus_Hlt1Global_Dec", &muminus_Hlt1Global_Dec, &b_muminus_Hlt1Global_Dec);
   fChain->SetBranchAddress("muminus_Hlt1Global_TIS", &muminus_Hlt1Global_TIS, &b_muminus_Hlt1Global_TIS);
   fChain->SetBranchAddress("muminus_Hlt1Global_TOS", &muminus_Hlt1Global_TOS, &b_muminus_Hlt1Global_TOS);
   fChain->SetBranchAddress("muminus_Hlt1Phys_Dec", &muminus_Hlt1Phys_Dec, &b_muminus_Hlt1Phys_Dec);
   fChain->SetBranchAddress("muminus_Hlt1Phys_TIS", &muminus_Hlt1Phys_TIS, &b_muminus_Hlt1Phys_TIS);
   fChain->SetBranchAddress("muminus_Hlt1Phys_TOS", &muminus_Hlt1Phys_TOS, &b_muminus_Hlt1Phys_TOS);
   fChain->SetBranchAddress("muminus_Hlt2Global_Dec", &muminus_Hlt2Global_Dec, &b_muminus_Hlt2Global_Dec);
   fChain->SetBranchAddress("muminus_Hlt2Global_TIS", &muminus_Hlt2Global_TIS, &b_muminus_Hlt2Global_TIS);
   fChain->SetBranchAddress("muminus_Hlt2Global_TOS", &muminus_Hlt2Global_TOS, &b_muminus_Hlt2Global_TOS);
   fChain->SetBranchAddress("muminus_Hlt2Phys_Dec", &muminus_Hlt2Phys_Dec, &b_muminus_Hlt2Phys_Dec);
   fChain->SetBranchAddress("muminus_Hlt2Phys_TIS", &muminus_Hlt2Phys_TIS, &b_muminus_Hlt2Phys_TIS);
   fChain->SetBranchAddress("muminus_Hlt2Phys_TOS", &muminus_Hlt2Phys_TOS, &b_muminus_Hlt2Phys_TOS);
   fChain->SetBranchAddress("muminus_L0DiMuonDecision_Dec", &muminus_L0DiMuonDecision_Dec, &b_muminus_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("muminus_L0DiMuonDecision_TIS", &muminus_L0DiMuonDecision_TIS, &b_muminus_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("muminus_L0DiMuonDecision_TOS", &muminus_L0DiMuonDecision_TOS, &b_muminus_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("muminus_L0MuonDecision_Dec", &muminus_L0MuonDecision_Dec, &b_muminus_L0MuonDecision_Dec);
   fChain->SetBranchAddress("muminus_L0MuonDecision_TIS", &muminus_L0MuonDecision_TIS, &b_muminus_L0MuonDecision_TIS);
   fChain->SetBranchAddress("muminus_L0MuonDecision_TOS", &muminus_L0MuonDecision_TOS, &b_muminus_L0MuonDecision_TOS);
   fChain->SetBranchAddress("muminus_L0MuonHighDecision_Dec", &muminus_L0MuonHighDecision_Dec, &b_muminus_L0MuonHighDecision_Dec);
   fChain->SetBranchAddress("muminus_L0MuonHighDecision_TIS", &muminus_L0MuonHighDecision_TIS, &b_muminus_L0MuonHighDecision_TIS);
   fChain->SetBranchAddress("muminus_L0MuonHighDecision_TOS", &muminus_L0MuonHighDecision_TOS, &b_muminus_L0MuonHighDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt1DiMuonHighMassDecision_Dec", &muminus_Hlt1DiMuonHighMassDecision_Dec, &b_muminus_Hlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt1DiMuonHighMassDecision_TIS", &muminus_Hlt1DiMuonHighMassDecision_TIS, &b_muminus_Hlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt1DiMuonHighMassDecision_TOS", &muminus_Hlt1DiMuonHighMassDecision_TOS, &b_muminus_Hlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt1DiMuonLowMassDecision_Dec", &muminus_Hlt1DiMuonLowMassDecision_Dec, &b_muminus_Hlt1DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt1DiMuonLowMassDecision_TIS", &muminus_Hlt1DiMuonLowMassDecision_TIS, &b_muminus_Hlt1DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt1DiMuonLowMassDecision_TOS", &muminus_Hlt1DiMuonLowMassDecision_TOS, &b_muminus_Hlt1DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt1SingleMuonHighPTDecision_Dec", &muminus_Hlt1SingleMuonHighPTDecision_Dec, &b_muminus_Hlt1SingleMuonHighPTDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt1SingleMuonHighPTDecision_TIS", &muminus_Hlt1SingleMuonHighPTDecision_TIS, &b_muminus_Hlt1SingleMuonHighPTDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt1SingleMuonHighPTDecision_TOS", &muminus_Hlt1SingleMuonHighPTDecision_TOS, &b_muminus_Hlt1SingleMuonHighPTDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt1TrackMuonDecision_Dec", &muminus_Hlt1TrackMuonDecision_Dec, &b_muminus_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt1TrackMuonDecision_TIS", &muminus_Hlt1TrackMuonDecision_TIS, &b_muminus_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt1TrackMuonDecision_TOS", &muminus_Hlt1TrackMuonDecision_TOS, &b_muminus_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt1TrackAllL0Decision_Dec", &muminus_Hlt1TrackAllL0Decision_Dec, &b_muminus_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("muminus_Hlt1TrackAllL0Decision_TIS", &muminus_Hlt1TrackAllL0Decision_TIS, &b_muminus_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("muminus_Hlt1TrackAllL0Decision_TOS", &muminus_Hlt1TrackAllL0Decision_TOS, &b_muminus_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec", &muminus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec, &b_muminus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS", &muminus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS, &b_muminus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS", &muminus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS, &b_muminus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec", &muminus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec, &b_muminus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS", &muminus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS, &b_muminus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS", &muminus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS, &b_muminus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec", &muminus_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec, &b_muminus_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS", &muminus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS, &b_muminus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS", &muminus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS, &b_muminus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec", &muminus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec, &b_muminus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS", &muminus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS, &b_muminus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS", &muminus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS, &b_muminus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDY1Decision_Dec", &muminus_Hlt2DiMuonDY1Decision_Dec, &b_muminus_Hlt2DiMuonDY1Decision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDY1Decision_TIS", &muminus_Hlt2DiMuonDY1Decision_TIS, &b_muminus_Hlt2DiMuonDY1Decision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDY1Decision_TOS", &muminus_Hlt2DiMuonDY1Decision_TOS, &b_muminus_Hlt2DiMuonDY1Decision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDY2Decision_Dec", &muminus_Hlt2DiMuonDY2Decision_Dec, &b_muminus_Hlt2DiMuonDY2Decision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDY2Decision_TIS", &muminus_Hlt2DiMuonDY2Decision_TIS, &b_muminus_Hlt2DiMuonDY2Decision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDY2Decision_TOS", &muminus_Hlt2DiMuonDY2Decision_TOS, &b_muminus_Hlt2DiMuonDY2Decision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDY3Decision_Dec", &muminus_Hlt2DiMuonDY3Decision_Dec, &b_muminus_Hlt2DiMuonDY3Decision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDY3Decision_TIS", &muminus_Hlt2DiMuonDY3Decision_TIS, &b_muminus_Hlt2DiMuonDY3Decision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDY3Decision_TOS", &muminus_Hlt2DiMuonDY3Decision_TOS, &b_muminus_Hlt2DiMuonDY3Decision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDY4Decision_Dec", &muminus_Hlt2DiMuonDY4Decision_Dec, &b_muminus_Hlt2DiMuonDY4Decision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDY4Decision_TIS", &muminus_Hlt2DiMuonDY4Decision_TIS, &b_muminus_Hlt2DiMuonDY4Decision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDY4Decision_TOS", &muminus_Hlt2DiMuonDY4Decision_TOS, &b_muminus_Hlt2DiMuonDY4Decision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDetachedDecision_Dec", &muminus_Hlt2DiMuonDetachedDecision_Dec, &b_muminus_Hlt2DiMuonDetachedDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDetachedDecision_TIS", &muminus_Hlt2DiMuonDetachedDecision_TIS, &b_muminus_Hlt2DiMuonDetachedDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDetachedDecision_TOS", &muminus_Hlt2DiMuonDetachedDecision_TOS, &b_muminus_Hlt2DiMuonDetachedDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDetachedHeavyDecision_Dec", &muminus_Hlt2DiMuonDetachedHeavyDecision_Dec, &b_muminus_Hlt2DiMuonDetachedHeavyDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDetachedHeavyDecision_TIS", &muminus_Hlt2DiMuonDetachedHeavyDecision_TIS, &b_muminus_Hlt2DiMuonDetachedHeavyDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDetachedHeavyDecision_TOS", &muminus_Hlt2DiMuonDetachedHeavyDecision_TOS, &b_muminus_Hlt2DiMuonDetachedHeavyDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonBDecision_Dec", &muminus_Hlt2DiMuonBDecision_Dec, &b_muminus_Hlt2DiMuonBDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonBDecision_TIS", &muminus_Hlt2DiMuonBDecision_TIS, &b_muminus_Hlt2DiMuonBDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonBDecision_TOS", &muminus_Hlt2DiMuonBDecision_TOS, &b_muminus_Hlt2DiMuonBDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonLowMassDecision_Dec", &muminus_Hlt2DiMuonLowMassDecision_Dec, &b_muminus_Hlt2DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonLowMassDecision_TIS", &muminus_Hlt2DiMuonLowMassDecision_TIS, &b_muminus_Hlt2DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonLowMassDecision_TOS", &muminus_Hlt2DiMuonLowMassDecision_TOS, &b_muminus_Hlt2DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDecision_Dec", &muminus_Hlt2DiMuonDecision_Dec, &b_muminus_Hlt2DiMuonDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDecision_TIS", &muminus_Hlt2DiMuonDecision_TIS, &b_muminus_Hlt2DiMuonDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2DiMuonDecision_TOS", &muminus_Hlt2DiMuonDecision_TOS, &b_muminus_Hlt2DiMuonDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2CharmSemilepD2HMuMuDecision_Dec", &muminus_Hlt2CharmSemilepD2HMuMuDecision_Dec, &b_muminus_Hlt2CharmSemilepD2HMuMuDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2CharmSemilepD2HMuMuDecision_TIS", &muminus_Hlt2CharmSemilepD2HMuMuDecision_TIS, &b_muminus_Hlt2CharmSemilepD2HMuMuDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2CharmSemilepD2HMuMuDecision_TOS", &muminus_Hlt2CharmSemilepD2HMuMuDecision_TOS, &b_muminus_Hlt2CharmSemilepD2HMuMuDecision_TOS);
   fChain->SetBranchAddress("muminus_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec", &muminus_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec, &b_muminus_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec);
   fChain->SetBranchAddress("muminus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS", &muminus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS, &b_muminus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS);
   fChain->SetBranchAddress("muminus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS", &muminus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS, &b_muminus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS);
   fChain->SetBranchAddress("muminus_TRACK_Type", &muminus_TRACK_Type, &b_muminus_TRACK_Type);
   fChain->SetBranchAddress("muminus_TRACK_Key", &muminus_TRACK_Key, &b_muminus_TRACK_Key);
   fChain->SetBranchAddress("muminus_TRACK_CHI2NDOF", &muminus_TRACK_CHI2NDOF, &b_muminus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("muminus_TRACK_PCHI2", &muminus_TRACK_PCHI2, &b_muminus_TRACK_PCHI2);
   fChain->SetBranchAddress("muminus_TRACK_MatchCHI2", &muminus_TRACK_MatchCHI2, &b_muminus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("muminus_TRACK_GhostProb", &muminus_TRACK_GhostProb, &b_muminus_TRACK_GhostProb);
   fChain->SetBranchAddress("muminus_TRACK_CloneDist", &muminus_TRACK_CloneDist, &b_muminus_TRACK_CloneDist);
   fChain->SetBranchAddress("muminus_TRACK_Likelihood", &muminus_TRACK_Likelihood, &b_muminus_TRACK_Likelihood);
   fChain->SetBranchAddress("nCandidate", &nCandidate, &b_nCandidate);
   fChain->SetBranchAddress("totCandidates", &totCandidates, &b_totCandidates);
   fChain->SetBranchAddress("EventInSequence", &EventInSequence, &b_EventInSequence);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("BCID", &BCID, &b_BCID);
   fChain->SetBranchAddress("BCType", &BCType, &b_BCType);
   fChain->SetBranchAddress("OdinTCK", &OdinTCK, &b_OdinTCK);
   fChain->SetBranchAddress("L0DUTCK", &L0DUTCK, &b_L0DUTCK);
   fChain->SetBranchAddress("HLT1TCK", &HLT1TCK, &b_HLT1TCK);
   fChain->SetBranchAddress("HLT2TCK", &HLT2TCK, &b_HLT2TCK);
   fChain->SetBranchAddress("GpsTime", &GpsTime, &b_GpsTime);
   fChain->SetBranchAddress("Polarity", &Polarity, &b_Polarity);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("PVX", PVX, &b_PVX);
   fChain->SetBranchAddress("PVY", PVY, &b_PVY);
   fChain->SetBranchAddress("PVZ", PVZ, &b_PVZ);
   fChain->SetBranchAddress("PVXERR", PVXERR, &b_PVXERR);
   fChain->SetBranchAddress("PVYERR", PVYERR, &b_PVYERR);
   fChain->SetBranchAddress("PVZERR", PVZERR, &b_PVZERR);
   fChain->SetBranchAddress("PVCHI2", PVCHI2, &b_PVCHI2);
   fChain->SetBranchAddress("PVNDOF", PVNDOF, &b_PVNDOF);
   fChain->SetBranchAddress("PVNTRACKS", PVNTRACKS, &b_PVNTRACKS);
   fChain->SetBranchAddress("nPVs", &nPVs, &b_nPVs);
   fChain->SetBranchAddress("nTracks", &nTracks, &b_nTracks);
   fChain->SetBranchAddress("nLongTracks", &nLongTracks, &b_nLongTracks);
   fChain->SetBranchAddress("nDownstreamTracks", &nDownstreamTracks, &b_nDownstreamTracks);
   fChain->SetBranchAddress("nUpstreamTracks", &nUpstreamTracks, &b_nUpstreamTracks);
   fChain->SetBranchAddress("nVeloTracks", &nVeloTracks, &b_nVeloTracks);
   fChain->SetBranchAddress("nTTracks", &nTTracks, &b_nTTracks);
   fChain->SetBranchAddress("nBackTracks", &nBackTracks, &b_nBackTracks);
   fChain->SetBranchAddress("nRich1Hits", &nRich1Hits, &b_nRich1Hits);
   fChain->SetBranchAddress("nRich2Hits", &nRich2Hits, &b_nRich2Hits);
   fChain->SetBranchAddress("nVeloClusters", &nVeloClusters, &b_nVeloClusters);
   fChain->SetBranchAddress("nITClusters", &nITClusters, &b_nITClusters);
   fChain->SetBranchAddress("nTTClusters", &nTTClusters, &b_nTTClusters);
   fChain->SetBranchAddress("nOTClusters", &nOTClusters, &b_nOTClusters);
   fChain->SetBranchAddress("nSPDHits", &nSPDHits, &b_nSPDHits);
   fChain->SetBranchAddress("nMuonCoordsS0", &nMuonCoordsS0, &b_nMuonCoordsS0);
   fChain->SetBranchAddress("nMuonCoordsS1", &nMuonCoordsS1, &b_nMuonCoordsS1);
   fChain->SetBranchAddress("nMuonCoordsS2", &nMuonCoordsS2, &b_nMuonCoordsS2);
   fChain->SetBranchAddress("nMuonCoordsS3", &nMuonCoordsS3, &b_nMuonCoordsS3);
   fChain->SetBranchAddress("nMuonCoordsS4", &nMuonCoordsS4, &b_nMuonCoordsS4);
   fChain->SetBranchAddress("nMuonTracks", &nMuonTracks, &b_nMuonTracks);
   fChain->SetBranchAddress("L0Global", &L0Global, &b_L0Global);
   fChain->SetBranchAddress("Hlt1Global", &Hlt1Global, &b_Hlt1Global);
   fChain->SetBranchAddress("Hlt2Global", &Hlt2Global, &b_Hlt2Global);
   Notify();
}

Bool_t MCD2PimumuOS_class::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void MCD2PimumuOS_class::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t MCD2PimumuOS_class::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef MCD2PimumuOS_class_cxx
