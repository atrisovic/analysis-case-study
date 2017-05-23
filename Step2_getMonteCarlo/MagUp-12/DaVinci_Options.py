#######################################################################
from os import environ
import GaudiKernel.SystemOfUnits as Units

from Gaudi.Configuration import *

from Configurables import DaVinci

# Stripping 21
PiMuMuOSlocation = 'Phys/D2XMuMu_PiOSLine/Particles'

# Stripping 21r1:

# Phys/D2XMuMu_KOSLine/Particles 
# Phys/D2XMuMu_KSSLine/Particles 

# Source: http://lhcb-release-area.web.cern.ch/LHCb-release-area/DOC/stripping/config/stripping21/index.html#charm

rootInTes = "/Event/AllStreams"

#----------------------------------------
# 1) The code that makes the ntuple
#----------------------------------------

from Configurables import DecayTreeTuple, LoKi__Hybrid__TupleTool, TupleToolDecay, TupleToolTrigger, TupleToolTISTOS, TupleToolSelResults, TupleToolTrackInfo, TupleToolEventInfo, TupleToolVtxIsoln, TupleToolTrackIsolation, TupleToolAngles, TupleToolRecoStats

tuple = DecayTreeTuple()

tuple.ToolList += [

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

# Configure the TupleToolTISTOS (this controls how much trigger information goes into the ntuple)
tuple.addTool(TupleToolTISTOS("TupleToolTISTOS"))
tuple.TupleToolTISTOS.OutputLevel = 3
tuple.TupleToolTISTOS.VerboseL0 = 1
tuple.TupleToolTISTOS.VerboseHlt1 = 1
tuple.TupleToolTISTOS.VerboseHlt2 = 1
tuple.TupleToolTISTOS.TriggerList=[

#page 51 (and 97 for e)

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

D2PimumuOSTuple = tuple.clone("D2PimumuOSTuple") 
D2PimumuOSTuple.Inputs = [ PiMuMuOSlocation ] 
D2PimumuOSTuple.Decay = "[D+ -> ^pi+ ^mu+ ^mu-]CC" 
D2PimumuOSTuple.Branches = { "D" :  "[D+ -> pi+ mu+ mu-]CC"} 

D2PimumuOSTuple.addTool(TupleToolDecay, name="D+") 
D2PimumuOSTuple.P2PVInputLocations = ["Phys/D2XMuMu_PiOSLine/Particle2VertexRelations"]

#----------------------------------------                                                                
# 2) Run within DaVinci                                                 
#----------------------------------------

magPol = "Down" 
year = "11" 

DaVinci().RootInTES = rootInTes
DaVinci().TupleFile     = "MC_D2PiMuMu"+year+"_Mag"+magPol+"_NTuples.root" 

DaVinci().EvtMax                 = -1 
DaVinci().DataType               = "20"+year
DaVinci().Simulation             = True 

# updated Again
DaVinci().UserAlgorithms = [ D2PimumuOSTuple ]
DaVinci().InputType = "DST" 

# Database tags
if year == "12":
	if magPol == "Up":
		DaVinci().DDDBtag   ='Sim08-20130503-1'
                DaVinci().CondDBtag ='Sim08-20130503-1-vc-mu100'
	else:
		DaVinci().DDDBtag   ='Sim08-20130503-1'
                DaVinci().CondDBtag ='Sim08-20130503-1-vc-md100'
if year == "11":
	if magPol == "Up":
		DaVinci().DDDBtag   ='Sim08-20130503'
                DaVinci().CondDBtag ='Sim08-20130503-vc-mu100'
	else:
		DaVinci().DDDBtag   ='Sim08-20130503'
                DaVinci().CondDBtag ='Sim08-20130503-vc-md100'

