magPol = "Up" 
year = "12"
fileName = "MC201221113000Beam4000GeV-2012-MagUp-Nu25-Pythia8Sim08aDigi13Trig0x409f0045Reco14Stripping20NoPrescalingFlaggedSTREAMSDST.py"

j = Job(name = "MC"+magPol+year+"MS" )
myApp = DaVinci(version ='v36r1p2', platform = "x86_64-slc6-gcc48-opt", user_release_area='workdir')
j.application = myApp
j.application.optsfile = [ File('DaVinci_Options.py') ]
j.inputdata = j.application.readInputData(fileName) 
j.splitter =  SplitByFiles ( filesPerJob = 2, maxFiles = -1 ) 
j.backend    = Dirac() 
j.outputfiles = [LocalFile("MC_D2PiMuMu"+year+"_Mag"+magPol+"_NTuples.root")] 
j.submit()

