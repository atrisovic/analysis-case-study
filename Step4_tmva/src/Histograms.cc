#include "TCanvas.h"
#include "TStyle.h"
#include "TH1.h"
#include "TH1F.h"
#include "TGaxis.h"
#include "TRandom.h"
#include "TFile.h"
#include "TTree.h"
#include "TBranch.h"
#include "TTreeReader.h"
#include "TTreeReaderValue.h"
#include "TTreeReaderArray.h"
#include "TString.h"
void Histograms()
{
  //variables used to store the data
  Int_t totalSize1, totalSize2 = 0;
  TString fnameMC = "MC_D2PiMuMu12_MagUp_NTuples_fin.root";
  TString fnameRD = "Ntuples/D2hMuMu12_MagU_2PiMuMuOS_NTuple_Reduced.root";
  TFile *f1 = TFile::Open( fnameMC );
  TFile *f2 = TFile::Open( fnameRD );

  if (f1 == 0) { printf("error with MC"); return; }
  if (f2 == 0) { printf("error with RD"); return; }

  TTreeReader myReader1 ("D2PimumuOSTuple/DecayTree", f1);
  TTreeReader myReader2 ("D2PimumuOSTuple/DecayTree", f2);
  TCanvas *myCan = new TCanvas();

  Int_t varNum=7;
  TString variables[] = { "D_PT", "D_DIRA_OWNPV", "D_IPCHI2_OWNPV", "piplus_PT", "piplus_P",  "D_P", "D_FDCHI2_OWNPV" };
  //myCan->Divide(1,varNum);
  TH1F* mcHist;
  Int_t it=6;
	//myCan -> cd (it);
	TTreeReaderArray<Double_t> pt1(myReader1, variables[it]);
	TTreeReaderArray<Double_t> pt2(myReader2, variables[it]);
	//D_IPCHI2_OWNPV mcHist = new TH1F ("","",150,0,40);
	// piplus_PT mcHist = new TH1F (variables[it],variables[it],150,0,11000);
	mcHist = new TH1F (variables[it],variables[it],150,0,150000);
        //mcHist -> SetMaximum(1.1);
	mcHist->SetLineColor(kBlue);
	while (myReader1.Next()) {
	for (int i =0; i< pt1.GetSize(); ++i){
		mcHist->Fill(pt1[i]);
		}
	}
	mcHist->DrawNormalized();
	mcHist->SetLineColor(kRed);
	while (myReader2.Next()) {
	for (int i =0; i< pt2.GetSize(); ++i){
		mcHist->Fill(pt2[i]);
		}
	}
	mcHist->DrawNormalized("SAME");
  

  //myCan->Update();
  //myCan->Print("h2D.pdf");

}
