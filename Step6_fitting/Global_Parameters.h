// This file contains some global parameters that are required in all decay codes

// The speed of light
const Double_t Global_Celeritas = 299792458; //metres per second

// LHCb Detector Acceptance in Theta
const Double_t Global_LHCb_Theta_Min = 0.010; // radians
const Double_t Global_LHCb_Theta_Max = 0.250; // radians

// Particle production angle in theta at LHCb. We model particle production as Gaussian in Theta centred on Theta = 0 with a width defined by Theta_Sigma
const Double_t Global_LHCb_Theta_Sigma = 0.11; // radians

// Detector resolutions
const Double_t Global_LHCb_PVx_res = 0.000008; // metres   
const Double_t Global_LHCb_PVz_res = 0.000040; // metres

// Particle masses in MeV/c2

// Light mesons (M < 1 GeV)
const Double_t Global_Charged_Pion_Mass = 139.57018;
const Double_t Global_Neutral_Pion_Mass = 134.9766;
const Double_t Global_Charged_Kaon_Mass = 493.677;
const Double_t Global_Neutral_Kaon_Mass = 497.614;
const Double_t Global_Neutral_Kstar_Mass = 895.5;

// Heavy mesons (M > 1 GeV)
const Double_t Global_D0_Mass = 1864.84;
const Double_t Global_Jpsi_Mass = 3096.916;
const Double_t Global_Psi2S_Mass = 3686.09;
const Double_t Global_Bd0_Mass = 5279.50;
const Double_t Global_Bs0_Mass = 5366.3;

const Double_t Global_Bd0_Mass_Error = 0.30;
const Double_t Global_Bs0_Mass_Error = 0.6;
const Double_t Global_Lb0_Mass_Error = 1.6; 

const Double_t Global_Delta_M_Bs_Bd = 87.0;
const Double_t Global_Delta_M_Bs_Bd_Error = 0.6;

// Baryons
const Double_t Global_Lb0_Mass = 5620.2;
const Double_t Global_Proton_Mass = 938.272030;

// Leptons
const Double_t Global_Muon_Mass = 105.658367;
const Double_t Global_Electron_Mass = 0.501998910;

// Lifetimes in nanoseconds
const Double_t Global_D0_Lifetime     = 0.0004101;
//const Double_t Global_Bd0_Lifetime    = 0.001525; // old value
const Double_t Global_Bd0_Lifetime    = 0.001519;
const Double_t Global_Bs0_Lifetime    = 0.001472;
const Double_t Global_Bs02KK_Lifetime = 0.001472;
const Double_t Global_Lb0_Lifetime    = 0.00138;

// Lifetime Errors in nanoseconds
//const Double_t Global_Bd0_Lifetime_Error = 0.000009; // old value
const Double_t Global_Bd0_Lifetime_Error = 0.000007;

// Particle IDs
const Int_t Global_Bd0_ID = 511;
const Int_t Global_Jpsi_ID = 443;
const Int_t Global_Muon_ID = 13;
const Int_t Global_Neutral_Kstar_ID = 313;
