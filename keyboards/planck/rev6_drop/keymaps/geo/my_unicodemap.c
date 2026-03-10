enum unicode_names {
    G_ALPHA,    G_ALPHA_U, 
    G_BETA,     G_BETA_U,  
    G_GAMMA,    G_GAMMA_U, 
    G_DELTA,    G_DELTA_U, 
    G_EPSI,     G_EPSI_U,  
    G_ZETA,     G_ZETA_U,  
    G_ETA,      G_ETA_U,   
    G_THETA,    G_THETA_U, 
    G_IOTA,     G_IOTA_U,  
    G_KAPPA,    G_KAPPA_U, 
    G_LAMBDA,   G_LAMBDA_U,
    G_MU,       G_MU_U,    
    G_NU,       G_NU_U,    
    G_XI,       G_XI_U,    
    G_OMIC,     G_OMIC_U,  
    G_PI,       G_PI_U,    
    G_RHO,      G_RHO_U,   
    G_SIGMA_F,  G_SIGMA,  G_SIGMA_U, 
    G_TAU,      G_TAU_U,   
    G_UPSI,     G_UPSI_U,  
    G_PHI,      G_PHI_U,   
    G_CHI,      G_CHI_U,   
    G_PSI,      G_PSI_U,   
    G_OMEGA,    G_OMEGA_U, 
    U_SALUT,
    U_MELT,
    U_UPDW,
};

const uint32_t PROGMEM unicode_map[] = {
    [G_ALPHA]       = 0x03B1,   //  α
    [G_ALPHA_U]     = 0x0391,   //  Α
    [G_BETA]        = 0x03B2,   //  β
    [G_BETA_U]      = 0x0392,   //  Β
    [G_GAMMA]       = 0x03B3,   //  γ
    [G_GAMMA_U]     = 0x0393,   //  Γ
    [G_DELTA]       = 0x03B4,   //  δ
    [G_DELTA_U]     = 0x0394,   //  Δ
    [G_EPSI]        = 0x03B5,   //  ε
    [G_EPSI_U]      = 0x0395,   //  Ε
    [G_ZETA]        = 0x03B6,   //  ζ
    [G_ZETA_U]      = 0x0396,   //  Ζ
    [G_ETA]         = 0x03B7,   //  η
    [G_ETA_U]       = 0x0397,   //  Η
    [G_THETA]       = 0x03B8,   //  θ
    [G_THETA_U]     = 0x0398,   //  Θ
    [G_IOTA]        = 0x03B9,   //  ι
    [G_IOTA_U]      = 0x0399,   //  Ι
    [G_KAPPA]       = 0x03BA,   //  κ
    [G_KAPPA_U]     = 0x039A,   //  Κ
    [G_LAMBDA]      = 0x03BB,   //  λ
    [G_LAMBDA_U]    = 0x039B,   //  Λ
    [G_MU]          = 0x03BC,   //  μ
    [G_MU_U]        = 0x039C,   //  Μ
    [G_NU]          = 0x03BD,   //  ν
    [G_NU_U]        = 0x039D,   //  Ν
    [G_XI]          = 0x03BE,   //  ξ
    [G_XI_U]        = 0x039E,   //  Ξ
    [G_OMIC]        = 0x03BF,   //  ο
    [G_OMIC_U]      = 0x039F,   //  Ο
    [G_PI]          = 0x03C0,   //  π
    [G_PI_U]        = 0x03A0,   //  Π
    [G_RHO]         = 0x03C1,   //  ρ
    [G_RHO_U]       = 0x03A1,   //  Ρ
    [G_SIGMA_F]     = 0x03C2,   //  ς
    [G_SIGMA]       = 0x03C3,   //  σ
    [G_SIGMA_U]     = 0x03A3,   //  Σ
    [G_TAU]         = 0x03C4,   //  τ
    [G_TAU_U]       = 0x03A4,   //  Τ
    [G_UPSI]        = 0x03C5,   //  υ
    [G_UPSI_U]      = 0x03A5,   //  Υ
    [G_PHI]         = 0x03C6,   //  φ
    [G_PHI_U]       = 0x03A6,   //  Φ
    [G_CHI]         = 0x03C7,   //  χ
    [G_CHI_U]       = 0x03A7,   //  Χ
    [G_PSI]         = 0x03C8,   //  ψ
    [G_PSI_U]       = 0x03A8,   //  Ψ
    [G_OMEGA]       = 0x03C9,   //  ω
    [G_OMEGA_U]     = 0x03A9,   //  Ω
    [U_SALUT]       = 0x1FAE1,  // 🫡
    [U_MELT]        = 0x1FAE0,  // 🫠
    [U_UPDW]        = 0x1F643,  // 🙃
};

#define UG_ALPHA    UP(G_ALPHA,    G_ALPHA_U)
#define UG_BETA     UP(G_BETA,     G_BETA_U)
#define UG_GAMMA    UP(G_GAMMA,    G_GAMMA_U)
#define UG_DELTA    UP(G_DELTA,    G_DELTA_U)
#define UG_EPSI     UP(G_EPSI,     G_EPSI_U)
#define UG_ZETA     UP(G_ZETA,     G_ZETA_U)
#define UG_ETA      UP(G_ETA,      G_ETA_U)
#define UG_THETA    UP(G_THETA,    G_THETA_U)
#define UG_IOTA     UP(G_IOTA,     G_IOTA_U)
#define UG_KAPPA    UP(G_KAPPA,    G_KAPPA_U)
#define UG_LAMBDA   UP(G_LAMBDA,   G_LAMBDA_U)
#define UG_MU       UP(G_MU,       G_MU_U)
#define UG_NU       UP(G_NU,       G_NU_U)
#define UG_XI       UP(G_XI,       G_XI_U)
#define UG_OMIC     UP(G_OMIC,     G_OMIC_U)
#define UG_PI       UP(G_PI,       G_PI_U)
#define UG_RHO      UP(G_RHO,      G_RHO_U)
#define UG_SIGMA    UP(G_SIGMA,    G_SIGMA_U)
#define UG_SIGMA_F  UP(G_SIGMA_F,  G_SIGMA_U)
#define UG_TAU      UP(G_TAU,      G_TAU_U)
#define UG_UPSI     UP(G_UPSI,     G_UPSI_U)
#define UG_PHI      UP(G_PHI,      G_PHI_U)
#define UG_CHI      UP(G_CHI,      G_CHI_U)
#define UG_PSI      UP(G_PSI,      G_PSI_U)
#define UG_OMEGA    UP(G_OMEGA,    G_OMEGA_U)