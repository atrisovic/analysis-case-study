myApplication = DaVinci(version='v37r1p2')                     
myApplication.user_release_area  = "/eos/lhcb/user/a/atrisovi/analysis-case-study/Step2_getMonteCarlo/D2PiPiPi/"   
myApplication.platform           = "x86_64-slc6-gcc48-opt"          

#filename1= "MC201221263022Beam4000GeV-2012-MagDown-Nu25-Pythia8Sim08aDigi13Trig0x409f0045Reco14aStripping20FilteredD2HHHHLTSTRIPDST.py"
#j1 = Job(application = myApplication)
#j1.name = "MC-Down-12-MS" 
#j1.application.optsfile = [ File ('DaVinci_Options.py')]
#j1.inputdata = j1.application.readInputData(filename1)
#j1.splitter =  SplitByFiles ( filesPerJob = 30, maxFiles = -1 ) 
#j1.merger = None 
#j1.outputfiles = ["MCDPipipi12-Down.root"] 
#j1.backend    = Dirac() 
#j1.backend.settings['CPUTime'] = 172800 
#j1.submit()


filename2 = "MC201221263022Beam4000GeV-2012-MagUp-Nu25-Pythia8Sim08aDigi13Trig0x409f0045Reco14aStripping20FilteredD2HHHHLTSTRIPDST.py"
j2 = Job(application = myApplication)
j2.name = "MC-Up-12-MS"
j2.application.optsfile = [ File ('DaVinci_Options.py')]
j2.inputdata = j2.application.readInputData(filename2)
j2.splitter =  SplitByFiles ( filesPerJob = 30, maxFiles = -1 ) 
j2.merger = None 
j2.outputfiles = ["MCDPipipi12-Up.root"] 
j2.backend    = Dirac() 
j2.backend.settings['CPUTime'] = 172800 
j2.submit()
