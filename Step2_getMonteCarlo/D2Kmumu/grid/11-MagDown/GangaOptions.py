datafile = "MC201121113001Beam3500GeV-2011-MagDown-Nu2-Pythia8Sim08aDigi13Trig0x40760037Reco14aStripping20r1NoPrescalingFlaggedSTREAMSDST.py"

def makeJob():

    j = Job(name = "MCD2KMuMuD11" )
    myApp = GaudiExec('DaVinci','v37r1p2') #,myPath='.')
    myApp.directory = "/workdir"
    myApp.platform = 'x86_64-slc6-gcc49-opt'
    j.application = myApp
    j.application.options = ['DaVinci_Options.py']
    j.application.readInputData(datafile)
    j.splitter = SplitByFiles(filesPerJob = 2, maxFiles = 2 , ignoremissing = True )
    j.backend = Dirac()
    j.outputfiles = [DiracFile('*.root')]
    j.submit()

makeJob()



#myApplication = prepareGaudiExec('DaVinci','v37r1p2', myPath='') #DaVinci(version='v37r1p2')                     
#myApplication.user_release_area  = "" #/eos/lhcb/user/a/atrisovi/analysis-case-study/Step2_getMonteCarlo/D2Kmumu/"     
#myApplication.platform           = "x86_64-slc6-gcc48-opt"          


#filename1= "11-MagDown/MC201121113001Beam3500GeV-2011-MagDown-Nu2-Pythia8Sim08aDigi13Trig0x40760037Reco14aStripping20r1NoPrescalingFlaggedSTREAMSDST.py"
#j1 = Job(application = myApplication)
#j1.name = "MC-Down-11-MS" 
#j1.application.optsfile = [ File ('11-MagDown/DaVinci_Options.py')]
#j1.inputdata = j1.application.readInputData(filename1)
#j1.splitter =  SplitByFiles ( filesPerJob = 30, maxFiles = -1 ) 
##j1.merger = None 
#j1.outputfiles = ["MC_D2KMuMu11down_NTuples.root"] 
#j1.backend    = Dirac() 
#j1.backend.settings['CPUTime'] = 172800 
#j1.submit()

#
#filename2 = "11-MagUp/MC201121113001Beam3500GeV-2011-MagUp-Nu2-Pythia8Sim08aDigi13Trig0x40760037Reco14aStripping20r1NoPrescalingFlaggedSTREAMSDST.py"
#j2 = Job(application = myApplication)
#j2.name = "MC-Up-11-MS"
#j2.application.optsfile = [ File ('11-MagUp/DaVinci_Options.py')]
#j2.inputdata = j2.application.readInputData(filename2)
#j2.splitter =  SplitByFiles ( filesPerJob = 30, maxFiles = -1 ) 
#j2.merger = None 
#j2.outputfiles = ["MC_D2KMuMu11up_NTuples.root"] 
#j2.backend    = Dirac() 
#j2.backend.settings['CPUTime'] = 172800 
#j2.submit()
#
#filename3 = "12-MagDown/MC201221113001Beam4000GeV-2012-MagDown-Nu25-Pythia8Sim08aDigi13Trig0x409f0045Reco14Stripping20NoPrescalingFlaggedSTREAMSDST.py"
#j3 = Job(application = myApplication)
#j3.name = "MC-Down-12-MS"
#j3.application.optsfile = [ File ('12-MagDown/DaVinci_Options.py')]
#j3.inputdata = j3.application.readInputData(filename3)
#j3.splitter =  SplitByFiles ( filesPerJob = 30, maxFiles = -1 ) 
#j3.merger = None 
#j3.outputfiles = ["MC_D2KMuMu12Down_NTuples.root"] 
#j3.backend    = Dirac() 
#j3.backend.settings['CPUTime'] = 172800 
#j3.submit()
#
#filename4 = "12-MagUp/MC201221113001Beam4000GeV-2012-MagUp-Nu25-Pythia8Sim08aDigi13Trig0x409f0045Reco14Stripping20NoPrescalingFlaggedSTREAMSDST.py"
#j4 = Job(application = myApplication)
#j4.name = "MC-Up-12-MS"
#j4.application.optsfile = [ File ('12-MagUp/DaVinci_Options.py')]
#j4.inputdata = j4.application.readInputData(filename4)
#j4.splitter =  SplitByFiles ( filesPerJob = 30, maxFiles = -1 ) 
#j4.merger = None 
#j4.outputfiles = ["MC_D2KMuMu12up_NTuples.root"] 
#j4.backend    = Dirac() 
#j4.backend.settings['CPUTime'] = 172800 
#j4.submit()
#
