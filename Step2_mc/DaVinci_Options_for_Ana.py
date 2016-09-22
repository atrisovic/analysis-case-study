#######################################################################
from os import environ
import GaudiKernel.SystemOfUnits as Units

from Gaudi.Configuration import *

from Configurables import DaVinci

# ANA - these three lines are the locations of the candidates produced by three different stripping lines. You should modify these to include four(?) lines we discussed yesterday. You will need to find the exact name of the stripping lines from the stripping code.

# Stripping 21
PiMuMuOSlocation = 'Phys/D2XMuMu_PiOSLine/Particles'

# Stripping 21r1:

# Phys/D2XMuMu_KOSLine/Particles 
# Phys/D2XMuMu_KSSLine/Particles 

# probably not these lines:

# Phys/D2XMuMu_KPiLine/Particles 	
# Phys/D2XMuMu_KKPiPiLine/Particles
# Phys/D2XMuMu_2KPiLine/Particles 
# Phys/D2XMuMu_K2PiLine/Particles 
# Phys/D2XMuMu_K3PiLine/Particles 
# Phys/D2XMuMu_KKLine/Particles 

# Source: http://lhcb-release-area.web.cern.ch/LHCb-release-area/DOC/stripping/config/stripping21/index.html#charm


# ANA - this line (below) is needed if you are running over MicroDSTs, which you will be if you are looking at stripping 21. You will need to change it to something like rootInTes = "/Event/Charm" (I guess your data is tin the charm stream, but it will be obvious from the book-keeping. Ask me if you get stuck!
rootInTes = "/Event/AllStreams"

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

# Configure the TupleToolTISTOS (this controls how much trigger information goes into the ntuple)
tuple.addTool(TupleToolTISTOS("TupleToolTISTOS"))
tuple.TupleToolTISTOS.OutputLevel = 3
tuple.TupleToolTISTOS.VerboseL0 = 1
tuple.TupleToolTISTOS.VerboseHlt1 = 1
tuple.TupleToolTISTOS.VerboseHlt2 = 1
tuple.TupleToolTISTOS.TriggerList=[

# ANA - you need to change the list of triggers below to the ones that your decay modes come through. Look at Ed Greening's thesis - it should specify which triggers are important. They are all named with the format "<TriggerLevel><TriggerName>Decision" where TriggerLevel = L0, Hlt1, or Hlt2 and the TriggerName is the name of the specific trigger line e.g. "DiMuonLowMass" in "Hlt1DiMuonLowMassDecision"

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


# Tuple to get the LoKi versions of variables (leave this as it is, it's quite useful)
LoKi_Vars = LoKi__Hybrid__TupleTool("LoKi_Vars")
LoKi_Vars.Variables =  {

    "LoKi_BPVVDCHI2"    : "BPVVDCHI2"    
    , "LoKi_BPVIPCHI2"    : "BPVIPCHI2()"
    , "LoKi_DOCA"         : "DOCA(1,2)"
    , "LoKi_BPVLTIME"     : "BPVLTIME()"

    }


# ANA - these three chunks of code create the objects that make the ntuples. You will need to change each line to match your trigger line.

D2PimumuOSTuple = tuple.clone("D2PimumuOSTuple") 
D2PimumuOSTuple.Inputs = [ PiMuMuOSlocation ] 
D2PimumuOSTuple.Decay = "[D+ -> ^pi+ ^mu+ ^mu-]CC" 
D2PimumuOSTuple.Branches = { "D" :  "[D+ -> pi+ mu+ mu-]CC"} 
# Instead of D+  
D2PimumuOSTuple.addTool(TupleToolDecay, name="D+") 
D2PimumuOSTuple.P2PVInputLocations = ["Phys/D2XMuMu_PiOSLine/Particle2VertexRelations"]

#----------------------------------------                                                                
# 2) Run within DaVinci                                                 
#----------------------------------------

magPol = "Down" # This is the magnet polarity of the data - there will be magnet up and magnet down sample in the book-keeping. Change this when you run over different datasets
year = "11" # This specifies the year the data was taken in. It should match the data set you are running over.

DaVinci().RootInTES = rootInTes
DaVinci().TupleFile     = "MC_D2PiMuMu"+year+"_Mag"+magPol+"_NTuples.root" # This is the name of the ntuple file that gets produced. You should change this to something more appropriate. It automatically includes the year and magnet polarity in the name.

DaVinci().EvtMax                 = -1 # This specifies how many events to run over in each data file. Set this to a low number for quick tests (e.g. 1000). -1 means that you run over all the data.
DaVinci().DataType               = "20"+year # The year the data was taken
DaVinci().Simulation             = True # Whether or not this is simulated data. In this case, False is correct.

# updated Again
DaVinci().UserAlgorithms = [ D2PimumuOSTuple ]
DaVinci().InputType = "DST" 
DaVinci().Input = ["DATAFILE='PFN:/var/pcjm/r02/lhcb/cliff/DSTs/MC_Dp_pipmumu/00024917_00000001_1.allstreams.dst' TYP='POOL_ROOTTREE' OPT='READ'" ]

# Database tags
# ANA - these are the database tags. There are two, the DDDBtag and the CondDBtag. These must match the database tags used to create the data, otherwise you'll get the wrong results. When you save the list of datafiles as a .py file from the book-keeping the database tags are automatically saved at the top of the file so you can copy them from there. Make sure to check they match each time you change data files. They vary between mag up and mag down and years.
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

