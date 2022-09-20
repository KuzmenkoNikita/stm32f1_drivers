#define STM32F103_RCC_BASE              0x40023000 /*start addres of the RCC registers */

#define STM32F103_RCC_CR_OFFSET         0x00    /* Clock control register offset */ 
#define STM32F103_RCC_CFGR_OFFSET       0x04    /* Clock configuration register  offset */
#define STM32F103_RCC_CIR_OFFSET        0x08    /* Clock interrupt register offset */
#define STM32F103_RCC_APB2RSTR_OFFSET   0x0C    /* APB2 peripheral reset register offset */
#define STM32F103_RCC_APB1RSTR_OFFSET   0x10    /* APB1 peripheral reset register offset */
#define STM32F103_RCC_AHBENR_OFFSET     0x14    /* AHB peripheral clock enable register offset */
#define STM32F103_RCC_APB2ENR_OFFSET    0x18    /* APB2 peripheral clock enable register offset */
#define STM32F103_RCC_APB1ENR_OFFSET    0x1C    /* APB1 peripheral clock enable register offset */
#define STM32F103_RCC_BDCR_OFFSET       0x20    /* Backup domain control register offset */
#define STM32F103_RCC_CSR_OFFSET        0x24    /* Control/status register offset */


#define STM32F103_RCC_CR_REG    (*(volatile unsigned int*) (STM32F103_RCC_BASE + STM32F103_RCC_CR_OFFSET))

