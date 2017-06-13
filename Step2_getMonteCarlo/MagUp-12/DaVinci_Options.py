from os import environ
import GaudiKernel.SystemOfUnits as Units
from Gaudi.Configuration import *
from Configurables import DecayTreeTuple, LoKi__Hybrid__TupleTool, TupleToolDecay, TupleToolTrigger, TupleToolTISTOS, TupleToolSelResults, TupleToolTrackInfo, TupleToolEventInfo, TupleToolVtxIsoln, TupleToolTrackIsolation, TupleToolAngles, TupleToolRecoStats
from DecayTreeTuple.Configuration import *

PiMuMuOSlocation = 'Phys/D2XMuMu_PiOSLine/Particles'
rootInTes = "/Event/AllStreams"

stream = 'AllStreams'
line = 'D2XMuMu_PiOSLine'

dtt = DecayTreeTuple('D2PimumuOSTuple')
dtt.Inputs = ['/Event/{0}/Phys/{1}/Particles'.format(stream, line)]

from Gaudi.Configuration import FileCatalog
FileCatalog().Catalogs = [ "xmlcatalog_file:/myCatalog.xml" ]

#----------------------------------------
# 1) The code that makes the ntuple
#----------------------------------------

from Configurables import DecayTreeTuple, LoKi__Hybrid__TupleTool, TupleToolDecay, TupleToolTrigger, TupleToolTISTOS, TupleToolSelResults, TupleToolTrackInfo, TupleToolEventInfo, TupleToolVtxIsoln, TupleToolTrackIsolation, TupleToolAngles, TupleToolRecoStats

dtt = DecayTreeTuple()

dtt.ToolList += [
    "TupleToolGeometry"
    , "TupleToolKinematic"
    , "TupleToolPropertime"
    , "TupleToolPrimaries"
    , "TupleToolPid"
    , "TupleToolEventInfo"
    , "TupleToolTrackInfo"
    , "TupleToolTrigger"
    , "TupleToolTISTOS"
    , "TupleToolAngles"
    , "TupleToolVtxIsoln"
    , "TupleToolTrackIsolation"
    , "TupleToolTrigger"
    , "TupleToolTISTOS"
    , "TupleToolEventInfo"
    , "TupleToolRecoStats"
    
    ]

dtt.addTool(TupleToolTISTOS("TupleToolTISTOS"))
dtt.TupleToolTISTOS.OutputLevel = 3
dtt.TupleToolTISTOS.VerboseL0 = 1
dtt.TupleToolTISTOS.VerboseHlt1 = 1
dtt.TupleToolTISTOS.VerboseHlt2 = 1
dtt.TupleToolTISTOS.TriggerList=[
  'L0DiMuonDecision'
    ,'L0MuonDecision'
    ,'L0MuonHighDecision'
  
    ,'Hlt1DiMuonHighMassDecision'
    ,'Hlt1DiMuonLowMassDecision'
    ,'Hlt1SingleMuonHighPTDecision'
    ,'Hlt1TrackMuonDecision'
    ,'Hlt1TrackAllL0Decision'

    ,'Hlt2CharmSemilep3bodyD2PiMuMuDecision'
    ,'Hlt2CharmSemilep3bodyD2PiMuMuSSDecision'
    ,'Hlt2CharmSemilep3bodyD2KMuMuDecision'
    ,'Hlt2CharmSemilep3bodyD2KMuMuSSDecision'
    ,'Hlt2DiMuonDY1Decision'
    ,'Hlt2DiMuonDY2Decision'
    ,'Hlt2DiMuonDY3Decision'
    ,'Hlt2DiMuonDY4Decision'
    ,'Hlt2DiMuonDetachedDecision'
    ,'Hlt2DiMuonDetachedHeavyDecision'
    ,'Hlt2DiMuonBDecision'

    ,'Hlt2DiMuonLowMassDecision'
    ,'Hlt2DiMuonDecision'
    ,'Hlt2CharmSemilepD2HMuMuDecision'
    ,'Hlt2CharmSemilepD2HMuMuWideMassDecision'
  ]

LoKi_Vars = LoKi__Hybrid__TupleTool("LoKi_Vars")
LoKi_Vars.Variables =  {

    "LoKi_BPVVDCHI2"    : "BPVVDCHI2"    
    , "LoKi_BPVIPCHI2"    : "BPVIPCHI2()"
    , "LoKi_DOCA"         : "DOCA(1,2)"
    , "LoKi_BPVLTIME"     : "BPVLTIME()"

    }

dtt.Decay = "[D+ -> ^pi+ ^mu+ ^mu-]CC" 
dtt.addBranches({ "D" :  "[D+ -> pi+ mu+ mu-]CC"}) 

from Configurables import DaVinci

magPol = "Up" 
year = "12" 

DaVinci().UserAlgorithms += [dtt]
DaVinci().TupleFile = "MC_D2PiMuMu"+year+"_Mag"+magPol+"_NTuples.root" 
DaVinci().PrintFreq = 1000

DaVinci().EvtMax = 100 
DaVinci().DataType = "20"+year
DaVinci().Simulation = True 
DaVinci().Lumi = DaVinci().Simulation
DaVinci().InputType = "DST" 

DaVinci().DDDBtag   ='Sim08-20130503-1'
DaVinci().CondDBtag ='Sim08-20130503-1-vc-mu100'

