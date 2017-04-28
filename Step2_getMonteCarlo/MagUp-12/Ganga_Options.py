myApplication = DaVinci(version='v37r1p2') 					
myApplication.user_release_area  = "/afs/cern.ch/work/a/atrisovi/analysis-case-study/Step2_mc/"		
myApplication.platform           = "x86_64-slc6-gcc48-opt"			

magPol = "Down" 
year = "11"

fileName = ""

if magPol == "Up":
    if year == "12":
        fileName = "MC201221113000Beam4000GeV-2012-MagUp-Nu25-Pythia8Sim08aDigi13Trig0x409f0045Reco14Stripping20NoPrescalingFlaggedSTREAMSDST.py"
    if year == "11":
        fileName = "MC201121113000Beam3500GeV-2011-MagUp-Nu2-Pythia8Sim08aDigi13Trig0x40760037Reco14aStripping20r1NoPrescalingFlaggedSTREAMSDST.py"

if magPol == "Down":
    if year == "12":
        fileName = "MC201221113000Beam4000GeV-2012-MagDown-Nu25-Pythia8Sim08aDigi13Trig0x409f0045Reco14Stripping20NoPrescalingFlaggedSTREAMSDST.py"
    if year == "11":
        fileName = "MC201121113000Beam3500GeV-2011-MagDown-Nu2-Pythia8Sim08aDigi13Trig0x40760037Reco14aStripping20r1NoPrescalingFlaggedSTREAMSDST.py"

j = Job( application = myApplication )
j.name = "MC"+magPol+year+"MS" 
j.application.optsfile = [ File ( '/afs/cern.ch/work/a/atrisovi/analysis-case-study/Step2_mc/Mag'+magPol"-"+year+'/Ganga_Options.py' ) ]

j.inputdata = j.application.readInputData('/afs/cern.ch/work/a/atrisovi/analysis-case-study/Step2_mc/Mag'+magPol"-"+year+'/'+fileName) 

j.splitter =  SplitByFiles ( filesPerJob = 30, maxFiles = -1 ) 
j.merger = None 
j.outputfiles = ["MC_D2PiMuMu"+year+"_Mag"+magPol+"_NTuples.root"] 
j.backend    = Dirac() 
j.backend.settings['CPUTime'] = 172800 
j.submit()
