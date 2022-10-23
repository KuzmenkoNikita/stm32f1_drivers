#include "stm32f103_rcc.h"
#include "stm32f103_rcc_reg.h"
#include "common_macros.h"
#include <stdint.h>
/* ************************************************************************************ */
static void stm32f103_rcc_enabe_HSE(bool bypass)
{
    if(bypass)
    {
        DRV_SET_BIT(STM32F103_RCC_CR_REG, STM32F103_RCC_CR_HSEBYP_POS); 
    }
    else
    {
        DRV_CLEAR_BIT(STM32F103_RCC_CR_REG, STM32F103_RCC_CR_HSEBYP_POS); 
    }

    DRV_SET_BIT(STM32F103_RCC_CR_REG, STM32F103_RCC_CR_HSEON_POS);

    while(!(STM32F103_RCC_CR_REG & (1 << STM32F103_RCC_CR_HSERDY_POS)));
} 
/* ************************************************************************************ */
static void stm32f103_rcc_enabe_HSI(void)
{
    STM32F103_RCC_CR_REG |= (1 << STM32F103_RCC_CR_HSION_POS);

    while(!(STM32F103_RCC_CR_REG & (1 << STM32F103_RCC_CR_HSION_POS)));
}
/* ************************************************************************************ */
void stm32f103_rcc_config_pll(stm32f103_rcc_pll_src clk_src, stm32f103_rcc_pll_mul pll_mul, 
                            stm32f103_rcc_usb_div usb_prescaler, bool is_hse_bypass)
{
    switch (clk_src)
    {
        case RCC_PLLSRC_HSI_DIV_2:
        {
            stm32f103_rcc_enabe_HSI();

            STM32F103_RCC_CFGR_REG &= ~(1 << STM32F103_RCC_CFGR_PLLSRC_POS);

            break;
        }

        case RCC_PLLSRC_HSE:
        {
            stm32f103_rcc_enabe_HSE(is_hse_bypass);

            STM32F103_RCC_CFGR_REG |= (1 << STM32F103_RCC_CFGR_PLLSRC_POS);

            STM32F103_RCC_CFGR_REG &= ~(1 << STM32F103_RCC_CFGR_PLLXTPRE_POS);

            break;
        }

        case RCC_PLLSRC_HSE_DIV_2:
        {
            stm32f103_rcc_enabe_HSE(is_hse_bypass);

            STM32F103_RCC_CFGR_REG |= (1 << STM32F103_RCC_CFGR_PLLSRC_POS);

            STM32F103_RCC_CFGR_REG |= (1 << STM32F103_RCC_CFGR_PLLXTPRE_POS);

            break;
        }

        default:
        {
            return;
        }
    }

    uint32_t pll_mul_val = 0;

    switch (pll_mul)
    {
        case RCC_PLLMUL_2:
        {
            pll_mul_val = 0;

            break;
        }

        case RCC_PLLMUL_3:
        {
            pll_mul_val = 1;

            break;
        }

        case RCC_PLLMUL_4:
        {
            pll_mul_val = 2;

            break;
        }

        case RCC_PLLMUL_5:
        {
            pll_mul_val = 3;

            break;
        }

        case RCC_PLLMUL_6:
        {
            pll_mul_val = 4;

            break;
        }

        case RCC_PLLMUL_7:
        {
            pll_mul_val = 5;

            break;
        }

        case RCC_PLLMUL_8:
        {
            pll_mul_val = 6;

            break;
        }

        case RCC_PLLMUL_9:
        {
            pll_mul_val = 7;

            break;
        }

        case RCC_PLLMUL_10:
        {
            pll_mul_val = 8;

            break;
        }

        case RCC_PLLMUL_11:
        {
            pll_mul_val = 9;

            break;
        }

        case RCC_PLLMUL_12:
        {
            pll_mul_val = 10;

            break;
        }

        case RCC_PLLMUL_13:
        {
            pll_mul_val = 11;

            break;
        }

        case RCC_PLLMUL_14:
        {
            pll_mul_val = 12;

            break;
        }

        case RCC_PLLMUL_15:
        {
            pll_mul_val = 13;

            break;
        }

        case RCC_PLLMUL_16:
        {
            pll_mul_val = 14;

            break;
        }

        default:
        {
            return;
        }
    }

    STM32F103_RCC_CFGR_REG |= (pll_mul_val << STM32F103_RCC_CFGR_PLLMUL_POS);

    switch(usb_prescaler)
    {
        case RCC_USBPRESCALER_PLLCLK_NO_DIV:
        {
            STM32F103_RCC_CFGR_REG |= (1 << STM32F103_RCC_CFGR_USBPRE_POS);
            
            break;
        }   

        case RCC_USBPRESCALER_PLLCLK_DIV_BY_1_5:
        {
            STM32F103_RCC_CFGR_REG &= ~(1 << STM32F103_RCC_CFGR_USBPRE_POS);

            break;
        }   

        default:
        {
            return;
        }
    }
}