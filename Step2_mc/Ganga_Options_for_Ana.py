# ANA - this is the file that you actually submit to Ganga. It controls the job, the output files and so on. You have to specify in this file the location of the DaVinci options that you want to run. In Ganga you run this file using the command: execfile("Ganga_Options_for_Ana.py"). 
myApplication = DaVinci(version='v37r1p2') 					#OK
myApplication.user_release_area  = "/var/pcjm/r02/lhcb/trisovic/Analysis/Step 3 MC/"		#Maybe
myApplication.platform           = "x86_64-slc6-gcc48-opt"			#Probably OK

magPol = "Down" # Make sure the magPol and year match what you specify in your DaVinci options
year = "11"

fileName = ""

# The code below controls which data files are read, depending on the year and magnet polarity. You should obviously update this.
# YES

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
j.name = "MC"+magPol+year+"MS" # This is just the name of the job in Ganga. You can change this to whatever you like.
j.application.optsfile = [ File ( '/var/pcjm/r02/lhcb/trisovic/Analysis/Step 3 MC/DaVinci_Options_for_Ana.py' ) ] # The DaVinci options file you want to run

j.inputdata = j.application.readInputData("/var/pcjm/r02/lhcb/trisovic/Analysis/Step 3 MC/"+fileName) # The location of the data option file

j.splitter =  SplitByFiles ( filesPerJob = 30, maxFiles = -1 ) # This is the splitter - it controls how many data files are run over by a single subjob At the moment it's setup as one file per subjob - but this will result in a large number of subjobs, so you may want to increase the number.
#1, -1
#for testing 5, 100
j.merger = None # Dont worry about this"Stripping21_D2HMuMu"+year+"_Mag"+magPol+"_NTuples.root
j.outputfiles = ["MC_D2PiMuMu"+year+"_Mag"+magPol+"_NTuples.root"] # This is the name of the output root file. Make sure it matches what you specify in the DaVinci options, otherwise you wont be able to get hold of the output file!
j.backend    = Dirac() # Leave this
j.backend.settings['CPUTime'] = 172800 # Leave this
j.submit()
