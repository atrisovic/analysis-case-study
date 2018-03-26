# Reducing the size of the ntuples

Once the ntuples are obtained from the Grid, their size is too large for efficient data processing. In this stage, we are reducing the size of the ntuples by excluding some of the unnecessary features of the events.

# Input data

There are four input ntuples, each of which describes different detector conditions. 

| Year \ Magnet | Up                                           | Down                                           |
|---------------|----------------------------------------------|------------------------------------------------|
| 2011          | `Stripping21r1_D2HMuMu11_MagUp_NTuples.root` | `Stripping21r1_D2HMuMu11_MagDown_NTuples.root` |
| 2012          | `Stripping21_D2HMuMu12_MagUp_NTuples.root`   | `Stripping21_D2HMuMu12_MagDown_NTuples.root`   |


# Instructions

## Step 1. Initial cuts
To run scripts start ROOT by typing: `root`

Then:

```
root [0] .L Reduce_2PiMuMuOS_MagDown-11.c
root [1] Main("../../data/Stripping21r1_D2HMuMu11_MagDown_NTuples.root", "D2PimumuOSTuple", "DecayTree")
```
The same process needs to be done on the other ntuples using the other three scripts.

## Step 2. Merging

The list of output files are:
- `D2hMuMu11_MagU_2PiMuMuOS_NTuple_Reduced.root`
- `D2hMuMu12_MagU_2PiMuMuOS_NTuple_Reduced.root`
- `D2hMuMu11_MagD_2PiMuMuOS_NTuple_Reduced.root`
- `D2hMuMu12_MagD_2PiMuMuOS_NTuple_Reduced.root`

To simplify the further steps, we can merge these ntuples into one by running the command:

```
hadd -f D2PiMuMuOS.root D2hMuMu12_MagD_2PiMuMuOS_NTuple_Reduced.root D2hMuMu12_MagU_2PiMuMuOS_NTuple_Reduced.root D2hMuMu11_MagD_2PiMuMuOS_NTuple_Reduced.root D2hMuMu11_MagU_2PiMuMuOS_NTuple_Reduced.root
```

Finally, one output file representing real data should be: `D2PiMuMuOS.root`
