#-- GAUDI jobOptions generated on Tue Feb  7 17:13:00 2017
#-- Contains event types : 
#--   14165053 - 1 files - 12987 events - 2.90 GBytes


#--  Extra information about the data processing phases:


#--  Processing Pass Step-130318 

#--  StepId : 130318 
#--  StepName : Turbo lines (MC), Turbo 2016 
#--  ApplicationName : DaVinci 
#--  ApplicationVersion : v41r2p1 
#--  OptionFiles : $APPCONFIGOPTS/Turbo/Tesla_2016_LinesFromStreams_MC.py;$APPCONFIGOPTS/Turbo/Tesla_PR_Truth_2016.py;$APPCONFIGOPTS/Turbo/Tesla_Simulation_2016.py 
#--  DDDB : fromPreviousStep 
#--  CONDDB : fromPreviousStep 
#--  ExtraPackages : AppConfig.v3r306;TurboStreamProd.v4r1p4 
#--  Visible : Y 


#--  Processing Pass Step-129806 

#--  StepId : 129806 
#--  StepName : Reco16 for MC 2016 
#--  ApplicationName : Brunel 
#--  ApplicationVersion : v50r2 
#--  OptionFiles : $APPCONFIGOPTS/Brunel/DataType-2016.py;$APPCONFIGOPTS/Brunel/MC-WithTruth.py;$APPCONFIGOPTS/Persistency/Compression-ZLIB-1.py 
#--  DDDB : fromPreviousStep 
#--  CONDDB : fromPreviousStep 
#--  ExtraPackages : AppConfig.v3r277;SQLDDDB.v7r10 
#--  Visible : Y 


#--  Processing Pass Step-129984 

#--  StepId : 129984 
#--  StepName : Stripping26-NoPrescalingFlagged for Sim09 - pp at 13 TeV (DST I/O) 
#--  ApplicationName : DaVinci 
#--  ApplicationVersion : v41r2 
#--  OptionFiles : $APPCONFIGOPTS/DaVinci/DV-Stripping26-Stripping-MC-NoPrescaling-DST.py;$APPCONFIGOPTS/DaVinci/DataType-2016.py;$APPCONFIGOPTS/DaVinci/InputType-DST.py 
#--  DDDB : fromPreviousStep 
#--  CONDDB : fromPreviousStep 
#--  ExtraPackages : AppConfig.v3r290 
#--  Visible : Y 

from Gaudi.Configuration import * 
from GaudiConf import IOHelper
IOHelper('ROOT').inputFiles(['LFN:/lhcb/MC/2016/ALLSTREAMS.DST/00056945/0000/00056945_00000001_3.AllStreams.dst'
], clear=True)
