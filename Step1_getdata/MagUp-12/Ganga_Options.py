myApplication = DaVinci(version='v36r1p2') 					
myApplication.user_release_area  = "/afs/cern.ch/work/a/atrisovi/analysis-case-study/Step1_getdata/MagUp-12"
myApplication.platform           = "x86_64-slc6-gcc48-opt"			

magPol = "Up" 
year = "12"
path = "/afs/cern.ch/work/a/atrisovi/analysis-case-study/Step1_getdata/MagUp-12/"
fileName = "LHCbCollision12Beam4000GeV-VeloClosed-MagUpRealDataReco14Stripping2190000000CHARMMDST.py"

j = Job( application = myApplication )
j.name = "S21"+magPol+year+"data" 
j.application.optsfile = [ File ( path+"DaVinci_Options.py" ) ]

j.inputdata = j.application.readInputData(path + fileName) 

j.splitter =  SplitByFiles ( filesPerJob = 30, maxFiles = -1 ) # This is the splitter - it controls how many data files are run over by a single subjob At the moment it's setup as one file per subjob - but this will result in a large number of subjobs, so you may want to increase the number.

j.merger = None 
j.outputfiles = ["Stripping21_D2HMuMu"+year+"_Mag"+magPol+"_NTuples.root"] 
j.backend    = Dirac() 
j.backend.settings['CPUTime'] = 172800 
j.submit()
