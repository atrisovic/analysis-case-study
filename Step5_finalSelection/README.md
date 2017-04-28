# Create scripts from ROOT

Run `root`

```
$ TFile *_file1 = TFile::Open("root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts/D2KMuMuSS.root")
   >> (TFile *) 0x35cbe30
$ _file1->ls()
   >> TNetXNGFile**		root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts/D2KMuMuSS.root	
   >> TNetXNGFile*		root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts/D2KMuMuSS.root	
   >>  KEY: TDirectoryFile	D2KmumuSSTuple;1	D2KmumuSSTuple
$ TTree* tr1 = (TTree*) _file1->Get("D2KmumuSSTuple/DecayTree")
   >> (TTree *) 0x35f0fc0
$ tr1->MakeClass("D2KmumuSS_class")
   >> Info in <TTreePlayer::MakeClass>: Files: D2KmumuSS_class.h and D2KmumuSS_class.C generated from TTree: DecayTree
```

