[![Build Status](https://travis-ci.org/atrisovic/analysis-case-study.svg?branch=master)](https://travis-ci.org/atrisovic/analysis-case-study)

# Analysis case study

Repository of code to reproduce a LHCb physics analysis on rare charm decays. 

# Decay modes

```
D+ -> pi+ mu+ mu-
```

# Data

`LHCb Collision 11 Beam3500GeV-VeloClosed-MagDownRealData Reco14 Stripping21r1 90000000 CHARMMDST`

`LHCb Collision 12 Beam4000GeV-VeloClosed-MagDownRealData Reco14 Stripping21 90000000 CHARMMDST`

# Instructions

Compile: `make`

Run all: `sh run_all.sh`

Run one stage: `bin/run addbdt`

# Documentation of the original analysis 

`https://cds.cern.ch/record/1952173?ln=en`

`https://cds.cern.ch/record/1421263/files/LHCb-ANA-2012-025.pdf`
