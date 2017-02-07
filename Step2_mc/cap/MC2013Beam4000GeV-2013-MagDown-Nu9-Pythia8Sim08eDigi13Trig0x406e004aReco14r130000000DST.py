#-- GAUDI jobOptions generated on Tue Feb  7 17:17:16 2017
#-- Contains event types : 
#--   30000000 - 1 files - 9562 events - 3.73 GBytes


#--  Extra information about the data processing phases:


#--  Processing Pass Step-124620 

#--  StepId : 124620 
#--  StepName : Digi13 with G4 dE/dx 
#--  ApplicationName : Boole 
#--  ApplicationVersion : v26r3 
#--  OptionFiles : $APPCONFIGOPTS/Boole/Default.py;$APPCONFIGOPTS/Boole/DataType-2012.py;$APPCONFIGOPTS/Boole/Boole-SiG4EnergyDeposit.py;$APPCONFIGOPTS/Persistency/Compression-ZLIB-1.py 
#--  DDDB : fromPreviousStep 
#--  CONDDB : fromPreviousStep 
#--  ExtraPackages : AppConfig.v3r164 
#--  Visible : Y 


#--  Processing Pass Step-125996 

#--  StepId : 125996 
#--  StepName : TCK-0x406e004a Flagged for Sim08 2013 pA 
#--  ApplicationName : Moore 
#--  ApplicationVersion : v14r12 
#--  OptionFiles : $APPCONFIGOPTS/Moore/MooreSimProductionForSeparateL0AppStep.py;$APPCONFIGOPTS/Conditions/TCK-0x406e004a.py;$APPCONFIGOPTS/Moore/DataType-2012.py;$APPCONFIGOPTS/Persistency/Compression-ZLIB-1.py 
#--  DDDB : fromPreviousStep 
#--  CONDDB : fromPreviousStep 
#--  ExtraPackages : AppConfig.v3r188 
#--  Visible : Y 


#--  Processing Pass Step-125997 

#--  StepId : 125997 
#--  StepName : Reco14r1 for MC pA without GECs 
#--  ApplicationName : Brunel 
#--  ApplicationVersion : v44r8p1 
#--  OptionFiles : $APPCONFIGOPTS/Brunel/DataType-2012.py;$APPCONFIGOPTS/Brunel/pA-GECs.py;$APPCONFIGOPTS/Brunel/MC-WithTruth.py;$APPCONFIGOPTS/Persistency/Compression-ZLIB-1.py 
#--  DDDB : fromPreviousStep 
#--  CONDDB : fromPreviousStep 
#--  ExtraPackages : AppConfig.v3r188;SQLDDDB.v7r9 
#--  Visible : Y 


#--  Processing Pass Step-126115 

#--  StepId : 126115 
#--  StepName : Merge14 for Sim DST (after Brunel!) 
#--  ApplicationName : LHCb 
#--  ApplicationVersion : v36r4 
#--  OptionFiles : $APPCONFIGOPTS/Merging/CopyDST.py 
#--  DDDB : None 
#--  CONDDB : None 
#--  ExtraPackages : AppConfig.v3r188 
#--  Visible : N 


#--  Processing Pass Step-126114 

#--  StepId : 126114 
#--  StepName : L0 emulation - TCK 004a for pIons 
#--  ApplicationName : Moore 
#--  ApplicationVersion : v20r4 
#--  OptionFiles : $APPCONFIGOPTS/L0App/L0AppSimProduction.py;$APPCONFIGOPTS/L0App/L0AppTCK-0x004a.py;$APPCONFIGOPTS/L0App/DataType-2012.py 
#--  DDDB : fromPreviousStep 
#--  CONDDB : fromPreviousStep 
#--  ExtraPackages : AppConfig.v3r190 
#--  Visible : N 


#--  Processing Pass Step-126314 

#--  StepId : 126314 
#--  StepName : Sim08e - 2013 - MD - for pA  
#--  ApplicationName : Gauss 
#--  ApplicationVersion : v45r7 
#--  OptionFiles : $APPCONFIGOPTS/Gauss/Sim08-Beam4000GeV-md100-2013-nu9-pA.py;$DECFILESROOT/options/@{eventType}.py;$LBPYTHIA8ROOT/options/Pythia8.py;$APPCONFIGOPTS/Gauss/G4PL_FTFP_BERT_EmNoCuts.py;$APPCONFIGOPTS/Persistency/Compression-ZLIB-1.py 
#--  DDDB : dddb-20130929-1 
#--  CONDDB : sim-20131219-vc-md100 
#--  ExtraPackages : AppConfig.v3r193;DecFiles.v27r19 
#--  Visible : Y 

from Gaudi.Configuration import * 
from GaudiConf import IOHelper
IOHelper('ROOT').inputFiles(['LFN:/lhcb/MC/2013/DST/00035866/0000/00035866_00000001_1.dst'
], clear=True)
