# Running the scripts 

First: `root`

Then:

```
root [0] .L Reduce_2PiMuMuOS_MagDown-11.c
root [1] Main("../../data/Stripping21r1_D2HMuMu11_MagDown_NTuples.root", "D2PimumuOSTuple", "DecayTree")
```

## Output files

```
D2hMuMu11_MagU_2PiMuMuOS_NTuple_Reduced.root
D2hMuMu12_MagU_2PiMuMuOS_NTuple_Reduced.root
D2hMuMu11_MagD_2PiMuMuOS_NTuple_Reduced.root
D2hMuMu12_MagD_2PiMuMuOS_NTuple_Reduced.root

```

# Merge Magnet UPs and DOWNs and 2011 and 2012

```
hadd -f D2PiMuMuOS.root D2hMuMu12_MagD_2PiMuMuOS_NTuple_Reduced.root D2hMuMu12_MagU_2PiMuMuOS_NTuple_Reduced.root D2hMuMu11_MagD_2PiMuMuOS_NTuple_Reduced.root D2hMuMu11_MagU_2PiMuMuOS_NTuple_Reduced.root
```

## Output files

```
D2PiMuMuOS.root
```


