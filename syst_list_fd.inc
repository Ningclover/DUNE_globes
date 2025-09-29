// ===================================================================
// Systematic Uncertainties List for DUNE Far Detector
// ===================================================================
// This file defines all nuisance parameters used in DUNE_GLoBES_fd.glb
// Values are defined in definations_fd.inc
// ===================================================================

// -------------------------------------------------------------------
// GLOBAL/COMMON SYSTEMATICS
// -------------------------------------------------------------------

// Overall systematic uncertainty (applies to all channels)
sys(#err_all)<
  @error = ERR_ALL
>

// -------------------------------------------------------------------
// BEAM MODE SYSTEMATICS
// -------------------------------------------------------------------

// Forward Horn Current (FHC) beam uncertainty
sys(#err_fhc)<
  @error = ERR_FHC
>

// Reverse Horn Current (RHC) beam uncertainty
sys(#err_rhc)<
  @error = ERR_RHC
>

// -------------------------------------------------------------------
// INTERACTION/DETECTION SYSTEMATICS
// -------------------------------------------------------------------

// Intrinsic nue contamination uncertainty in FHC mode
sys(#err_int_nue_fhc)<
  @error = ERR_INT_NUE_FHC
>

// Intrinsic nue contamination uncertainty in RHC mode
sys(#err_int_nue_rhc)<
  @error = ERR_INT_NUE_RHC
>

// -------------------------------------------------------------------
// CROSS-SECTION SYSTEMATICS
// -------------------------------------------------------------------

// Neutrino cross-section uncertainty
sys(#err_nu_xs)<
  @error = ERR_NU_XS
>

// Antineutrino cross-section uncertainty
sys(#err_nubar_xs)<
  @error = ERR_NUBAR_XS
>

// Electron neutrino cross-section uncertainty
sys(#err_nue_xs)<
  @error = ERR_NUE_XS
>

// Electron antineutrino cross-section uncertainty
sys(#err_antinue_xs)<
  @error = ERR_ANTINUE_XS
>

// -------------------------------------------------------------------
// BACKGROUND SYSTEMATICS
// -------------------------------------------------------------------

// Muon neutrino background uncertainty
sys(#err_numu_bg)<
  @error = ERR_NUMU_BG
>

// Tau neutrino background uncertainty
sys(#err_nutau_bg)<
  @error = ERR_NUTAU_BG
>

// Neutral current background uncertainty (disappearance channels)
sys(#err_nc_bgdis)<
  @error = ERR_NC_BGDIS
>