myApplication = GaudiExec()
myApplication.platform           = "x86_64-slc6-gcc48-opt"			
myApplication = DaVinci(version='v37r1p2') 					
#myApplication.user_release_area  = "/eos/lhcb/user/a/atrisovi/analysis-case-study/Step2_getMonteCarlo/MagUp-12"		

#myApplication.directory = "."

magPol = "Up" 
year = "12"

fileName = "MC201221113000Beam4000GeV-2012-MagUp-Nu25-Pythia8Sim08aDigi13Trig0x409f0045Reco14Stripping20NoPrescalingFlaggedSTREAMSDST.py"

j = Job( application = myApplication )
j.name = "MC"+magPol+year+"MS" 
j.application.optsfile = [ 'DaVinci_Options.py' ]
j.inputdata = j.application.readInputData(fileName) 
j.splitter =  SplitByFiles ( filesPerJob = 30, maxFiles = -1 ) 
j.outputfiles = ["MC_D2PiMuMu"+year+"_Mag"+magPol+"_NTuples.root"] 
j.backend    = Dirac() 
j.backend.settings['CPUTime'] = 172800 
j.submit()
