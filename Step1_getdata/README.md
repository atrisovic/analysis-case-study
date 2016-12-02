# Running the scripts

```
execfile("Ganga_File.py")
```
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

# Running

```SetupProject Ganga```

Certificate: 
`ganga` and then
`gridProxy.renew()`

Submit the job:
```
ganga Ganga_Options_for_Ana.py
```

