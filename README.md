# Analysis case study

Provide a case study that illustrates the main steps that LHCb analyses go through, with a focus on the requirements for an analysis preservation framework. Steps should include.

1. Data (and MC) Trigger 
2. Data (and MC) Reconstruction 
3. Data (and MC) Stripping 
4. User analysis processing (ntuple production). 
5. User analysis (ntuple processing). 

The analysis presented in this section will then be used as a working example in the following sections

# Decay modes

```
D+ -> K+ mu+ mu-
D- -> K+ mu- mu-
D+ -> pi+ mu+ mu-
D- -> pi+ mu- mu-
```

# Data

`LHCb Collision 11 Beam3500GeV-VeloClosed-MagDownRealData Reco14 Stripping21r1 90000000 CHARMMDST`

`LHCb Collision 12 Beam4000GeV-VeloClosed-MagDownRealData Reco14 Stripping21 90000000 CHARMMDST`

# Instructions

Compile: `make`

Run all: `sh run_all.sh`

Run one stage: `bin/run addbdt`

# Location

N-tuples are at:

`/var/pcjm/r02/lhcb/trisovic/Analysis` 

and

`/afs/cern.ch/work/a/atrisovi/public/Analysis`

# ANA Note

`https://cds.cern.ch/record/1421263/files/LHCb-ANA-2012-025.pdf`
