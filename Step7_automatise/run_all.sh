#!/bin/bash

DATALOC="\"root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis-case-study/Step3_cuts\""
MCLOC="\"root://eoslhcb.cern.ch//eos/lhcb/user/a/atrisovi/analysis/Analysis/Step3_MC\""

# Exit if any command returns a non-zero exit code
set -e

kinit -k -t user.keytab

# Train MVA
root -q -b Step4_tmva/TMVAClassification1.C\($MCLOC,$DATALOC\)

# Add BDT
root -q -b Step4_tmva/addBDT1.C\($DATALOC\) 

# Optimise n-tuples
root -q Step4_tmva/Optimise1.C\($DATALOC\)

echo "Completed successfully"

