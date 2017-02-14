#include "/afs/cern.ch/work/a/atrisovi/analysis-case-study/Step3_cuts/RootHeaders.h"
#include "iostream"
#include "fstream"

using namespace std;

void Main(TString sFile, TString sFolder, TString sTree) {

TString sOutput = "D2hMuMu11_MagD_2KMuMuSS_NTuple_Reduced.root";
  cout << "Hello there" << endl;

  // Get the data files
  TChain* Data = new TChain(sFolder+"/"+sTree);
  
  Data->Add(sFile);
     
  Data->SetBranchStatus("D_ENDVERTEX_X", 0);
   Data->SetBranchStatus("D_ENDVERTEX_Y", 0);
   Data->SetBranchStatus("D_ENDVERTEX_Z", 0);
   Data->SetBranchStatus("D_ENDVERTEX_XERR", 0);
   Data->SetBranchStatus("D_ENDVERTEX_YERR", 0);
   Data->SetBranchStatus("D_ENDVERTEX_ZERR", 0);
   //Data->SetBranchStatus("D_ENDVERTEX_CHI2", 0);
   Data->SetBranchStatus("D_ENDVERTEX_NDOF", 0);
   Data->SetBranchStatus("D_ENDVERTEX_COV_", 0);
   Data->SetBranchStatus("D_OWNPV_X", 0);
   Data->SetBranchStatus("D_OWNPV_Y", 0);
   Data->SetBranchStatus("D_OWNPV_Z", 0);
   Data->SetBranchStatus("D_OWNPV_XERR", 0);
   Data->SetBranchStatus("D_OWNPV_YERR", 0);
   Data->SetBranchStatus("D_OWNPV_ZERR", 0);
   Data->SetBranchStatus("D_OWNPV_CHI2", 0);
   Data->SetBranchStatus("D_OWNPV_NDOF", 0);
   Data->SetBranchStatus("D_OWNPV_COV_", 0);
   /*Data->SetBranchStatus("D_IP_OWNPV", 0);
   Data->SetBranchStatus("D_IPCHI2_OWNPV", 0);
   Data->SetBranchStatus("D_FD_OWNPV", 0);
   Data->SetBranchStatus("D_FDCHI2_OWNPV", 0);
   Data->SetBranchStatus("D_DIRA_OWNPV", 0);
   Data->SetBranchStatus("D_P", 0);
   Data->SetBranchStatus("D_PT", 0);*/
   Data->SetBranchStatus("D_PE", 0);
   Data->SetBranchStatus("D_PX", 0);
   Data->SetBranchStatus("D_PY", 0);
   Data->SetBranchStatus("D_PZ", 0);
  /* Data->SetBranchStatus("D_MM", 0);
   Data->SetBranchStatus("D_MMERR", 0);
   Data->SetBranchStatus("D_M", 0);
   Data->SetBranchStatus("D_ID", 0);
   Data->SetBranchStatus("D_TAU", 0);
   Data->SetBranchStatus("D_TAUERR", 0);
   Data->SetBranchStatus("D_TAUCHI2", 0);*/
  /*  Data->SetBranchStatus("D_L0Global_Dec", 0); */
  /*  Data->SetBranchStatus("D_L0Global_TIS", 0); */
  /*  Data->SetBranchStatus("D_L0Global_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt1Global_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt1Global_TIS", 0); */
  /*  Data->SetBranchStatus("D_Hlt1Global_TOS", 0); */
  /*  /\*Data->SetBranchStatus("D_Hlt1Phys_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt1Phys_TIS", 0); */
  /*  Data->SetBranchStatus("D_Hlt1Phys_TOS", 0);*\/ */
  /*  Data->SetBranchStatus("D_Hlt2Global_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt2Global_TIS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2Global_TOS", 0); */
  /*  /\*Data->SetBranchStatus("D_Hlt2Phys_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt2Phys_TIS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2Phys_TOS", 0);*\/ */
  /*  Data->SetBranchStatus("D_L0DiMuonDecision_Dec", 0); */
  /*  Data->SetBranchStatus("D_L0DiMuonDecision_TIS", 0); */
  /*  Data->SetBranchStatus("D_L0DiMuonDecision_TOS", 0); */
  /*  Data->SetBranchStatus("D_L0MuonDecision_Dec", 0); */
  /*  Data->SetBranchStatus("D_L0MuonDecision_TIS", 0); */
  /*  Data->SetBranchStatus("D_L0MuonDecision_TOS", 0); */
  /*  Data->SetBranchStatus("D_L0MuonHighDecision_Dec", 0); */
  /*  Data->SetBranchStatus("D_L0MuonHighDecision_TIS", 0); */
  /*  Data->SetBranchStatus("D_L0MuonHighDecision_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt1DiMuonHighMassDecision_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt1DiMuonHighMassDecision_TIS", 0); */
  /* // Data->SetBranchStatus("D_Hlt1DiMuonHighMassDecision_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt1DiMuonLowMassDecision_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt1DiMuonLowMassDecision_TIS", 0); */
  /*  Data->SetBranchStatus("D_Hlt1DiMuonLowMassDecision_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt1SingleMuonHighPTDecision_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt1SingleMuonHighPTDecision_TIS", 0); */
  /*  //Data->SetBranchStatus("D_Hlt1SingleMuonHighPTDecision_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt1TrackMuonDecision_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt1TrackMuonDecision_TIS", 0); */
  /*  Data->SetBranchStatus("D_Hlt1TrackMuonDecision_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt1TrackAllL0Decision_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt1TrackAllL0Decision_TIS", 0); */
  /*  Data->SetBranchStatus("D_Hlt1TrackAllL0Decision_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonDY1Decision_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonDY1Decision_TIS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonDY1Decision_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonDY2Decision_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonDY2Decision_TIS", 0); */
  /*  //Data->SetBranchStatus("D_Hlt2DiMuonDY2Decision_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonDY3Decision_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonDY3Decision_TIS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonDY3Decision_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonDY4Decision_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonDY4Decision_TIS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonDY4Decision_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonDetachedDecision_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonDetachedDecision_TIS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonDetachedDecision_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonDetachedHeavyDecision_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonDetachedHeavyDecision_TIS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonDetachedHeavyDecision_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonBDecision_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonBDecision_TIS", 0); */
  /*  //Data->SetBranchStatus("D_Hlt2DiMuonBDecision_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonLowMassDecision_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonLowMassDecision_TIS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonLowMassDecision_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonDecision_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonDecision_TIS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2DiMuonDecision_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2CharmSemilepD2HMuMuDecision_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt2CharmSemilepD2HMuMuDecision_TIS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2CharmSemilepD2HMuMuDecision_TOS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec", 0); */
  /*  Data->SetBranchStatus("D_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS", 0); */
  /*  Data->SetBranchStatus("D_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS", 0); */
  
   Data->SetBranchStatus("D_cpx_0.50", 0);
   Data->SetBranchStatus("D_cpy_0.50", 0);
   Data->SetBranchStatus("D_cpz_0.50", 0);
   Data->SetBranchStatus("D_cpt_0.50", 0);
   Data->SetBranchStatus("D_cp_0.50", 0);
   Data->SetBranchStatus("D_cmult_0.50", 0);
   Data->SetBranchStatus("D_cpx_0.60", 0);
   Data->SetBranchStatus("D_cpy_0.60", 0);
   Data->SetBranchStatus("D_cpz_0.60", 0);
   Data->SetBranchStatus("D_cpt_0.60", 0);
   Data->SetBranchStatus("D_cp_0.60", 0);
   Data->SetBranchStatus("D_cmult_0.60", 0);
   Data->SetBranchStatus("D_cpx_0.70", 0);
   Data->SetBranchStatus("D_cpy_0.70", 0);
   Data->SetBranchStatus("D_cpz_0.70", 0);
   Data->SetBranchStatus("D_cpt_0.70", 0);
   Data->SetBranchStatus("D_cp_0.70", 0);
   Data->SetBranchStatus("D_cmult_0.70", 0);
   Data->SetBranchStatus("D_cpx_0.80", 0);
   Data->SetBranchStatus("D_cpy_0.80", 0);
   Data->SetBranchStatus("D_cpz_0.80", 0);
   Data->SetBranchStatus("D_cpt_0.80", 0);
   Data->SetBranchStatus("D_cp_0.80", 0);
   Data->SetBranchStatus("D_cmult_0.80", 0);
   Data->SetBranchStatus("D_cpx_0.90", 0);
   Data->SetBranchStatus("D_cpy_0.90", 0);
   Data->SetBranchStatus("D_cpz_0.90", 0);
   Data->SetBranchStatus("D_cpt_0.90", 0);
   Data->SetBranchStatus("D_cp_0.90", 0);
   Data->SetBranchStatus("D_cmult_0.90", 0);
   Data->SetBranchStatus("D_cpx_1.00", 0);
   Data->SetBranchStatus("D_cpy_1.00", 0);
   Data->SetBranchStatus("D_cpz_1.00", 0);
   Data->SetBranchStatus("D_cpt_1.00", 0);
   Data->SetBranchStatus("D_cp_1.00", 0);
   Data->SetBranchStatus("D_cmult_1.00", 0);
   Data->SetBranchStatus("D_NumVtxWithinChi2WindowOneTrack", 0);
   Data->SetBranchStatus("D_SmallestDeltaChi2OneTrack", 0);
   Data->SetBranchStatus("D_SmallestDeltaChi2MassOneTrack", 0);
   Data->SetBranchStatus("D_SmallestDeltaChi2TwoTracks", 0);
   Data->SetBranchStatus("D_SmallestDeltaChi2MassTwoTracks", 0);
   /* Data->SetBranchStatus("Kminus_MC12TuneV2_ProbNNe", 0); */
   /* Data->SetBranchStatus("Kminus_MC12TuneV2_ProbNNmu", 0); */
   /* Data->SetBranchStatus("Kminus_MC12TuneV2_ProbNNpi", 0); */
   /* Data->SetBranchStatus("Kminus_MC12TuneV2_ProbNNk", 0); */
   /* Data->SetBranchStatus("Kminus_MC12TuneV2_ProbNNp", 0); */
   /* Data->SetBranchStatus("Kminus_MC12TuneV2_ProbNNghost", 0); */
   /* Data->SetBranchStatus("Kminus_MC12TuneV3_ProbNNe", 0); */
   /* Data->SetBranchStatus("Kminus_MC12TuneV3_ProbNNmu", 0); */
   /* Data->SetBranchStatus("Kminus_MC12TuneV3_ProbNNpi", 0); */
   /* Data->SetBranchStatus("Kminus_MC12TuneV3_ProbNNk", 0); */
   /* Data->SetBranchStatus("Kminus_MC12TuneV3_ProbNNp", 0); */
   /* Data->SetBranchStatus("Kminus_MC12TuneV3_ProbNNghost", 0); */
   /* Data->SetBranchStatus("Kminus_CosTheta", 0); */
   Data->SetBranchStatus("Kminus_OWNPV_X", 0);
   Data->SetBranchStatus("Kminus_OWNPV_Y", 0);
   Data->SetBranchStatus("Kminus_OWNPV_Z", 0);
   Data->SetBranchStatus("Kminus_OWNPV_XERR", 0);
   Data->SetBranchStatus("Kminus_OWNPV_YERR", 0);
   Data->SetBranchStatus("Kminus_OWNPV_ZERR", 0);
   Data->SetBranchStatus("Kminus_OWNPV_CHI2", 0);
   Data->SetBranchStatus("Kminus_OWNPV_NDOF", 0);
   Data->SetBranchStatus("Kminus_OWNPV_COV_", 0);
   //Data->SetBranchStatus("Kminus_IP_OWNPV", 0);
   //Data->SetBranchStatus("Kminus_IPCHI2_OWNPV", 0);
   Data->SetBranchStatus("Kminus_ORIVX_X", 0);
   Data->SetBranchStatus("Kminus_ORIVX_Y", 0);
   Data->SetBranchStatus("Kminus_ORIVX_Z", 0);
   Data->SetBranchStatus("Kminus_ORIVX_XERR", 0);
   Data->SetBranchStatus("Kminus_ORIVX_YERR", 0);
   Data->SetBranchStatus("Kminus_ORIVX_ZERR", 0);
   Data->SetBranchStatus("Kminus_ORIVX_CHI2", 0);
   Data->SetBranchStatus("Kminus_ORIVX_NDOF", 0);
   Data->SetBranchStatus("Kminus_ORIVX_COV_", 0);
   //Data->SetBranchStatus("Kminus_P", 0);
   //Data->SetBranchStatus("Kminus_PT", 0);
   Data->SetBranchStatus("Kminus_PE", 0);
   Data->SetBranchStatus("Kminus_PX", 0);
   Data->SetBranchStatus("Kminus_PY", 0);
   Data->SetBranchStatus("Kminus_PZ", 0);
   Data->SetBranchStatus("Kminus_M", 0);
   Data->SetBranchStatus("Kminus_ID", 0);
   /* Data->SetBranchStatus("Kminus_PIDe", 0); */
   /* Data->SetBranchStatus("Kminus_PIDmu", 0); */
   /* Data->SetBranchStatus("Kminus_PIDK", 0); */
   /* Data->SetBranchStatus("Kminus_PIDp", 0); */
   /* Data->SetBranchStatus("Kminus_ProbNNe", 0); */
   /* Data->SetBranchStatus("Kminus_ProbNNk", 0); */
   /* Data->SetBranchStatus("Kminus_ProbNNp", 0); */
   /* Data->SetBranchStatus("Kminus_ProbNNpi", 0); */
   /* Data->SetBranchStatus("Kminus_ProbNNmu", 0); */
   /* Data->SetBranchStatus("Kminus_ProbNNghost", 0); */
   Data->SetBranchStatus("Kminus_hasMuon", 0);
   //Data->SetBranchStatus("Kminus_isMuon", 0);
   Data->SetBranchStatus("Kminus_hasRich", 0);
   Data->SetBranchStatus("Kminus_hasCalo", 0);
   Data->SetBranchStatus("Kminus_L0Global_Dec", 0);
   Data->SetBranchStatus("Kminus_L0Global_TIS", 0);
   Data->SetBranchStatus("Kminus_L0Global_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt1Global_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt1Global_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt1Global_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt1Phys_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt1Phys_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt1Phys_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt2Global_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt2Global_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt2Global_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt2Phys_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt2Phys_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt2Phys_TOS", 0);
   Data->SetBranchStatus("Kminus_L0DiMuonDecision_Dec", 0);
   Data->SetBranchStatus("Kminus_L0DiMuonDecision_TIS", 0);
   Data->SetBranchStatus("Kminus_L0DiMuonDecision_TOS", 0);
   Data->SetBranchStatus("Kminus_L0MuonDecision_Dec", 0);
   Data->SetBranchStatus("Kminus_L0MuonDecision_TIS", 0);
   Data->SetBranchStatus("Kminus_L0MuonDecision_TOS", 0);
   Data->SetBranchStatus("Kminus_L0MuonHighDecision_Dec", 0);
   Data->SetBranchStatus("Kminus_L0MuonHighDecision_TIS", 0);
   Data->SetBranchStatus("Kminus_L0MuonHighDecision_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt1DiMuonHighMassDecision_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt1DiMuonHighMassDecision_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt1DiMuonHighMassDecision_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt1DiMuonLowMassDecision_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt1DiMuonLowMassDecision_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt1DiMuonLowMassDecision_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt1SingleMuonHighPTDecision_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt1SingleMuonHighPTDecision_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt1SingleMuonHighPTDecision_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt1TrackMuonDecision_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt1TrackMuonDecision_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt1TrackMuonDecision_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt1TrackAllL0Decision_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt1TrackAllL0Decision_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt1TrackAllL0Decision_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDY1Decision_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDY1Decision_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDY1Decision_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDY2Decision_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDY2Decision_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDY2Decision_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDY3Decision_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDY3Decision_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDY3Decision_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDY4Decision_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDY4Decision_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDY4Decision_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDetachedDecision_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDetachedDecision_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDetachedDecision_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDetachedHeavyDecision_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDetachedHeavyDecision_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDetachedHeavyDecision_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonBDecision_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonBDecision_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonBDecision_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonLowMassDecision_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonLowMassDecision_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonLowMassDecision_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDecision_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDecision_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt2DiMuonDecision_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt2CharmSemilepD2HMuMuDecision_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt2CharmSemilepD2HMuMuDecision_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt2CharmSemilepD2HMuMuDecision_TOS", 0);
   Data->SetBranchStatus("Kminus_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec", 0);
   Data->SetBranchStatus("Kminus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS", 0);
   Data->SetBranchStatus("Kminus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS", 0);
   Data->SetBranchStatus("Kminus_TRACK_Type", 0);
   Data->SetBranchStatus("Kminus_TRACK_Key", 0);
   // Data->SetBranchStatus("Kminus_TRACK_CHI2NDOF", 0);
   Data->SetBranchStatus("Kminus_TRACK_PCHI2", 0);
   Data->SetBranchStatus("Kminus_TRACK_MatchCHI2", 0);
   //Data->SetBranchStatus("Kminus_TRACK_GhostProb", 0);
   Data->SetBranchStatus("Kminus_TRACK_CloneDist", 0);
   Data->SetBranchStatus("Kminus_TRACK_Likelihood", 0);
   Data->SetBranchStatus("Kminus_cpx_0.50", 0);
   Data->SetBranchStatus("Kminus_cpy_0.50", 0);
   Data->SetBranchStatus("Kminus_cpz_0.50", 0);
   Data->SetBranchStatus("Kminus_cpt_0.50", 0);
   Data->SetBranchStatus("Kminus_cp_0.50", 0);
   Data->SetBranchStatus("Kminus_cmult_0.50", 0);
   Data->SetBranchStatus("Kminus_cpx_0.60", 0);
   Data->SetBranchStatus("Kminus_cpy_0.60", 0);
   Data->SetBranchStatus("Kminus_cpz_0.60", 0);
   Data->SetBranchStatus("Kminus_cpt_0.60", 0);
   Data->SetBranchStatus("Kminus_cp_0.60", 0);
   Data->SetBranchStatus("Kminus_cmult_0.60", 0);
   Data->SetBranchStatus("Kminus_cpx_0.70", 0);
   Data->SetBranchStatus("Kminus_cpy_0.70", 0);
   Data->SetBranchStatus("Kminus_cpz_0.70", 0);
   Data->SetBranchStatus("Kminus_cpt_0.70", 0);
   Data->SetBranchStatus("Kminus_cp_0.70", 0);
   Data->SetBranchStatus("Kminus_cmult_0.70", 0);
   Data->SetBranchStatus("Kminus_cpx_0.80", 0);
   Data->SetBranchStatus("Kminus_cpy_0.80", 0);
   Data->SetBranchStatus("Kminus_cpz_0.80", 0);
   Data->SetBranchStatus("Kminus_cpt_0.80", 0);
   Data->SetBranchStatus("Kminus_cp_0.80", 0);
   Data->SetBranchStatus("Kminus_cmult_0.80", 0);
   Data->SetBranchStatus("Kminus_cpx_0.90", 0);
   Data->SetBranchStatus("Kminus_cpy_0.90", 0);
   Data->SetBranchStatus("Kminus_cpz_0.90", 0);
   Data->SetBranchStatus("Kminus_cpt_0.90", 0);
   Data->SetBranchStatus("Kminus_cp_0.90", 0);
   Data->SetBranchStatus("Kminus_cmult_0.90", 0);
   Data->SetBranchStatus("Kminus_cpx_1.00", 0);
   Data->SetBranchStatus("Kminus_cpy_1.00", 0);
   Data->SetBranchStatus("Kminus_cpz_1.00", 0);
   Data->SetBranchStatus("Kminus_cpt_1.00", 0);
   Data->SetBranchStatus("Kminus_cp_1.00", 0);
   Data->SetBranchStatus("Kminus_cmult_1.00", 0);
  /* Data->SetBranchStatus("muplus_MC12TuneV2_ProbNNe", 0);
   Data->SetBranchStatus("muplus_MC12TuneV2_ProbNNmu", 0);
   Data->SetBranchStatus("muplus_MC12TuneV2_ProbNNpi", 0);
   Data->SetBranchStatus("muplus_MC12TuneV2_ProbNNk", 0);
   Data->SetBranchStatus("muplus_MC12TuneV2_ProbNNp", 0);
   Data->SetBranchStatus("muplus_MC12TuneV2_ProbNNghost", 0);
   Data->SetBranchStatus("muplus_MC12TuneV3_ProbNNe", 0);
   Data->SetBranchStatus("muplus_MC12TuneV3_ProbNNmu", 0);
   Data->SetBranchStatus("muplus_MC12TuneV3_ProbNNpi", 0);
   Data->SetBranchStatus("muplus_MC12TuneV3_ProbNNk", 0);
   Data->SetBranchStatus("muplus_MC12TuneV3_ProbNNp", 0);
   Data->SetBranchStatus("muplus_MC12TuneV3_ProbNNghost", 0);
   Data->SetBranchStatus("muplus_CosTheta", 0);*/
   Data->SetBranchStatus("muplus_OWNPV_X", 0);
   Data->SetBranchStatus("muplus_OWNPV_Y", 0);
   Data->SetBranchStatus("muplus_OWNPV_Z", 0);
   Data->SetBranchStatus("muplus_OWNPV_XERR", 0);
   Data->SetBranchStatus("muplus_OWNPV_YERR", 0);
   Data->SetBranchStatus("muplus_OWNPV_ZERR", 0);
   Data->SetBranchStatus("muplus_OWNPV_CHI2", 0);
   Data->SetBranchStatus("muplus_OWNPV_NDOF", 0);
   Data->SetBranchStatus("muplus_OWNPV_COV_", 0);
   //Data->SetBranchStatus("muplus_IP_OWNPV", 0);
   //Data->SetBranchStatus("muplus_IPCHI2_OWNPV", 0);
   Data->SetBranchStatus("muplus_ORIVX_X", 0);
   Data->SetBranchStatus("muplus_ORIVX_Y", 0);
   Data->SetBranchStatus("muplus_ORIVX_Z", 0);
   Data->SetBranchStatus("muplus_ORIVX_XERR", 0);
   Data->SetBranchStatus("muplus_ORIVX_YERR", 0);
   Data->SetBranchStatus("muplus_ORIVX_ZERR", 0);
   Data->SetBranchStatus("muplus_ORIVX_CHI2", 0);
   Data->SetBranchStatus("muplus_ORIVX_NDOF", 0);
   Data->SetBranchStatus("muplus_ORIVX_COV_", 0);
   //Data->SetBranchStatus("muplus_P", 0);
   //Data->SetBranchStatus("muplus_PT", 0);
   Data->SetBranchStatus("muplus_PE", 0);
   //Data->SetBranchStatus("muplus_PX", 0);
   //Data->SetBranchStatus("muplus_PY", 0);
   //Data->SetBranchStatus("muplus_PZ", 0);
   Data->SetBranchStatus("muplus_M", 0);
   Data->SetBranchStatus("muplus_ID", 0);
   /*Data->SetBranchStatus("muplus_PIDe", 0);
   Data->SetBranchStatus("muplus_PIDmu", 0);
   Data->SetBranchStatus("muplus_PIDK", 0);
   Data->SetBranchStatus("muplus_PIDp", 0);
   Data->SetBranchStatus("muplus_ProbNNe", 0);
   Data->SetBranchStatus("muplus_ProbNNk", 0);
   Data->SetBranchStatus("muplus_ProbNNp", 0);
   Data->SetBranchStatus("muplus_ProbNNpi", 0);
   Data->SetBranchStatus("muplus_ProbNNmu", 0);
   Data->SetBranchStatus("muplus_ProbNNghost", 0);*/
   Data->SetBranchStatus("muplus_hasMuon", 0);
   //Data->SetBranchStatus("muplus_isMuon", 0);
   Data->SetBranchStatus("muplus_hasRich", 0);
   Data->SetBranchStatus("muplus_hasCalo", 0);
   Data->SetBranchStatus("muplus_L0Global_Dec", 0);
   Data->SetBranchStatus("muplus_L0Global_TIS", 0);
   Data->SetBranchStatus("muplus_L0Global_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt1Global_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt1Global_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt1Global_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt1Phys_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt1Phys_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt1Phys_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt2Global_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt2Global_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt2Global_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt2Phys_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt2Phys_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt2Phys_TOS", 0);
   Data->SetBranchStatus("muplus_L0DiMuonDecision_Dec", 0);
   Data->SetBranchStatus("muplus_L0DiMuonDecision_TIS", 0);
   Data->SetBranchStatus("muplus_L0DiMuonDecision_TOS", 0);
   Data->SetBranchStatus("muplus_L0MuonDecision_Dec", 0);
   Data->SetBranchStatus("muplus_L0MuonDecision_TIS", 0);
   Data->SetBranchStatus("muplus_L0MuonDecision_TOS", 0);
   Data->SetBranchStatus("muplus_L0MuonHighDecision_Dec", 0);
   Data->SetBranchStatus("muplus_L0MuonHighDecision_TIS", 0);
   Data->SetBranchStatus("muplus_L0MuonHighDecision_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt1DiMuonHighMassDecision_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt1DiMuonHighMassDecision_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt1DiMuonHighMassDecision_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt1DiMuonLowMassDecision_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt1DiMuonLowMassDecision_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt1DiMuonLowMassDecision_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt1SingleMuonHighPTDecision_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt1SingleMuonHighPTDecision_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt1SingleMuonHighPTDecision_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt1TrackMuonDecision_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt1TrackMuonDecision_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt1TrackMuonDecision_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt1TrackAllL0Decision_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt1TrackAllL0Decision_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt1TrackAllL0Decision_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDY1Decision_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDY1Decision_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDY1Decision_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDY2Decision_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDY2Decision_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDY2Decision_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDY3Decision_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDY3Decision_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDY3Decision_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDY4Decision_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDY4Decision_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDY4Decision_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDetachedDecision_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDetachedDecision_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDetachedDecision_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDetachedHeavyDecision_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDetachedHeavyDecision_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDetachedHeavyDecision_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonBDecision_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonBDecision_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonBDecision_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonLowMassDecision_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonLowMassDecision_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonLowMassDecision_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDecision_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDecision_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt2DiMuonDecision_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt2CharmSemilepD2HMuMuDecision_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt2CharmSemilepD2HMuMuDecision_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt2CharmSemilepD2HMuMuDecision_TOS", 0);
   Data->SetBranchStatus("muplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec", 0);
   Data->SetBranchStatus("muplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS", 0);
   Data->SetBranchStatus("muplus_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS", 0);
   Data->SetBranchStatus("muplus_TRACK_Type", 0);
   Data->SetBranchStatus("muplus_TRACK_Key", 0);
   //Data->SetBranchStatus("muplus_TRACK_CHI2NDOF", 0);
   Data->SetBranchStatus("muplus_TRACK_PCHI2", 0);
   Data->SetBranchStatus("muplus_TRACK_MatchCHI2", 0);
   //Data->SetBranchStatus("muplus_TRACK_GhostProb", 0);
   Data->SetBranchStatus("muplus_TRACK_CloneDist", 0);
   Data->SetBranchStatus("muplus_TRACK_Likelihood", 0);
   Data->SetBranchStatus("muplus_cpx_0.50", 0);
   Data->SetBranchStatus("muplus_cpy_0.50", 0);
   Data->SetBranchStatus("muplus_cpz_0.50", 0);
   Data->SetBranchStatus("muplus_cpt_0.50", 0);
   Data->SetBranchStatus("muplus_cp_0.50", 0);
   Data->SetBranchStatus("muplus_cmult_0.50", 0);
   Data->SetBranchStatus("muplus_cpx_0.60", 0);
   Data->SetBranchStatus("muplus_cpy_0.60", 0);
   Data->SetBranchStatus("muplus_cpz_0.60", 0);
   Data->SetBranchStatus("muplus_cpt_0.60", 0);
   Data->SetBranchStatus("muplus_cp_0.60", 0);
   Data->SetBranchStatus("muplus_cmult_0.60", 0);
   Data->SetBranchStatus("muplus_cpx_0.70", 0);
   Data->SetBranchStatus("muplus_cpy_0.70", 0);
   Data->SetBranchStatus("muplus_cpz_0.70", 0);
   Data->SetBranchStatus("muplus_cpt_0.70", 0);
   Data->SetBranchStatus("muplus_cp_0.70", 0);
   Data->SetBranchStatus("muplus_cmult_0.70", 0);
   Data->SetBranchStatus("muplus_cpx_0.80", 0);
   Data->SetBranchStatus("muplus_cpy_0.80", 0);
   Data->SetBranchStatus("muplus_cpz_0.80", 0);
   Data->SetBranchStatus("muplus_cpt_0.80", 0);
   Data->SetBranchStatus("muplus_cp_0.80", 0);
   Data->SetBranchStatus("muplus_cmult_0.80", 0);
   Data->SetBranchStatus("muplus_cpx_0.90", 0);
   Data->SetBranchStatus("muplus_cpy_0.90", 0);
   Data->SetBranchStatus("muplus_cpz_0.90", 0);
   Data->SetBranchStatus("muplus_cpt_0.90", 0);
   Data->SetBranchStatus("muplus_cp_0.90", 0);
   Data->SetBranchStatus("muplus_cmult_0.90", 0);
   Data->SetBranchStatus("muplus_cpx_1.00", 0);
   Data->SetBranchStatus("muplus_cpy_1.00", 0);
   Data->SetBranchStatus("muplus_cpz_1.00", 0);
   Data->SetBranchStatus("muplus_cpt_1.00", 0);
   Data->SetBranchStatus("muplus_cp_1.00", 0);
   Data->SetBranchStatus("muplus_cmult_1.00", 0);
  /* Data->SetBranchStatus("muplus0_MC12TuneV2_ProbNNe", 0);
   Data->SetBranchStatus("muplus0_MC12TuneV2_ProbNNmu", 0);
   Data->SetBranchStatus("muplus0_MC12TuneV2_ProbNNpi", 0);
   Data->SetBranchStatus("muplus0_MC12TuneV2_ProbNNk", 0);
   Data->SetBranchStatus("muplus0_MC12TuneV2_ProbNNp", 0);
   Data->SetBranchStatus("muplus0_MC12TuneV2_ProbNNghost", 0);
   Data->SetBranchStatus("muplus0_MC12TuneV3_ProbNNe", 0);
   Data->SetBranchStatus("muplus0_MC12TuneV3_ProbNNmu", 0);
   Data->SetBranchStatus("muplus0_MC12TuneV3_ProbNNpi", 0);
   Data->SetBranchStatus("muplus0_MC12TuneV3_ProbNNk", 0);
   Data->SetBranchStatus("muplus0_MC12TuneV3_ProbNNp", 0);
   Data->SetBranchStatus("muplus0_MC12TuneV3_ProbNNghost", 0);
   Data->SetBranchStatus("muplus0_CosTheta", 0);*/
   Data->SetBranchStatus("muplus0_OWNPV_X", 0);
   Data->SetBranchStatus("muplus0_OWNPV_Y", 0);
   Data->SetBranchStatus("muplus0_OWNPV_Z", 0);
   Data->SetBranchStatus("muplus0_OWNPV_XERR", 0);
   Data->SetBranchStatus("muplus0_OWNPV_YERR", 0);
   Data->SetBranchStatus("muplus0_OWNPV_ZERR", 0);
   Data->SetBranchStatus("muplus0_OWNPV_CHI2", 0);
   Data->SetBranchStatus("muplus0_OWNPV_NDOF", 0);
   Data->SetBranchStatus("muplus0_OWNPV_COV_", 0);
   //Data->SetBranchStatus("muplus0_IP_OWNPV", 0);
   //Data->SetBranchStatus("muplus0_IPCHI2_OWNPV", 0);
   Data->SetBranchStatus("muplus0_ORIVX_X", 0);
   Data->SetBranchStatus("muplus0_ORIVX_Y", 0);
   Data->SetBranchStatus("muplus0_ORIVX_Z", 0);
   Data->SetBranchStatus("muplus0_ORIVX_XERR", 0);
   Data->SetBranchStatus("muplus0_ORIVX_YERR", 0);
   Data->SetBranchStatus("muplus0_ORIVX_ZERR", 0);
   Data->SetBranchStatus("muplus0_ORIVX_CHI2", 0);
   Data->SetBranchStatus("muplus0_ORIVX_NDOF", 0);
   Data->SetBranchStatus("muplus0_ORIVX_COV_", 0);
   //Data->SetBranchStatus("muplus0_P", 0);
   //Data->SetBranchStatus("muplus0_PT", 0);
   Data->SetBranchStatus("muplus0_PE", 0);
   Data->SetBranchStatus("muplus0_PX", 0);
   Data->SetBranchStatus("muplus0_PY", 0);
   Data->SetBranchStatus("muplus0_PZ", 0);
   Data->SetBranchStatus("muplus0_M", 0);
   Data->SetBranchStatus("muplus0_ID", 0);
   /*Data->SetBranchStatus("muplus0_PIDe", 0);
   Data->SetBranchStatus("muplus0_PIDmu", 0);
   Data->SetBranchStatus("muplus0_PIDK", 0);
   Data->SetBranchStatus("muplus0_PIDp", 0);
   Data->SetBranchStatus("muplus0_ProbNNe", 0);
   Data->SetBranchStatus("muplus0_ProbNNk", 0);
   Data->SetBranchStatus("muplus0_ProbNNp", 0);
   Data->SetBranchStatus("muplus0_ProbNNpi", 0);
   Data->SetBranchStatus("muplus0_ProbNNmu", 0);
   Data->SetBranchStatus("muplus0_ProbNNghost", 0);*/
   Data->SetBranchStatus("muplus0_hasMuon", 0);
   //Data->SetBranchStatus("muplus0_isMuon", 0);
   Data->SetBranchStatus("muplus0_hasRich", 0);
   Data->SetBranchStatus("muplus0_hasCalo", 0);
   Data->SetBranchStatus("muplus0_L0Global_Dec", 0);
   Data->SetBranchStatus("muplus0_L0Global_TIS", 0);
   Data->SetBranchStatus("muplus0_L0Global_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt1Global_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt1Global_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt1Global_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt1Phys_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt1Phys_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt1Phys_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt2Global_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt2Global_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt2Global_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt2Phys_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt2Phys_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt2Phys_TOS", 0);
   Data->SetBranchStatus("muplus0_L0DiMuonDecision_Dec", 0);
   Data->SetBranchStatus("muplus0_L0DiMuonDecision_TIS", 0);
   Data->SetBranchStatus("muplus0_L0DiMuonDecision_TOS", 0);
   Data->SetBranchStatus("muplus0_L0MuonDecision_Dec", 0);
   Data->SetBranchStatus("muplus0_L0MuonDecision_TIS", 0);
   Data->SetBranchStatus("muplus0_L0MuonDecision_TOS", 0);
   Data->SetBranchStatus("muplus0_L0MuonHighDecision_Dec", 0);
   Data->SetBranchStatus("muplus0_L0MuonHighDecision_TIS", 0);
   Data->SetBranchStatus("muplus0_L0MuonHighDecision_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt1DiMuonHighMassDecision_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt1DiMuonHighMassDecision_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt1DiMuonHighMassDecision_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt1DiMuonLowMassDecision_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt1DiMuonLowMassDecision_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt1DiMuonLowMassDecision_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt1SingleMuonHighPTDecision_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt1SingleMuonHighPTDecision_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt1SingleMuonHighPTDecision_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt1TrackMuonDecision_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt1TrackMuonDecision_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt1TrackMuonDecision_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt1TrackAllL0Decision_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt1TrackAllL0Decision_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt1TrackAllL0Decision_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt2CharmSemilep3bodyD2PiMuMuDecision_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt2CharmSemilep3bodyD2PiMuMuDecision_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt2CharmSemilep3bodyD2PiMuMuSSDecision_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt2CharmSemilep3bodyD2KMuMuDecision_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt2CharmSemilep3bodyD2KMuMuDecision_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt2CharmSemilep3bodyD2KMuMuDecision_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt2CharmSemilep3bodyD2KMuMuSSDecision_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDY1Decision_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDY1Decision_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDY1Decision_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDY2Decision_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDY2Decision_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDY2Decision_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDY3Decision_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDY3Decision_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDY3Decision_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDY4Decision_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDY4Decision_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDY4Decision_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDetachedDecision_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDetachedDecision_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDetachedDecision_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDetachedHeavyDecision_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDetachedHeavyDecision_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDetachedHeavyDecision_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonBDecision_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonBDecision_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonBDecision_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonLowMassDecision_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonLowMassDecision_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonLowMassDecision_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDecision_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDecision_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt2DiMuonDecision_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt2CharmSemilepD2HMuMuDecision_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt2CharmSemilepD2HMuMuDecision_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt2CharmSemilepD2HMuMuDecision_TOS", 0);
   Data->SetBranchStatus("muplus0_Hlt2CharmSemilepD2HMuMuWideMassDecision_Dec", 0);
   Data->SetBranchStatus("muplus0_Hlt2CharmSemilepD2HMuMuWideMassDecision_TIS", 0);
   Data->SetBranchStatus("muplus0_Hlt2CharmSemilepD2HMuMuWideMassDecision_TOS", 0);
   Data->SetBranchStatus("muplus0_TRACK_Type", 0);
   Data->SetBranchStatus("muplus0_TRACK_Key", 0);
   //Data->SetBranchStatus("muplus0_TRACK_CHI2NDOF", 0);
   Data->SetBranchStatus("muplus0_TRACK_PCHI2", 0);
   Data->SetBranchStatus("muplus0_TRACK_MatchCHI2", 0);
   //Data->SetBranchStatus("muplus0_TRACK_GhostProb", 0);
   Data->SetBranchStatus("muplus0_TRACK_CloneDist", 0);
   Data->SetBranchStatus("muplus0_TRACK_Likelihood", 0);
   Data->SetBranchStatus("muplus0_cpx_0.50", 0);
   Data->SetBranchStatus("muplus0_cpy_0.50", 0);
   Data->SetBranchStatus("muplus0_cpz_0.50", 0);
   Data->SetBranchStatus("muplus0_cpt_0.50", 0);
   Data->SetBranchStatus("muplus0_cp_0.50", 0);
   Data->SetBranchStatus("muplus0_cmult_0.50", 0);
   Data->SetBranchStatus("muplus0_cpx_0.60", 0);
   Data->SetBranchStatus("muplus0_cpy_0.60", 0);
   Data->SetBranchStatus("muplus0_cpz_0.60", 0);
   Data->SetBranchStatus("muplus0_cpt_0.60", 0);
   Data->SetBranchStatus("muplus0_cp_0.60", 0);
   Data->SetBranchStatus("muplus0_cmult_0.60", 0);
   Data->SetBranchStatus("muplus0_cpx_0.70", 0);
   Data->SetBranchStatus("muplus0_cpy_0.70", 0);
   Data->SetBranchStatus("muplus0_cpz_0.70", 0);
   Data->SetBranchStatus("muplus0_cpt_0.70", 0);
   Data->SetBranchStatus("muplus0_cp_0.70", 0);
   Data->SetBranchStatus("muplus0_cmult_0.70", 0);
   Data->SetBranchStatus("muplus0_cpx_0.80", 0);
   Data->SetBranchStatus("muplus0_cpy_0.80", 0);
   Data->SetBranchStatus("muplus0_cpz_0.80", 0);
   Data->SetBranchStatus("muplus0_cpt_0.80", 0);
   Data->SetBranchStatus("muplus0_cp_0.80", 0);
   Data->SetBranchStatus("muplus0_cmult_0.80", 0);
   Data->SetBranchStatus("muplus0_cpx_0.90", 0);
   Data->SetBranchStatus("muplus0_cpy_0.90", 0);
   Data->SetBranchStatus("muplus0_cpz_0.90", 0);
   Data->SetBranchStatus("muplus0_cpt_0.90", 0);
   Data->SetBranchStatus("muplus0_cp_0.90", 0);
   Data->SetBranchStatus("muplus0_cmult_0.90", 0);
   Data->SetBranchStatus("muplus0_cpx_1.00", 0);
   Data->SetBranchStatus("muplus0_cpy_1.00", 0);
   Data->SetBranchStatus("muplus0_cpz_1.00", 0);
   Data->SetBranchStatus("muplus0_cpt_1.00", 0);
   Data->SetBranchStatus("muplus0_cp_1.00", 0);
   Data->SetBranchStatus("muplus0_cmult_1.00", 0);
   //Data->SetBranchStatus("nCandidate", 0);
   //Data->SetBranchStatus("totCandidates", 0);
   //Data->SetBranchStatus("EventInSequence", 0);
   //Data->SetBranchStatus("runNumber", 0);
   //Data->SetBranchStatus("eventNumber", 0);
   Data->SetBranchStatus("BCID", 0);
   Data->SetBranchStatus("BCType", 0);
   Data->SetBranchStatus("OdinTCK", 0);
   Data->SetBranchStatus("L0DUTCK", 0);
   Data->SetBranchStatus("HLTTCK", 0);
   Data->SetBranchStatus("GpsTime", 0);
   //Data->SetBranchStatus("Polarity", 0);
   //Data->SetBranchStatus("nPV", 0);
   Data->SetBranchStatus("PVX", 0);
   Data->SetBranchStatus("PVY", 0);
   Data->SetBranchStatus("PVZ", 0);
   Data->SetBranchStatus("PVXERR", 0);
   Data->SetBranchStatus("PVYERR", 0);
   Data->SetBranchStatus("PVZERR", 0);
   Data->SetBranchStatus("PVCHI2", 0);
   Data->SetBranchStatus("PVNDOF", 0);
   Data->SetBranchStatus("PVNTRACKS", 0);
   //Data->SetBranchStatus("nPVs", 0);
   //Data->SetBranchStatus("nTracks", 0);
   Data->SetBranchStatus("nLongTracks", 0);
   Data->SetBranchStatus("nDownstreamTracks", 0);
   Data->SetBranchStatus("nUpstreamTracks", 0);
   Data->SetBranchStatus("nVeloTracks", 0);
   Data->SetBranchStatus("nTTracks", 0);
   Data->SetBranchStatus("nBackTracks", 0);
   Data->SetBranchStatus("nRich1Hits", 0);
   Data->SetBranchStatus("nRich2Hits", 0);
   Data->SetBranchStatus("nVeloClusters", 0);
   Data->SetBranchStatus("nITClusters", 0);
   Data->SetBranchStatus("nTTClusters", 0);
   Data->SetBranchStatus("nOTClusters", 0);
   //Data->SetBranchStatus("nSPDHits", 0);
   Data->SetBranchStatus("nMuonCoordsS0", 0);
   Data->SetBranchStatus("nMuonCoordsS1", 0);
   Data->SetBranchStatus("nMuonCoordsS2", 0);
   Data->SetBranchStatus("nMuonCoordsS3", 0);
   Data->SetBranchStatus("nMuonCoordsS4", 0);
   Data->SetBranchStatus("nMuonTracks", 0);
   Data->SetBranchStatus("L0Global", 0);
   Data->SetBranchStatus("Hlt1Global", 0);
   Data->SetBranchStatus("Hlt2Global", 0);
	 
	
	
   // TString cut = "(B_s0_Hlt1Phys_TIS == 1 || B_s0_Hlt1DiMuonHighMassDecision_TOS == 1 || B_s0_Hlt1SingleMuonNoIPDecision_TOS == 1 || B_s0_Hlt1SingleMuonHighPTDecision_TOS == 1) && ( B_s0_Hlt2Phys_TIS == 1 || B_s0_Hlt2DiMuonBDecision_TOS == 1 || B_s0_Hlt2DiMuonDY2Decision_TOS == 1 ) && B_s0_TAU > -0.005";



  // Write to a new file
  TFile *New_File = new TFile(sOutput,"recreate");
  New_File->mkdir(sFolder);
  New_File->cd(sFolder); 
  TTree *New_Tree = Data->CopyTree("");//, "", 1000);
  New_Tree->AutoSave();
  New_File->Close();

} 

	
