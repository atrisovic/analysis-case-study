#######################################################################
from os import environ
import GaudiKernel.SystemOfUnits as Units

from Gaudi.Configuration import *

FileCatalog().Catalogs = [ "xmlcatalog_file:/afs/cern.ch/work/a/atrisovi/analysis-case-study/Step1_getdata/MagDown-12/myCatalog.xml" ]

from Configurables import DaVinci

# Stripping 21r1
KMuMuOSlocation = 'Phys/D2XMuMu_KOSLine/Particles' 
KMuMuSSlocation = 'Phys/D2XMuMu_KSSLine/Particles'
PiMuMuOSlocation = 'Phys/D2XMuMu_PiOSLine/Particles'
PiMuMuSSlocation = 'Phys/D2XMuMu_PiSSLine/Particles'

# Source: http://lhcb-release-area.web.cern.ch/LHCb-release-area/DOC/stripping/config/stripping21r1/index.html#charm

rootInTes = "/Event/Charm"

#----------------------------------------
# 1) The code that makes the ntuple
#----------------------------------------

# These are various tupletools that fill the ntuple with different information
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

tuple.addTool(TupleToolTISTOS("TupleToolTISTOS"))
tuple.TupleToolTISTOS.OutputLevel = 3
tuple.TupleToolTISTOS.VerboseL0 = 1
tuple.TupleToolTISTOS.VerboseHlt1 = 1
tuple.TupleToolTISTOS.VerboseHlt2 = 1
tuple.TupleToolTISTOS.TriggerList=[

# the list of triggers 
# page 51 (and 97 for e)

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

# "[D+ -> K+ mu+ mu-]cc"
# "[D- -> K+ mu- mu-]cc"

D2KmumuOSTuple = tuple.clone("D2KmumuOSTuple") #updated
D2KmumuOSTuple.Inputs = [ KMuMuOSlocation ] #updated
D2KmumuOSTuple.Decay = "[D+ -> ^K+ ^mu+ ^mu-]CC" #updated
D2KmumuOSTuple.Branches = { "D" :  "[D+ -> K+ mu+ mu-]CC"} #updated
# Instead of D+  
D2KmumuOSTuple.addTool(TupleToolDecay, name="D+") #updated
D2KmumuOSTuple.P2PVInputLocations = ["Phys/D2XMuMu_KOSLine/Particle2VertexRelations"]

D2KmumuSSTuple = tuple.clone("D2KmumuSSTuple") #updated
D2KmumuSSTuple.Inputs = [ KMuMuSSlocation ] #updated
D2KmumuSSTuple.Decay = "[D- -> ^K+ ^mu- ^mu-]CC" #updated
D2KmumuSSTuple.Branches = { "D" :  "[D- -> K+ mu- mu-]CC"} #updated
D2KmumuSSTuple.addTool(TupleToolDecay, name="D-") #updated
D2KmumuSSTuple.P2PVInputLocations = ["Phys/D2XMuMu_KSSLine/Particle2VertexRelations"]


D2PimumuOSTuple = tuple.clone("D2PimumuOSTuple") #updated
D2PimumuOSTuple.Inputs = [ PiMuMuOSlocation ] #updated
D2PimumuOSTuple.Decay = "[D+ -> ^pi+ ^mu+ ^mu-]CC" #updated
D2PimumuOSTuple.Branches = { "D" :  "[D+ -> pi+ mu+ mu-]CC"} #updated
# Instead of D+  
D2PimumuOSTuple.addTool(TupleToolDecay, name="D+") #updated
D2PimumuOSTuple.P2PVInputLocations = ["Phys/D2XMuMu_PiOSLine/Particle2VertexRelations"]

D2PimumuSSTuple = tuple.clone("D2PimumuSSTuple") #updated
D2PimumuSSTuple.Inputs = [ PiMuMuSSlocation ] #updated
D2PimumuSSTuple.Decay = "[D- -> ^pi+ ^mu- ^mu-]CC" #updated
D2PimumuSSTuple.Branches = { "D" :  "[D- -> pi+ mu- mu-]CC"} #updated
D2PimumuSSTuple.addTool(TupleToolDecay, name="D-") #updated
D2PimumuSSTuple.P2PVInputLocations = ["Phys/D2XMuMu_PiSSLine/Particle2VertexRelations"]


#----------------------------------------                                                                
# 2) Run within DaVinci                                                 
#----------------------------------------

magPol = "Down" 
year = "12" 

DaVinci().RootInTES = rootInTes
DaVinci().TupleFile     = "Stripping21_D2HMuMu"+year+"_Mag"+magPol+"_NTuples.root" 

DaVinci().EvtMax                 = -1 
DaVinci().DataType               = "20"+year 
DaVinci().Simulation             = False 

DaVinci().UserAlgorithms = [ D2KmumuOSTuple, D2KmumuSSTuple, D2PimumuOSTuple, D2PimumuSSTuple ]  

# All OK bellow this point
DaVinci().InputType = "MDST" 

# Database tags
if year == "12":
    DaVinci().DDDBtag   = 'dddb-20130929-1' 
#12 Mag Down Strip 21 dddb-20130929-1
#12 Mag Up   Strip 21 dddb-20130929-1
if year == "11":
#11 Mag Down Strip 21
    DaVinci().DDDBtag   = 'dddb-20130929'
#11 Mag Up Strip 21 dddb-20130929

#Always the same:
#cond-20141107 
#cond-20141107 
#cond-20141107
#cond-20141107

DaVinci().CondDBtag = 'cond-20141107'
