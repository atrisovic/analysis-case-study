#!/bin/bash

DATALOC="\"../data\""
MCLOC="\"../montecarlo\""

# Exit if any command returns a non-zero exit code
set -e

kinit -k -t user.keytab

# Train MVA
root -q -b Step4_tmva/TMVAClassification.C\($MCLOC,$DATALOC\)

# Add BDT
root -q -b Step4_tmva/addBDT.C\($DATALOC\) 

# Optimise n-tuples
root -q Step4_tmva/Optimise.C\($DATALOC\)

# Model fixing
root -q Step5_fitting/ModelFixing.C

# Fit
root -q Step5_fitting/OSMassFit.C

echo "Completed successfully"

