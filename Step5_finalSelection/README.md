# Create scripts from ROOT

Run `root`

```
$ TFile *_file1 = TFile::Open("root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts/D2KMuMuSS.root")
(TFile *) 0x35cbe30
$ _file1->ls()
TNetXNGFile**		root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts/D2KMuMuSS.root	
TNetXNGFile*		root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts/D2KMuMuSS.root	
KEY: TDirectoryFile	D2KmumuSSTuple;1	D2KmumuSSTuple
$ TTree* tr1 = (TTree*) _file1->Get("D2KmumuSSTuple/DecayTree")
(TTree *) 0x35f0fc0
$ tr1->MakeClass("D2KmumuSS_class")
Info in <TTreePlayer::MakeClass>: Files: D2KmumuSS_class.h and D2KmumuSS_class.C generated from TTree: DecayTree
```

# Run ROOT scripts

First: `lb-run ROOT csh`

And then:

```
root [0] .L D2PimumuOS_class.C
root [1] D2PimumuOS_class t
file opened: /eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts/D2PiMuMuOS.root
TFile**     /eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts/D2PiMuMuOS.root    
TFile*     /eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts/D2PiMuMuOS.root    
KEY: TDirectoryFile   D2PimumuOSTuple;1   D2PimumuOSTuple
(D2PimumuOS_class &) @0x7f8610b9b000
root [2] t.Loop()
We created empty file with name: D2PimumuOS_final.root
```

Output:

```
[INFO] Run over 14394006 entries
[INFO] Number of events in the output tree: 225818
[INFO] Efficiency: 0.0156883
```
