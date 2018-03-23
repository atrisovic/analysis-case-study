# Fitting

## Environment

`lb-run DaVinci/latest bash -f`

## Optimisation

`root Optimise.C`

## Evaluate the plot

`evince 2D_Optimisation_Pi.pdf`

## Model fixing

```
root ModelFixing.C
```

## Evaluate the model

`evince PhiModels.pdf`

## Fitting

```
mkdir fitresults
mkdir mass_fits
root OSMassFit.C 
```

## Evaluate results

* eta.pdf  
* high_dimuon_signal.pdf  
* low_dimuon_signal.pdf  
* phi.pdf  
* rho_omega.pdf`

