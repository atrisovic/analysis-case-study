from DecayTreeTuple.Configuration import *
from Configurables import DecayTreeTuple, LoKi__Hybrid__TupleTool, TupleToolDecay, TupleToolTrigger, TupleToolTISTOS, TupleToolSelResults, TupleToolTrackInfo, TupleToolEventInfo, TupleToolVtxIsoln, TupleToolTrackIsolation, TupleToolAngles, TupleToolRecoStats

# Stream and stripping line we want to use
stream = 'AllStreams'
line = 'D2XMuMu_KOSLine'

# Create an ntuple to capture D*+ decays from the StrippingLine line
dtt = DecayTreeTuple('D2KmumuOSTuple')
dtt.Inputs = ['/Event/{0}/Phys/{1}/Particles'.format(stream, line)]

dtt.Decay = '[D+ -> ^K+ ^mu+ ^mu-]CC'
dtt.ToolList += [
    "TupleToolGeometry"
    , "TupleToolKinematic"
    , "TupleToolPropertime"
    , "TupleToolPrimaries"
    , "TupleToolPid"
    , "TupleToolEventInfo"
    , "TupleToolTrackInfo"
    , "TupleToolTrigger"
    , "TupleToolAngles"
#    , "TupleToolVtxIsoln"
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


dtt.addBranches({"D" :  "[D+ -> K+ mu+ mu-]CC"} )

from Configurables import DaVinci

# Configure DaVinci
DaVinci().UserAlgorithms += [dtt]
DaVinci().InputType = 'DST'
DaVinci().TupleFile = 'MCDKmumu11-Down.root'
DaVinci().PrintFreq = 1000
DaVinci().DataType = '2011'
DaVinci().Simulation = True
# Only ask for luminosity information when not using simulated data
DaVinci().Lumi = DaVinci().Simulation
DaVinci().EvtMax = -1
DaVinci().CondDBtag = 'Sim08-20130503-vc-md100'
DaVinci().DDDBtag = 'Sim08-20130503'

#from GaudiConf import IOHelper

# Use the local input data
#IOHelper().inputFiles([
#    './00024919_00000001_1.allstreams.dst'
#], clear=True)
