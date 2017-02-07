#-- GAUDI jobOptions generated on Tue Feb  7 17:11:16 2017
#-- Contains event types : 
#--   24142001 - 1 files - 18512 events - 3.54 GBytes


#--  Extra information about the data processing phases:


#--  Processing Pass Step-129267 

#--  StepId : 129267 
#--  StepName : Stripping24-NoPrescalingFlagged for Sim09 - pp at 13 TeV 
#--  ApplicationName : DaVinci 
#--  ApplicationVersion : v38r1p1 
#--  OptionFiles : $APPCONFIGOPTS/DaVinci/DV-Stripping24-Stripping-MC-NoPrescaling.py;$APPCONFIGOPTS/DaVinci/DataType-2015.py;$APPCONFIGOPTS/DaVinci/InputType-DST.py 
#--  DDDB : fromPreviousStep 
#--  CONDDB : fromPreviousStep 
#--  ExtraPackages : AppConfig.v3r262 
#--  Visible : Y 


#--  Processing Pass Step-129522 

#--  StepId : 129522 
#--  StepName : Turbo lines (MC), Turbo 2015 reprocessing 
#--  ApplicationName : DaVinci 
#--  ApplicationVersion : v40r1p3 
#--  OptionFiles : $APPCONFIGOPTS/Turbo/Tesla_AllHlt2Lines_v10r0_0x00fa0051.py;$APPCONFIGOPTS/Turbo/Tesla_Simulation_2015_PVHLT2.py 
#--  DDDB : fromPreviousStep 
#--  CONDDB : fromPreviousStep 
#--  ExtraPackages : AppConfig.v3r232;TurboStreamProd.v2r0 
#--  Visible : Y 


#--  Processing Pass Step-129664 

#--  StepId : 129664 
#--  StepName : Reco15a for MC 2015 
#--  ApplicationName : Brunel 
#--  ApplicationVersion : v48r2 
#--  OptionFiles : $APPCONFIGOPTS/Brunel/DataType-2015.py;$APPCONFIGOPTS/Brunel/MC-WithTruth.py;$APPCONFIGOPTS/Persistency/Compression-ZLIB-1.py 
#--  DDDB : fromPreviousStep 
#--  CONDDB : fromPreviousStep 
#--  ExtraPackages : AppConfig.v3r277;SQLDDDB.v7r10 
#--  Visible : Y 

from Gaudi.Configuration import * 
from GaudiConf import IOHelper
IOHelper('ROOT').inputFiles(['LFN:/lhcb/MC/2015/ALLSTREAMS.DST/00052922/0000/00052922_00000001_3.AllStreams.dst'
], clear=True)
