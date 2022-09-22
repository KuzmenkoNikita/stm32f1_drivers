#define STM32F103_RCC_BASE              0x40023000 /*start addres of the RCC registers */

/* ***************************************************************************************** */

#define STM32F103_RCC_CR_OFFSET         0x00    /* Clock control register offset */

#define STM32F103_RCC_CR_HISON_POS      0       /* Internal high-speed clock enable bit position */
#define STM32F103_RCC_CR_HSIRDY_POS     1       /* Internal high-speed clock ready flag bit position */
#define STM32F103_RCC_CR_HSITRIM_POS    3       /* Internal high-speed clock trimming position */
#define STM32F103_RCC_CR_HSICAL_POS     8       /* Internal high-speed clock calibration position */
#define STM32F103_RCC_CR_HSEON_POS      16      /* HSE clock enable position */
#define STM32F103_RCC_CR_HSERDY_POS     17      /* External high-speed clock ready flag position */
#define STM32F103_RCC_CR_HSEBYP_POS     18      /* External high-speed clock bypass position */
#define STM32F103_RCC_CR_CSSON_POS      19      /* Clock security system enable position */
#define STM32F103_RCC_CR_PLLON_POS      24      /* PLL enable position */
#define STM32F103_RCC_CR_PLLRDY_POS     25      /* PLL clock ready flag position */

#define STM32F103_RCC_CR_HSITRIM_MASK   0x000000F8
#define STM32F103_RCC_CR_HSICAL_MASK    0x0000FF00

/* ***************************************************************************************** */

#define STM32F103_RCC_CFGR_OFFSET       0x04    /* Clock configuration register  offset */

#define STM32F103_RCC_CFGR_SW_POS       0       /*  System clock switch position */      
#define STM32F103_RCC_CFGR_SWS_POS      2       /* System clock switch status position */
#define STM32F103_RCC_CFGR_HPRE_POS     4       /* AHB prescaler position */
#define STM32F103_RCC_CFGR_PPRE1_POS    8       /* APB low-speed prescaler (APB1) position */
#define STM32F103_RCC_CFGR_PPRE2_POS    11      /* APB high-speed prescaler (APB2) position */
#define STM32F103_RCC_CFGR_ADCPRE_POS   14      /* ADC prescaler position */
#define STM32F103_RCC_CFGR_PLLSRC_POS   16      /* PLL entry clock source position */
#define STM32F103_RCC_CFGR_PLLXTPRE_POS 17      /* HSE divider for PLL entry position */
#define STM32F103_RCC_CFGR_PLLMUL_POS   18      /* PLL multiplication factor position */
#define STM32F103_RCC_CFGR_USBPRE_POS   22      /* USB prescaler position */
#define STM32F103_RCC_CFGR_MCO_POS      24      /* Microcontroller clock output position */

#define STM32F103_RCC_CFGR_SW_MASK      0x00000003
#define STM32F103_RCC_CFGR_SWS_MASK     0x0000000C
#define STM32F103_RCC_CFGR_HPRE_MASK    0x000000F0
#define STM32F103_RCC_CFGR_PPRE1_MASK   0x00000700
#define STM32F103_RCC_CFGR_PPRE2_MASK   0x00003800
#define STM32F103_RCC_CFGR_ADCPRE_MASK  0x0000C000
#define STM32F103_RCC_CFGR_PLLMUL_MASK  0x003C0000
#define STM32F103_RCC_CFGR_MCO_MASK     0x07000000

/* ***************************************************************************************** */

#define STM32F103_RCC_CIR_OFFSET        0x08    /* Clock interrupt register offset */

#define STM32F103_RCC_CIR_LSIRDYF_POS   0   /* LSI ready interrupt flagposition */
#define STM32F103_RCC_CIR_LSERDYF_POS   1   /* LSE ready interrupt flag position */
#define STM32F103_RCC_CIR_HSIRDYF_POS   2   /* HSI ready interrupt flag position */
#define STM32F103_RCC_CIR_HSERDYF_POS   3   /* HSE ready interrupt flagposition */
#define STM32F103_RCC_CIR_PLLRDYF_POS   4   /* PLL ready interrupt flag position */
#define STM32F103_RCC_CIR_CSSF_POS      7   /* Clock security system interrupt flag position */
#define STM32F103_RCC_CIR_LSIRDYIE_POS  8   /* LSI ready interrupt enable position */
#define STM32F103_RCC_CIR_LSERDYIE_POS  9   /* LSE ready interrupt enable position */
#define STM32F103_RCC_CIR_HSIRDYIE_POS  10  /* HSI ready interrupt enable position */
#define STM32F103_RCC_CIR_HSERDYIE_POS  11  /* HSE ready interrupt enable position */
#define STM32F103_RCC_CIR_PLLRDYIE_POS  12  /* PLL ready interrupt enable position */
#define STM32F103_RCC_CIR_LSIRDYC_POS   16  /* LSI ready interrupt clear position */
#define STM32F103_RCC_CIR_LSERDYC_POS   17  /* LSE ready interrupt clear position */
#define STM32F103_RCC_CIR_HSIRDYC_POS   18  /* HSI ready interrupt clear position */
#define STM32F103_RCC_CIR_HSERDYC_POS   19  /* HSE ready interrupt clear position */
#define STM32F103_RCC_CIR_PLLRDYC_POS   20  /* PLL ready interrupt clear position */
#define STM32F103_RCC_CIR_CSSC_POS      23  /* Clock security system interrupt clear position */

/* ***************************************************************************************** */

#define STM32F103_RCC_APB2RSTR_OFFSET   0x0C    /* APB2 peripheral reset register offset */

#define STM32F103_RCC_APB2RSTR_AFIORST_POS      0   /* Alternate function IO reset position */
#define STM32F103_RCC_APB2RSTR_IOPARST_POS      2   /* IO port A reset position */
#define STM32F103_RCC_APB2RSTR_IOPBRST_POS      3   /* IO port B reset position */
#define STM32F103_RCC_APB2RSTR_IOPCRST_POS      4   /* IO port C reset position */
#define STM32F103_RCC_APB2RSTR_IOPDRST_POS      5   /* IO port D reset position */
#define STM32F103_RCC_APB2RSTR_IOPERST_POS      6   /* IO port E reset position */
#define STM32F103_RCC_APB2RSTR_IOPFRST_POS      7   /* IO port F reset position */
#define STM32F103_RCC_APB2RSTR_IOPGRST_POS      8   /* IO port G reset position */
#define STM32F103_RCC_APB2RSTR_ADC1RST_POS      9   /* ADC 1 interface reset position */
#define STM32F103_RCC_APB2RSTR_ADC2RST_POS      10  /* ADC 2 interface reset position */
#define STM32F103_RCC_APB2RSTR_TIM1RST_POS      11  /* TIM1 timer reset position */
#define STM32F103_RCC_APB2RSTR_SPI1RST_POS      12  /* SPI1 reset position */
#define STM32F103_RCC_APB2RSTR_TIM8RST_POS      13  /* TIM8 timer reset position */
#define STM32F103_RCC_APB2RSTR_USART1RST_POS    14  /* USART1 reset position */
#define STM32F103_RCC_APB2RSTR_ADC3RST_POS      15  /* ADC3 interface reset position */
#define STM32F103_RCC_APB2RSTR_TIM9RST_POS      19  /* TIM19 timer reset position */
#define STM32F103_RCC_APB2RSTR_TIM10RST_POS     20  /* TIM10 timer reset position */
#define STM32F103_RCC_APB2RSTR_TIM11RST_POS     21  /* TIM11 timer reset position */

/* ***************************************************************************************** */

#define STM32F103_RCC_APB1RSTR_OFFSET   0x10    /* APB1 peripheral reset register offset */

#define STM32F103_RCC_APB1RSTR_TIM2RST_POS      0   /* TIM2 timer reset position */   
#define STM32F103_RCC_APB1RSTR_TIM3RST_POS      1   /* TIM3 timer reset position */
#define STM32F103_RCC_APB1RSTR_TIM4RST_POS      2   /* TIM4 timer reset position */
#define STM32F103_RCC_APB1RSTR_TIM5RST_POS      3   /* TIM5 timer reset position */
#define STM32F103_RCC_APB1RSTR_TIM6RST_POS      4   /* TIM6 timer reset position */
#define STM32F103_RCC_APB1RSTR_TIM7RST_POS      5   /* TIM7 timer reset position */
#define STM32F103_RCC_APB1RSTR_TIM12RST_POS     6   /* TIM12 timer reset position */
#define STM32F103_RCC_APB1RSTR_TIM13RST_POS     7   /* TIM13 timer reset position */
#define STM32F103_RCC_APB1RSTR_TIM14RST_POS     8   /* TIM14 timer reset position */
#define STM32F103_RCC_APB1RSTR_WWDGRST_POS      11  /* Window watchdog reset position */
#define STM32F103_RCC_APB1RSTR_SPI2RST_POS      14  /* SPI2 reset position */
#define STM32F103_RCC_APB1RSTR_SPI3RST_POS      15  /* SPI3 reset position */
#define STM32F103_RCC_APB1RSTR_USART2RST_POS    17  /* USART2 reset position */
#define STM32F103_RCC_APB1RSTR_USART3RST_POS    18  /* USART3 reset position */
#define STM32F103_RCC_APB1RSTR_USART4RST_POS    19  /* USART4 reset position */
#define STM32F103_RCC_APB1RSTR_USART5RST_POS    20  /* USART5 reset position */
#define STM32F103_RCC_APB1RSTR_I2C1RST_POS      21  /* I2C1 reset position */
#define STM32F103_RCC_APB1RSTR_I2C2RST_POS      22  /* I2C2 reset position */
#define STM32F103_RCC_APB1RSTR_USBRST_POS       23  /* USB reset position */
#define STM32F103_RCC_APB1RSTR_CANRST_POS       25  /* CAN reset position */
#define STM32F103_RCC_APB1RSTR_BKPRST_POS       27  /* Backup interface reset position */
#define STM32F103_RCC_APB1RSTR_PWRRST_POS       28  /* Power interface reset position */
#define STM32F103_RCC_APB1RSTR_DACRST_POS       29  /* DAC interface reset position */  

/* ***************************************************************************************** */

#define STM32F103_RCC_AHBENR_OFFSET     0x14    /* AHB peripheral clock enable register offset */

#define STM32F103_RCC_AHBENR_DMA1EN_POS     0   /* DMA1 clock enable position */
#define STM32F103_RCC_AHBENR_DMA2EN_POS     1   /* DMA2 clock enable position */
#define STM32F103_RCC_AHBENR_SRAMEN_POS     2   /* SRAM interface clock enable position */
#define STM32F103_RCC_AHBENR_FLITFEN_POS    4   /* FLITF clock enable position */
#define STM32F103_RCC_AHBENR_CRCEN_POS      6   /* CRC clock enable position */
#define STM32F103_RCC_AHBENR_FSMCEN_POS     8   /* FSMC clock enable position */
#define STM32F103_RCC_AHBENR_SDIOEN_POS     10  /* SDIO clock enable position */

/* ***************************************************************************************** */

#define STM32F103_RCC_APB2ENR_OFFSET    0x18    /* APB2 peripheral clock enable register offset */

#define STM32F103_RCC_APB2ENR_AFIOEN_POS    0   /* Alternate function IO clock enable position */
#define STM32F103_RCC_APB2ENR_IOPAEN_POS    2   /* IO port A clock enable position */
#define STM32F103_RCC_APB2ENR_IOPBEN_POS    3   /* IO port B clock enable position */
#define STM32F103_RCC_APB2ENR_IOPCEN_POS    4   /* IO port C clock enable position */
#define STM32F103_RCC_APB2ENR_IOPDEN_POS    5   /* IO port D clock enable position */
#define STM32F103_RCC_APB2ENR_IOPEEN_POS    6   /* IO port E clock enable position */
#define STM32F103_RCC_APB2ENR_IOPFEN_POS    7   /* IO port F clock enable position */
#define STM32F103_RCC_APB2ENR_IOPGEN_POS    8   /* IO port G clock enable position */
#define STM32F103_RCC_APB2ENR_ADC1EN_POS    9   /* ADC 1 interface clock enable position */
#define STM32F103_RCC_APB2ENR_ADC2EN_POS    10  /* ADC 2 interface clock enable position */
#define STM32F103_RCC_APB2ENR_TIM1EN_POS    11  /* TIM1 timer clock enable position */
#define STM32F103_RCC_APB2ENR_SPI1EN_POS    12  /* SPI1 clock enable position */
#define STM32F103_RCC_APB2ENR_TIM8EN_POS    13  /* TIM8 Timer clock enable position */
#define STM32F103_RCC_APB2ENR_USART1EN_POS  14  /* USART1 clock enable position */
#define STM32F103_RCC_APB2ENR_ADC3EN_POS    15  /* ADC3 interface clock enable position */
#define STM32F103_RCC_APB2ENR_TIM9EN_POS    19  /* TIM9 timer clock enable position */
#define STM32F103_RCC_APB2ENR_TIM10EN_POS   20  /* TIM10 timer clock enable position */
#define STM32F103_RCC_APB2ENR_TIM11EN_POS   21  /* TIM11 timer clock enable position */

/* ***************************************************************************************** */

#define STM32F103_RCC_APB1ENR_OFFSET    0x1C    /* APB1 peripheral clock enable register offset */

#define STM32F103_RCC_APB1ENR_TIM2EN_POS    0   /* TIM2 timer clock enable position position */
#define STM32F103_RCC_APB1ENR_TIM3EN_POS    1   /* TIM3 timer clock enable position position */
#define STM32F103_RCC_APB1ENR_TIM4EN_POS    2   /* TIM4 timer clock enable position position */
#define STM32F103_RCC_APB1ENR_TIM5EN_POS    3   /* TIM5 timer clock enable position position */
#define STM32F103_RCC_APB1ENR_TIM6EN_POS    4   /* TIM6 timer clock enable position */
#define STM32F103_RCC_APB1ENR_TIM7EN_POS    5   /* TIM7 timer clock enable position */
#define STM32F103_RCC_APB1ENR_TIM12EN_POS   6   /* TIM12 timer clock enable position */
#define STM32F103_RCC_APB1ENR_TIM13EN_POS   7   /* TIM13 timer clock enable position */
#define STM32F103_RCC_APB1ENR_TIM14EN_POS   8   /* TIM14 timer clock enable position */
#define STM32F103_RCC_APB1ENR_WWDGEN_POS    11  /* Window watchdog clock enable position */
#define STM32F103_RCC_APB1ENR_SPI2EN_POS    14  /* SPI 2 clock enable position */
#define STM32F103_RCC_APB1ENR_SPI3EN_POS    15  /* SPI 3 clock enable position */
#define STM32F103_RCC_APB1ENR_USART2EN_POS  17  /* USART2 clock enable position */
#define STM32F103_RCC_APB1ENR_USART3EN_POS  18  /* USART3 clock enable position */
#define STM32F103_RCC_APB1ENR_USART4EN_POS  19  /* USART4 clock enable position */
#define STM32F103_RCC_APB1ENR_USART5EN_POS  20  /* USART5 clock enable position */
#define STM32F103_RCC_APB1ENR_I2C1EN_POS    21  /* I2C1 clock enable position */
#define STM32F103_RCC_APB1ENR_I2C2EN_POS    22  /* I2C2 clock enable position */
#define STM32F103_RCC_APB1ENR_USBEN_POS     23  /* USB clock enable position */
#define STM32F103_RCC_APB1ENR_CANEN_POS     25  /* CAN clock enable position */
#define STM32F103_RCC_APB1ENR_BKPEN_POS     27  /* Backup interface clock enable position */
#define STM32F103_RCC_APB1ENR_PWREN_POS     28  /* Power interface clock enable position */
#define STM32F103_RCC_APB1ENR_DACEN_POS     29  /* DAC interface clock enable position */

/* ***************************************************************************************** */

#define STM32F103_RCC_BDCR_OFFSET       0x20    /* Backup domain control register offset */

#define STM32F103_RCC_BDCR_LSEON_POS    0   /* External low-speed oscillator enable position */
#define STM32F103_RCC_BDCR_LSERDY_POS   1   /* External low-speed oscillator ready position */
#define STM32F103_RCC_BDCR_LSEBYP_POS   2   /* External low-speed oscillator bypass position */
#define STM32F103_RCC_BDCR_RTCSEL_POS   8   /* RTC clock source selection position */
#define STM32F103_RCC_BDCR_RTCEN_POS    15  /* RTC clock enable position */
#define STM32F103_RCC_BDCR_BDRST_POS    16  /* Backup domain software reset position */

#define STM32F103_RCC_BDCR_RTCSEL_MASK  0x00000300

/* ***************************************************************************************** */

#define STM32F103_RCC_CSR_OFFSET        0x24    /* Control/status register offset */

#define STM32F103_RCC_CSR_LSION_POS     0   /* Internal low-speed oscillator enable position */
#define STM32F103_RCC_CSR_LSIRDY_POS    1   /* Internal low-speed oscillator ready position */
#define STM32F103_RCC_CSR_RMVF_POS      24  /* Remove reset flag position */
#define STM32F103_RCC_CSR_PINRSTF_POS   26  /* PIN reset flag position */
#define STM32F103_RCC_CSR_PORRSTF_POS   27  /* POR/PDR reset flag position */
#define STM32F103_RCC_CSR_STFRSTF_POS   28  /* Software reset flag position */
#define STM32F103_RCC_CSR_IWDDGRSTF_POS 29  /* Independent watchdog reset flag position */
#define STM32F103_RCC_CSR_WWDGRSTF_POS  30  /* Window watchdog reset flag position */
#define STM32F103_RCC_CSR_LPWRRSTF_POS  31  /* Low-power reset flag position */   

/* ***************************************************************************************** */

#define STM32F103_RCC_CR_REG            (*(volatile unsigned int*) (STM32F103_RCC_BASE + STM32F103_RCC_CR_OFFSET))
#define STM32F103_RCC_CFGR_REG          (*(volatile unsigned int*) (STM32F103_RCC_BASE + STM32F103_RCC_CFGR_OFFSET))
#define STM32F103_RCC_CIR_REG           (*(volatile unsigned int*) (STM32F103_RCC_BASE + STM32F103_RCC_CIR_OFFSET))
#define STM32F103_RCC_APB2RSTR_REG      (*(volatile unsigned int*) (STM32F103_RCC_BASE + STM32F103_RCC_APB2RSTR_OFFSET))
#define STM32F103_RCC_APB1RSTR_REG      (*(volatile unsigned int*) (STM32F103_RCC_BASE + STM32F103_RCC_APB1RSTR_OFFSET))
#define STM32F103_RCC_AHBENR_REG        (*(volatile unsigned int*) (STM32F103_RCC_BASE + STM32F103_RCC_AHBENR_OFFSET))
#define STM32F103_RCC_APB2ENR_REG       (*(volatile unsigned int*) (STM32F103_RCC_BASE + STM32F103_RCC_APB2ENR_OFFSET))
#define STM32F103_RCC_APB1ENR_REG       (*(volatile unsigned int*) (STM32F103_RCC_BASE + STM32F103_RCC_APB1ENR_OFFSET))
#define STM32F103_RCC_BDCR_REG          (*(volatile unsigned int*) (STM32F103_RCC_BASE + STM32F103_RCC_BDCR_OFFSET))
#define STM32F103_RCC_CSR_REG           (*(volatile unsigned int*) (STM32F103_RCC_BASE + STM32F103_RCC_CSR_OFFSET))



