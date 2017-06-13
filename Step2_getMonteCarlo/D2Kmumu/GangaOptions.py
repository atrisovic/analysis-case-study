#datafile = "MC201121113001Beam3500GeV-2011-MagDown-Nu2-Pythia8Sim08aDigi13Trig0x40760037Reco14aStripping20r1NoPrescalingFlaggedSTREAMSDST.py"
#j = Job(name = "MCD2KMuMuD11" )
#myApp = DaVinci(version ='v36r1p2', platform = "x86_64-slc6-gcc48-opt", user_release_area='workdir1')
#j.application = myApp
#j.application.optsfile = [File('DaVinci_Options.py')]
#j.inputdata = j.application.readInputData(datafile)
#j.splitter = SplitByFiles(filesPerJob = 2, maxFiles = -1 )
#j.backend = Dirac()
#j.outputfiles = [LocalFile('MCDKmumu11-Down.root')]
#j.submit()
#

#datafile = "MC201121113001Beam3500GeV-2011-MagUp-Nu2-Pythia8Sim08aDigi13Trig0x40760037Reco14aStripping20r1NoPrescalingFlaggedSTREAMSDST.py"
#j = Job(name = "MCD2KMuMuU11" )
#myApp = DaVinci(version ='v36r1p2', platform = "x86_64-slc6-gcc48-opt", user_release_area='workdir2')
#j.application = myApp
#j.application.optsfile = [File('DaVinci_Options.py')]
#j.inputdata = j.application.readInputData(datafile)
#j.splitter = SplitByFiles(filesPerJob = 2, maxFiles = -1 )
#j.backend = Dirac()
#j.outputfiles = [LocalFile('MCDKmumu11-Up.root')]
#j.submit()

#datafile = "MC201221113001Beam4000GeV-2012-MagDown-Nu25-Pythia8Sim08aDigi13Trig0x409f0045Reco14Stripping20NoPrescalingFlaggedSTREAMSDST.py"
#j = Job(name = "MCD2KMuMuD12" )
#myApp = DaVinci(version ='v36r1p2', platform = "x86_64-slc6-gcc48-opt", user_release_area='workdir3')
#j.application = myApp
#j.application.optsfile = [File('DaVinci_Options.py')]
#j.inputdata = j.application.readInputData(datafile)
#j.splitter = SplitByFiles(filesPerJob = 2, maxFiles = -1 )
#j.backend = Dirac()
#j.outputfiles = [LocalFile('MCDKmumu12-Down.root')]
#j.submit()
#
datafile = "MC201221113001Beam4000GeV-2012-MagUp-Nu25-Pythia8Sim08aDigi13Trig0x409f0045Reco14Stripping20NoPrescalingFlaggedSTREAMSDST.py"
j = Job(name = "MCD2KMuMuU12" )
myApp = DaVinci(version ='v36r1p2', platform = "x86_64-slc6-gcc48-opt", user_release_area='workdir4')
j.application = myApp
j.application.optsfile = [File('DaVinci_Options.py')]
j.inputdata = j.application.readInputData(datafile)
j.splitter = SplitByFiles(filesPerJob = 2, maxFiles = -1 )
j.backend = Dirac()
j.outputfiles = [LocalFile('MCDKmumu12-Up.root')]
j.submit()

