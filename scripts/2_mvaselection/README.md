# TMVA step

Select the signal from the MC

`TCut mycuts = "D_MM>1840 && D_MM<1900";`

Select the background from the data

`TCut mycutb = "D_MM>2010";`

## Training the BDT

```
LbLogin -c x86_64-slc6-gcc48-opt
SetupProject DaVinci v41r4
root TMVAClassification.C
```

## Results of the training

```
root
TMVA::TMVAGui("TMVA_D2PiMuMu12_MagDown_withLogVars.root")
```

## Add BDT response to the ntuples 

Use the variables from the training found in TMVAClassification_BDT.weights.xml in `addBDT.C`

```
root
.L addBDT.C
addBDT()
```
