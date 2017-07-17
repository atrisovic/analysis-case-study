#-- GAUDI jobOptions generated on Mon Jul 17 14:38:14 2017
#-- Contains event types : 
#--   21263022 - 1 files - 22543 events - 5.79 GBytes


#--  Extra information about the data processing phases:


#--  Processing Pass Step-125363 

#--  StepId : 125363 
#--  StepName : Merge14 for Sim08 2012 Charm Filtered Productions (Amato)  
#--  ApplicationName : DaVinci 
#--  ApplicationVersion : v33r5 
#--  OptionFiles : $APPCONFIGOPTS/Merging/DVMergeDST.py;$APPCONFIGOPTS/DaVinci/DataType-2012.py;$APPCONFIGOPTS/Merging/WriteFSR.py;$APPCONFIGOPTS/Merging/MergeFSR.py 
#--  DDDB : Sim08-20130503-1 
#--  CONDDB : Sim08-20130503-1-vc-mu100 
#--  ExtraPackages : AppConfig.v3r164 
#--  Visible : N 

from Gaudi.Configuration import * 
from GaudiConf import IOHelper
IOHelper('ROOT').inputFiles(['LFN:/lhcb/MC/2012/D2HHH.HLTSTRIP.DST/00027859/0000/00027859_00000001_1.d2hhh.hltstrip.dst'
], clear=True)
