
/* PLL clock sources */
typedef enum
{
    RCC_PLLSRC_UNDEFINED = -1,
    RCC_PLLSRC_HSI_DIV_2,           /* Internal 8 MHz RC Oscillator divided by 2*/
    RCC_PLLSRC_HSE,                 /* HSE clock not divided */
    RCC_PLLSRC_HSE_DIV_2            /* HSE clock divided by */
}stm32f103_rcc_pll_src;

/* PLL multiplication factor */
typedef enum
{
    RCC_PLLMUL_UNDEFINED = -1,
    RCC_PLLMUL_2,    
    RCC_PLLMUL_3,
    RCC_PLLMUL_4,
    RCC_PLLMUL_5,
    RCC_PLLMUL_6,
    RCC_PLLMUL_7,
    RCC_PLLMUL_8,
    RCC_PLLMUL_9,
    RCC_PLLMUL_10,
    RCC_PLLMUL_11,
    RCC_PLLMUL_12,
    RCC_PLLMUL_13,
    RCC_PLLMUL_14,
    RCC_PLLMUL_15,
    RCC_PLLMUL_16
}stm32f103_rcc_pll_mul;

/*  USB prescaler */
typedef enum
{
    RCC_USBPRESCALER_PLLCLK_UNDEFINED = -1,
    RCC_USBPRESCALER_PLLCLK_NO_DIV,     /* PLL clock is not divided */
    RCC_USBPRESCALER_PLLCLK_DIV_BY_1_5  /* PLL clock is divided by 1.5 */
}stm32f103_rcc_usb_div;

void stm32f103_rcc_config_pll(stm32f103_rcc_pll_src clk_src, stm32f103_rcc_pll_mul pll_mul, 
                            stm32f103_rcc_usb_div usb_prescaler, bool is_hse_bypass);