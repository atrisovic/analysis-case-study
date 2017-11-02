#-- GAUDI jobOptions generated on Tue Feb  7 17:18:14 2017
#-- Contains event types : 
#--   30000000 - 1 files - 50000 events - 4.23 GBytes


#--  Extra information about the data processing phases:


#--  Processing Pass Step-12538 

#--  StepId : 12538 
#--  StepName : Sim01-Fix1-MU 
#--  ApplicationName : Gauss 
#--  ApplicationVersion : v39r2 
#--  OptionFiles : $APPCONFIGOPTS/Gauss/Beam3500GeV-mu100-MC10-fix1.py;$DECFILESROOT/options/@{eventType}.opts;$LBPYTHIAROOT/options/Pythia.py 
#--  DDDB : head-20101206 
#--  CONDDB : sim-20101210-vc-mu100 
#--  ExtraPackages : AppConfig.v3r96;DecFiles.v23r6;SQLDDDB.v5r44 
#--  Visible : Y 


#--  Processing Pass Step-12878 

#--  StepId : 12878 
#--  StepName : Reco08-For-Minimum-Bias-MU 
#--  ApplicationName : Brunel 
#--  ApplicationVersion : v37r8p5 
#--  OptionFiles : $APPCONFIGOPTS/Brunel/DataType-2010.py;$APPCONFIGOPTS/Brunel/MC-WithTruth.py;$APPCONFIGOPTS/Brunel/earlyData.py;$APPCONFIGOPTS/Brunel/WithVeloTrackAndLoosePV.py 
#--  DDDB : head-20101206 
#--  CONDDB : sim-20101210-vc-mu100 
#--  ExtraPackages : AppConfig.v3r96;SQLDDDB.v5r44 
#--  Visible : Y 


#--  Processing Pass Step-11818 

#--  StepId : 11818 
#--  StepName : Merge10 
#--  ApplicationName : LHCb 
#--  ApplicationVersion : v31r7 
#--  OptionFiles : $STDOPTS/PoolCopy.opts 
#--  DDDB : head-20101206 
#--  CONDDB : sim-20101210-vc-mu100 
#--  ExtraPackages : None 
#--  Visible : N 


#--  Processing Pass Step-11339 

#--  StepId : 11339 
#--  StepName : Trig0x002e002aFlagged 
#--  ApplicationName : Moore 
#--  ApplicationVersion : v10r2 
#--  OptionFiles : $APPCONFIGOPTS/Moore/MooreSimProduction.py;$APPCONFIGOPTS/Conditions/TCK-0x002e002a.py;$APPCONFIGOPTS/Moore/DataType-2010.py 
#--  DDDB : head-20101206 
#--  CONDDB : sim-20101210-vc-mu100 
#--  ExtraPackages : AppConfig.v3r89;SQLDDDB.v5r44 
#--  Visible : Y 


#--  Processing Pass Step-11338 

#--  StepId : 11338 
#--  StepName : DIGI10 
#--  ApplicationName : Boole 
#--  ApplicationVersion : v21r9 
#--  OptionFiles : $APPCONFIGOPTS/Boole/Default.py;$APPCONFIGOPTS/Boole/DataType-2010.py;$APPCONFIGOPTS/Boole/IgnoreFlatSpillover.py;$APPCONFIGOPTS/L0/L0TCK-0x002A.py 
#--  DDDB : head-20101206 
#--  CONDDB : sim-20101210-vc-mu100 
#--  ExtraPackages : AppConfig.v3r89;SQLDDDB.v5r44 
#--  Visible : N 

from Gaudi.Configuration import * 

EventSelector().Input   = [
"   DATAFILE='LFN:/lhcb/MC/MC10/DST/00010717/0000/00010717_00000001_1.dst' TYP='POOL_ROOTTREE' OPT='READ'"]
