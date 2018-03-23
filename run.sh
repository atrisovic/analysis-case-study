#!/bin/bash

DATALOC="\"root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts\""
MCLOC="\"root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis/Analysis/Step3_MC\""

# Exit if any command returns a non-zero exit code
set -e

kinit -k -t user.keytab

root -q -b 1_preselection/Reduce_2PiMuMuOS_MagDown-11.c
root -q -b 1_preselection/Reduce_2PiMuMuOS_MagDown-12.c
root -q -b 1_preselection/Reduce_2PiMuMuOS_MagUp-11.c
root -q -b 1_preselection/Reduce_2PiMuMuOS_MagUp-12.c

# Merge

hadd -f D2PiMuMuOS.root D2hMuMu12_MagD_2PiMuMuOS_NTuple_Reduced.root D2hMuMu12_MagU_2PiMuMuOS_NTuple_Reduced.root D2hMuMu11_MagD_2PiMuMuOS_NTuple_Reduced.root D2hMuMu11_MagU_2PiMuMuOS_NTuple_Reduced.root

# Train MVA
root -q -b 2_mvaselection/TMVAClassification.C\($MCLOC,$DATALOC\)

# Add BDT
root -q -b  2_mvaselection/addBDT.C\($DATALOC\) 

# Optimise selection
root -q -b 2_mvaselection/Optimise.C\($DATALOC\)

# Model fixing

root -q -b 3_fitting/ModelFixing.C\($DATALOC\) 

# Mass fit

root -q -b 3_fitting/OSMassFit.C\($DATALOC\)

echo "Completed successfully"

