# Analysis case study

In this case study, we attempt to reproduce results from a physics analysis described [here.](https://cds.cern.ch/record/1543929) The goal is to evaluate how successful we can reproduce the analysis and to identify the challenges while doing so.

# Description

This study was done on decays of: 

<a href="https://www.codecogs.com/eqnedit.php?latex=$D_{(s)}^{&plus;}\rightarrow&space;\pi^{&plus;}&space;\mu^{&plus;}&space;\mu&space;^{-}$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$D_{(s)}^{&plus;}\rightarrow&space;\pi^{&plus;}&space;\mu^{&plus;}&space;\mu&space;^{-}$" title="$D_{(s)}^{+}\rightarrow \pi^{+} \mu^{+} \mu ^{-}$" /></a>

These decays are very rare, which makes their observation extremely challenging. The LHC produces a lot of charm particles (_D_), but it also produces a much greater number of other particles which can be mistaken for the signal. It is necessary to develop an effective strategy to identify the signal events in the large data sample. The event selection strategy is implemented in three stages: the trigger selection, stripping selection and the multivariate analysis.

In the [analysis note](https://cds.cern.ch/record/1543929), you can lean more about the theoretical background and motivation to study this decay.

# Data selection

We use the full *Run 1* dataset collected in proton-proton collisions. The data was collected in 2011 and 2012 at the centre-of-mass energy of 7 TeV and 8 TeV respectively.

Bookkeeping paths:
- `LHCb Collision 11 Beam3500GeV-VeloClosed-MagDownRealData Reco14 Stripping21r1 90000000 CHARMMDST`
- `LHCb Collision 12 Beam4000GeV-VeloClosed-MagDownRealData Reco14 Stripping21 90000000 CHARMMDST`

# Requirements

To reproduce this case study, you will need:
- CERN Virtual Machine File System (CVMFS)
- XQuartz (for MacOS)

Start off by setting up the computing environment from CVMFS with: 
`source  /cvmfs/lhcb.cern.ch/lib/LbLogin.sh`
The LHCb software (ROOT is included) will be necessary for each step of the analysis.

# Location

For the scripts to work out of the box, create folders `data` and `monte_carlo` where the datasets should be located. Currently the data may only be available to the CERN affiliates.

# Contributors 

Ana Trisovic, Alison Tully, Jordi Garra Tico, Xiaoli Chen
