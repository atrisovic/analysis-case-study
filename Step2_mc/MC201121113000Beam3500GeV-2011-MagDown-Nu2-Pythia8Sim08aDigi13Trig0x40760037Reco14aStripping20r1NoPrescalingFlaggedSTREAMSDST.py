#-- GAUDI jobOptions generated on Wed Aug 12 15:39:21 2015
#-- Contains event types : 
#--   21113000 - 32 files - 536999 events - 99.24 GBytes


#--  Extra information about the data processing phases:


#--  Processing Pass Step-124914 

#--  StepId : 124914 
#--  StepName : TCK-0x40760037 Flagged for Sim08 2011 
#--  ApplicationName : Moore 
#--  ApplicationVersion : v12r8g3 
#--  OptionFiles : $APPCONFIGOPTS/Moore/MooreSimProductionWithL0Emulation.py;$APPCONFIGOPTS/Conditions/TCK-0x40760037.py;$APPCONFIGOPTS/Moore/DataType-2011.py;$APPCONFIGOPTS/L0/L0TCK-0x0037.py 
#--  DDDB : fromPreviousStep 
#--  CONDDB : fromPreviousStep 
#--  ExtraPackages : AppConfig.v3r171 
#--  Visible : Y 


#--  Processing Pass Step-124974 

#--  StepId : 124974 
#--  StepName : Reco14a for MC - 2011 
#--  ApplicationName : Brunel 
#--  ApplicationVersion : v43r2p7 
#--  OptionFiles : $APPCONFIGOPTS/Brunel/DataType-2011.py;$APPCONFIGOPTS/Brunel/MC-WithTruth.py;$APPCONFIGOPTS/Persistency/Compression-ZLIB-1.py 
#--  DDDB : fromPreviousStep 
#--  CONDDB : fromPreviousStep 
#--  ExtraPackages : AppConfig.v3r171 
#--  Visible : Y 


#--  Processing Pass Step-124915 

#--  StepId : 124915 
#--  StepName : Digi13 with G4 dE/dx - 2011 
#--  ApplicationName : Boole 
#--  ApplicationVersion : v26r3 
#--  OptionFiles : $APPCONFIGOPTS/Boole/Default.py;$APPCONFIGOPTS/Boole/DataType-2011.py;$APPCONFIGOPTS/Boole/Boole-SiG4EnergyDeposit.py;$APPCONFIGOPTS/Persistency/Compression-ZLIB-1.py 
#--  DDDB : fromPreviousStep 
#--  CONDDB : fromPreviousStep 
#--  ExtraPackages : AppConfig.v3r171 
#--  Visible : Y 


#--  Processing Pass Step-124627 

#--  StepId : 124627 
#--  StepName : Sim08a - 2011 - MD - Pythia8 
#--  ApplicationName : Gauss 
#--  ApplicationVersion : v45r3 
#--  OptionFiles : $APPCONFIGOPTS/Gauss/Sim08-Beam3500GeV-md100-2011-nu2.py;$DECFILESROOT/options/@{eventType}.py;$LBPYTHIA8ROOT/options/Pythia8.py;$APPCONFIGOPTS/Gauss/G4PL_FTFP_BERT_EmNoCuts.py;$APPCONFIGOPTS/Persistency/Compression-ZLIB-1.py 
#--  DDDB : Sim08-20130503 
#--  CONDDB : Sim08-20130503-vc-md100 
#--  ExtraPackages : AppConfig.v3r171;DecFiles.v27r6 
#--  Visible : Y 


#--  Processing Pass Step-124631 

#--  StepId : 124631 
#--  StepName : Stripping20r1-NoPrescalingFlagged for Sim08 
#--  ApplicationName : DaVinci 
#--  ApplicationVersion : v32r2p3 
#--  OptionFiles : $APPCONFIGOPTS/DaVinci/DV-Stripping20r1-Stripping-MC-NoPrescaling.py;$APPCONFIGOPTS/DaVinci/DataType-2011.py;$APPCONFIGOPTS/DaVinci/InputType-DST.py;$APPCONFIGOPTS/Persistency/Compression-ZLIB-1.py 
#--  DDDB : fromPreviousStep 
#--  CONDDB : fromPreviousStep 
#--  ExtraPackages : AppConfig.v3r171 
#--  Visible : Y 

from Gaudi.Configuration import * 
from GaudiConf import IOHelper
IOHelper('ROOT').inputFiles(['LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000001_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000002_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000003_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000004_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000005_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000006_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000007_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000008_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000009_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000010_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000011_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000012_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000013_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000014_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000015_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000016_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000017_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000018_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000019_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000020_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000021_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000022_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000023_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000024_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000025_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000026_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000027_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000028_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000029_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000030_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000031_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024917/0000/00024917_00000032_1.allstreams.dst'
], clear=True)
