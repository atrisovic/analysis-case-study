# Running the scripts 

First: `root`

Then:
```
.L Reduce_2KMuMuOS_NTuple.c
Main("/path/Stripping21r1_D2HMuMu11_MagUp_NTuples.root", "D2KmumuOSTuple", "DecayTree")
```

## Output files

```
D2hMuMu11_MagU_2KMuMuOS_NTuple_Reduced.root
D2hMuMu11_MagU_2KMuMuSS_NTuple_Reduced.root
D2hMuMu11_MagU_2PiMuMuOS_NTuple_Reduced.root
D2hMuMu11_MagU_2PiMuMuSS_NTuple_Reduced.root

D2hMuMu12_MagU_2KMuMuOS_NTuple_Reduced.root
D2hMuMu12_MagU_2KMuMuSS_NTuple_Reduced.root
D2hMuMu12_MagU_2PiMuMuOS_NTuple_Reduced.root
D2hMuMu12_MagU_2PiMuMuSS_NTuple_Reduced.root

D2hMuMu11_MagD_2KMuMuOS_NTuple_Reduced.root
D2hMuMu11_MagD_2KMuMuSS_NTuple_Reduced.root
D2hMuMu11_MagD_2PiMuMuOS_NTuple_Reduced.root
D2hMuMu11_MagD_2PiMuMuSS_NTuple_Reduced.root

D2hMuMu12_MagD_2KMuMuOS_NTuple_Reduced.root
D2hMuMu12_MagD_2KMuMuSS_NTuple_Reduced.root
D2hMuMu12_MagD_2PiMuMuOS_NTuple_Reduced.root
D2hMuMu12_MagD_2PiMuMuSS_NTuple_Reduced.root

```

# Merge Magnet UPs and DOWNs and 2011 and 2012

```
hadd -f D2KMuMuOS.root D2hMuMu12_MagD_2KMuMuOS_NTuple_Reduced.root ../MagUp-12/D2hMuMu12_MagU_2KMuMuOS_NTuple_Reduced.root ../MagDown-11/D2hMuMu11_MagD_2KMuMuOS_NTuple_Reduced.root ../MagUp-11/D2hMuMu11_MagU_2KMuMuOS_NTuple_Reduced.root 

hadd -f D2KMuMuSS.root D2hMuMu12_MagD_2KMuMuSS_NTuple_Reduced.root ../MagUp-12/D2hMuMu12_MagU_2KMuMuSS_NTuple_Reduced.root ../MagDown-11/D2hMuMu11_MagD_2KMuMuSS_NTuple_Reduced.root ../MagUp-11/D2hMuMu11_MagU_2KMuMuSS_NTuple_Reduced.root 

hadd -f D2PiMuMuSS.root D2hMuMu12_MagD_2PiMuMuSS_NTuple_Reduced.root ../MagUp-12/D2hMuMu12_MagU_2PiMuMuSS_NTuple_Reduced.root ../MagDown-11/D2hMuMu11_MagD_2PiMuMuSS_NTuple_Reduced.root ../MagUp-11/D2hMuMu11_MagU_2PiMuMuSS_NTuple_Reduced.root

hadd -f D2PiMuMuOS.root D2hMuMu12_MagD_2PiMuMuOS_NTuple_Reduced.root ../MagUp-12/D2hMuMu12_MagU_2PiMuMuOS_NTuple_Reduced.root ../MagDown-11/D2hMuMu11_MagD_2PiMuMuOS_NTuple_Reduced.root ../MagUp-11/D2hMuMu11_MagU_2PiMuMuOS_NTuple_Reduced.root
```

## Output files

```
D2KMuMuOS.root
D2KMuMuSS.root
D2PiMuMuOS.root
D2PiMuMuSS.root
```

## Location

`/eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts`

