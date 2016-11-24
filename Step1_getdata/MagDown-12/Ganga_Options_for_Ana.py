# ANA - this is the file that you actually submit to Ganga. It controls the job, the output files and so on. You have to specify in this file the location of the DaVinci options that you want to run. In Ganga you run this file using the command: execfile("Ganga_Options_for_Ana.py"). 
myApplication = DaVinci(version='v36r1p2') 					#OK
myApplication.user_release_area  = "/afs/cern.ch/work/a/atrisovi/anastudy/MagDown-12/"		#Maybe
myApplication.platform           = "x86_64-slc6-gcc48-opt"			#Probably OK

magPol = "Down" # Make sure the magPol and year match what you specify in your DaVinci options
year = "12"

fileName = ""

# The code below controls which data files are read, depending on the year and magnet polarity. You should obviously update this.
# YES

if magPol == "Down":
    if year == "12":
        fileName = "LHCbCollision12Beam4000GeV-VeloClosed-MagDownRealDataReco14Stripping2190000000CHARMMDST.py"
    if year == "11":
        fileName = "LHCbCollision11Beam3500GeV-VeloClosed-MagDownRealDataReco14Stripping21r190000000CHARMMDST.py"

j = Job( application = myApplication )
j.name = "S21"+magPol+year+"_RD" # This is just the name of the job in Ganga. You can change this to whatever you like.
j.application.optsfile = [ File ( '/afs/cern.ch/work/a/atrisovi/anastudy/MagDown-12/DaVinci_Options_for_Ana.py' ) ] # The DaVinci options file you want to run

j.inputdata = j.application.readInputData("/afs/cern.ch/work/a/atrisovi/anastudy/MagDown-12/"+fileName) # The location of the data option file

j.splitter =  SplitByFiles ( filesPerJob = 30, maxFiles = -1 ) # This is the splitter - it controls how many data files are run over by a single subjob At the moment it's setup as one file per subjob - but this will result in a large number of subjobs, so you may want to increase the number.
#1, -1
#for testing 5, 100
j.merger = None # Dont worry about this"Stripping21_D2HMuMu"+year+"_Mag"+magPol+"_NTuples.root
j.outputfiles = ["Stripping21_D2HMuMu"+year+"_Mag"+magPol+"_NTuples.root"] # This is the name of the output root file. Make sure it matches what you specify in the DaVinci options, otherwise you wont be able to get hold of the output file!
j.backend    = Dirac() # Leave this
j.backend.settings['CPUTime'] = 172800 # Leave this
j.submit()
