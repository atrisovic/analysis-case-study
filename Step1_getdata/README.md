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

# Running

```SetupProject Ganga```

Certificate: 
`gridProxy.renew()`

Submit the job:
```
ganga Ganga_Options_for_Ana.py
```

