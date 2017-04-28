#-- GAUDI jobOptions generated on Tue Feb  7 17:15:14 2017
#-- Contains event types : 
#--   30000000 - 1 files - 121765 events - 5.71 GBytes


#--  Extra information about the data processing phases:


#--  Processing Pass Step-124834 

#--  StepId : 124834 
#--  StepName : Reco14a for MC 
#--  ApplicationName : Brunel 
#--  ApplicationVersion : v43r2p7 
#--  OptionFiles : $APPCONFIGOPTS/Brunel/DataType-2012.py;$APPCONFIGOPTS/Brunel/MC-WithTruth.py;$APPCONFIGOPTS/Persistency/Compression-ZLIB-1.py 
#--  DDDB : fromPreviousStep 
#--  CONDDB : fromPreviousStep 
#--  ExtraPackages : AppConfig.v3r164 
#--  Visible : Y 


#--  Processing Pass Step-126614 

#--  StepId : 126614 
#--  StepName : TCK-0x40a90046 Flagged for Sim08 2013 at 2.76 TeV 
#--  ApplicationName : Moore 
#--  ApplicationVersion : v14r11 
#--  OptionFiles : $APPCONFIGOPTS/Moore/MooreSimProductionForSeparateL0AppStep.py;$APPCONFIGOPTS/Conditions/TCK-0x40a90046.py;$APPCONFIGOPTS/Moore/DataType-2012.py 
#--  DDDB : fromPreviousStep 
#--  CONDDB : fromPreviousStep 
#--  ExtraPackages : AppConfig.v3r196 
#--  Visible : Y 


#--  Processing Pass Step-126615 

#--  StepId : 126615 
#--  StepName : Stripping20r2-NoPrescalingFlagged for Sim08 
#--  ApplicationName : DaVinci 
#--  ApplicationVersion : v32r2p8 
#--  OptionFiles : $APPCONFIGOPTS/DaVinci/DV-Stripping20r2-Stripping-MC-NoPrescaling.py;$APPCONFIGOPTS/DaVinci/DataType-2012.py;$APPCONFIGOPTS/DaVinci/InputType-DST.py;$APPCONFIGOPTS/Persistency/Compression-ZLIB-1.py 
#--  DDDB : fromPreviousStep 
#--  CONDDB : fromPreviousStep 
#--  ExtraPackages : AppConfig.v3r196 
#--  Visible : Y 

from Gaudi.Configuration import * 
from GaudiConf import IOHelper
IOHelper('ROOT').inputFiles(['LFN:/lhcb/MC/2013/ALLSTREAMS.DST/00037429/0000/00037429_00000002_3.AllStreams.dst'
], clear=True)
