# Multivariate analysis

In this study, we use multivariate analysis to distinguish signal events from the background in real data sample. The classifier learns from the Monte Carlo (training) sample, and applies this experience to classify unseen inputs of real data based on their similarity to the training sample.

The signal is defined by the cut in the signal region on Monte Carlo: `TCut mycuts = "D_MM>1840 && D_MM<1900";`

The background is defined from the data ouside the signal region: `TCut mycutb = "D_MM>2010";`

# Instructions

## Step 1. Training the Boosted Decision Tree (BDT)

Decision trees (DT) are one of the machine learning algorithms that is commonly used in selection of event candidates. In this step we are training the classifier.

```
source /cvmfs/lhcb.cern.ch/lib/LbLogin.sh
LbLogin -c x86_64-slc6-gcc48-opt
SetupProject DaVinci v41r4
root TMVAClassification.C
```

## Step 2. Evaluation of the training results (by eye)

These commands open the TMVA GUI.

```
root
TMVA::TMVAGui("TMVA_D2PiMuMu12_MagDown_withLogVars.root")
```

## Step 3. Adding the BDT response to the ntuple

Use the variables from the training found in TMVAClassification_BDT.weights.xml in `addBDT.C`

```
root
.L addBDT.C
addBDT()
```
