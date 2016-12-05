# Bookkeeping

```
source /lhcb/scripts/lhcb-setup.sh
SetupProject LHCbDirac 
lhcb-proxy-init 
lhcb_bkk &
```

# Gaudi catalog

Create Gaudi catalog:

```lb-run LHCbDIRAC dirac-bookkeeping-genXMLCatalog --Options=MC_2012_27163003_Beam4000GeV2012MagDownNu2.5Pythia8_Sim08e_Digi13_Trig0x409f0045_Reco14a_Stripping20NoPrescalingFlagged_ALLSTREAMS.DST.py --Catalog=myCatalog.xml```

Add in DaVinci Options:

```
from Gaudi.Configuration import FileCatalog
FileCatalog().Catalogs = [ "xmlcatalog_file:/path/to/myCatalog.xml" ]
```

# Running the scripts

```
lhcb-proxy-init
lb-run Ganga ganga Ganga_Options.py
```

Alternatively:

`SetupProject Ganga` or `SetupGanga`

Certificate: 
`lhcb-proxy-init` or

`ganga` and then
`gridProxy.renew()`

Submit the job:
```
ganga Ganga_Options.py
```
or inside `ganga`
`execfile("Ganga_File.py")`

# Fixing failed jobs

Identify failed jobs: `jobs(ID).subjobs`
Resubmit them: jobs(ID).subjobs(subjobID).resubmit()

Or if many of them have failed:

```
j=jobs(PrimaryJobId)
for sj in j.subjobs.select(status="failed"):
      sj.backend.reset()
```

# Merge n-tuples

Inside this folder: `gangadir/workspace/user/LocalXML/jobID` type this:
```
hadd -f merged.root */output/*.root
``` 
