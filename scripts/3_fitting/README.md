# Mass fit results

The result of this analysis are the following plots in various dimuon mass ranges. We studied the three body decay in high dimuon and low dimuon mass range, and we did not observe any signal.

| Dimuon resonances             | Dimuon mass range (MeV) | Plot                     |
|-------------------------------|------------------|--------------------------|
| Three body decay (low dimuon) | 250 - 525        | `low_dimuon_signal.pdf`  |
| <a href="https://www.codecogs.com/eqnedit.php?latex=\eta" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\eta" title="\eta" /></a>                          | 525 - 565        | `eta.pdf`                |
| <a href="https://www.codecogs.com/eqnedit.php?latex=\rho,&space;\omega" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\rho,&space;\omega" title="\rho, \omega" /></a>                    | 565 - 850        | `rho_omega.pdf`          |
| <a href="https://www.codecogs.com/eqnedit.php?latex=\phi" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\phi" title="\phi" /></a>                          | 850 - 1250       | `phi.pdf`                |
| Three body (high dimuon)      | 1250 - 2000      | `high_dimuon_signal.pdf` |

In order to reproduce the plots, follow the instructions below.

# Instructions

## Step 1. Optimisation

Optimisation is the process where combinations of different variable cuts are evaluated in order to maximise the signal yield and reduce the background. In this analysis, the optimisation study is performed to choose the combined BDT and particle identification (PID) selection criteria that maximise the expected statistical significance.

```
lb-run DaVinci/latest bash -f
root Optimise.C
```

The result of the script is the heat map called `2D_Optimisation_Pi.pdf`. The higher significance (in yellow) means cleaner signal. See the plot with:

`evince 2D_Optimisation_Pi.pdf`

The optimal significance is found to be at the cuts of `BDT > 0.1` and `PIDmu > 2`.

## Step 2. Model fixing

```
root ModelFixing.C
```

Result:

`evince PhiModels.pdf`

## Step 3. Fitting

The fit for <a href="https://www.codecogs.com/eqnedit.php?latex=D^{&plus;}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?D^{&plus;}" title="D^{+}" /></a> and <a href="https://www.codecogs.com/eqnedit.php?latex=D_{s}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?D_{s}" title="D_{s}" /></a> signal was modelled with the sum of Crystal Ball distributions. Each shape consists of a Gaussian core with a power law tail on opposite sides. The background was modelled with a 2nd order Chebyshev polynomial distribution.
Execute the following commands:

```
mkdir fitresults
mkdir mass_fits
root OSMassFit.C 
```

The plots can be found in `fitresults` folder.

