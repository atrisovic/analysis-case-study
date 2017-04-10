#!/bin/bash

# Exit if any command returns a non-zero exit code
set -e

root -q -b Step4_tmva/TMVAClassification1.C\(\"/eos/lhcb/user/a/atrisovi/analysis/Analysis/Step3_MC\",\"Step3_cuts\"\)

root -q -b Step4_tmva/addBDT1.C\(\"Step3_cuts\"\) 

echo "Hello world!"

