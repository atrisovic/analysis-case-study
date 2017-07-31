#!/bin/bash

# Exit if any command returns a non-zero exit code
set -e

kinit -k -t user.keytab

# Train MVA
( cd ..; bin/run trainmva )

# Add BDT
( cd ..; bin/run addbdt )

# Optimise n-tuples
( cd ..; bin/run optimisentp )

# Model fixing
( cd ..; bin/run modelfixing )

# Fit
( cd ..; bin/run osmassfit )

echo "Completed successfully"

