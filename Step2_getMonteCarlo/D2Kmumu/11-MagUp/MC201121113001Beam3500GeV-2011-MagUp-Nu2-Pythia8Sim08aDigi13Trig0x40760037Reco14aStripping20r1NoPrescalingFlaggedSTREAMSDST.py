#-- GAUDI jobOptions generated on Tue May 16 15:20:35 2017
#-- Contains event types : 
#--   21113001 - 30 files - 515998 events - 95.20 GBytes


#--  Extra information about the data processing phases:


#--  Processing Pass Step-124629 

#--  StepId : 124629 
#--  StepName : Merge14 for Sim08 
#--  ApplicationName : LHCb 
#--  ApplicationVersion : v35r4 
#--  OptionFiles : $APPCONFIGOPTS/Merging/CopyDST.py 
#--  DDDB : None 
#--  CONDDB : None 
#--  ExtraPackages : AppConfig.v3r164 
#--  Visible : N 

from Gaudi.Configuration import * 
from GaudiConf import IOHelper
IOHelper('ROOT').inputFiles([
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024915/0000/00024915_00000028_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024915/0000/00024915_00000029_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024915/0000/00024915_00000030_1.allstreams.dst',
'LFN:/lhcb/MC/2011/ALLSTREAMS.DST/00024915/0000/00024915_00000031_1.allstreams.dst'
], clear=True)
