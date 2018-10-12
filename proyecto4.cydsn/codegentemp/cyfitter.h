/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* M */
#define M__0__INTTYPE CYREG_PICU2_INTTYPE0
#define M__0__MASK 0x01u
#define M__0__PC CYREG_PRT2_PC0
#define M__0__PORT 2u
#define M__0__SHIFT 0u
#define M__AG CYREG_PRT2_AG
#define M__AMUX CYREG_PRT2_AMUX
#define M__BIE CYREG_PRT2_BIE
#define M__BIT_MASK CYREG_PRT2_BIT_MASK
#define M__BYP CYREG_PRT2_BYP
#define M__CTL CYREG_PRT2_CTL
#define M__DM0 CYREG_PRT2_DM0
#define M__DM1 CYREG_PRT2_DM1
#define M__DM2 CYREG_PRT2_DM2
#define M__DR CYREG_PRT2_DR
#define M__INP_DIS CYREG_PRT2_INP_DIS
#define M__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define M__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define M__LCD_EN CYREG_PRT2_LCD_EN
#define M__MASK 0x01u
#define M__PORT 2u
#define M__PRT CYREG_PRT2_PRT
#define M__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define M__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define M__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define M__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define M__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define M__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define M__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define M__PS CYREG_PRT2_PS
#define M__SHIFT 0u
#define M__SLW CYREG_PRT2_SLW

/* SW */
#define SW__0__INTTYPE CYREG_PICU3_INTTYPE5
#define SW__0__MASK 0x20u
#define SW__0__PC CYREG_PRT3_PC5
#define SW__0__PORT 3u
#define SW__0__SHIFT 5u
#define SW__1__INTTYPE CYREG_PICU3_INTTYPE6
#define SW__1__MASK 0x40u
#define SW__1__PC CYREG_PRT3_PC6
#define SW__1__PORT 3u
#define SW__1__SHIFT 6u
#define SW__2__INTTYPE CYREG_PICU3_INTTYPE7
#define SW__2__MASK 0x80u
#define SW__2__PC CYREG_PRT3_PC7
#define SW__2__PORT 3u
#define SW__2__SHIFT 7u
#define SW__AG CYREG_PRT3_AG
#define SW__AMUX CYREG_PRT3_AMUX
#define SW__BIE CYREG_PRT3_BIE
#define SW__BIT_MASK CYREG_PRT3_BIT_MASK
#define SW__BYP CYREG_PRT3_BYP
#define SW__CTL CYREG_PRT3_CTL
#define SW__DM0 CYREG_PRT3_DM0
#define SW__DM1 CYREG_PRT3_DM1
#define SW__DM2 CYREG_PRT3_DM2
#define SW__DR CYREG_PRT3_DR
#define SW__INP_DIS CYREG_PRT3_INP_DIS
#define SW__INTSTAT CYREG_PICU3_INTSTAT
#define SW__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define SW__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define SW__LCD_EN CYREG_PRT3_LCD_EN
#define SW__MASK 0xE0u
#define SW__PORT 3u
#define SW__PRT CYREG_PRT3_PRT
#define SW__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define SW__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define SW__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define SW__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define SW__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define SW__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define SW__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define SW__PS CYREG_PRT3_PS
#define SW__SHIFT 5u
#define SW__SLW CYREG_PRT3_SLW
#define SW__SNAP CYREG_PICU3_SNAP

/* ADC */
#define ADC_ADC_SAR__CLK CYREG_SAR1_CLK
#define ADC_ADC_SAR__CSR0 CYREG_SAR1_CSR0
#define ADC_ADC_SAR__CSR1 CYREG_SAR1_CSR1
#define ADC_ADC_SAR__CSR2 CYREG_SAR1_CSR2
#define ADC_ADC_SAR__CSR3 CYREG_SAR1_CSR3
#define ADC_ADC_SAR__CSR4 CYREG_SAR1_CSR4
#define ADC_ADC_SAR__CSR5 CYREG_SAR1_CSR5
#define ADC_ADC_SAR__CSR6 CYREG_SAR1_CSR6
#define ADC_ADC_SAR__PM_ACT_CFG CYREG_PM_ACT_CFG11
#define ADC_ADC_SAR__PM_ACT_MSK 0x02u
#define ADC_ADC_SAR__PM_STBY_CFG CYREG_PM_STBY_CFG11
#define ADC_ADC_SAR__PM_STBY_MSK 0x02u
#define ADC_ADC_SAR__SW0 CYREG_SAR1_SW0
#define ADC_ADC_SAR__SW2 CYREG_SAR1_SW2
#define ADC_ADC_SAR__SW3 CYREG_SAR1_SW3
#define ADC_ADC_SAR__SW4 CYREG_SAR1_SW4
#define ADC_ADC_SAR__SW6 CYREG_SAR1_SW6
#define ADC_ADC_SAR__TR0 CYREG_SAR1_TR0
#define ADC_ADC_SAR__WRK0 CYREG_SAR1_WRK0
#define ADC_ADC_SAR__WRK1 CYREG_SAR1_WRK1
#define ADC_Bypass__0__INTTYPE CYREG_PICU0_INTTYPE2
#define ADC_Bypass__0__MASK 0x04u
#define ADC_Bypass__0__PC CYREG_PRT0_PC2
#define ADC_Bypass__0__PORT 0u
#define ADC_Bypass__0__SHIFT 2u
#define ADC_Bypass__AG CYREG_PRT0_AG
#define ADC_Bypass__AMUX CYREG_PRT0_AMUX
#define ADC_Bypass__BIE CYREG_PRT0_BIE
#define ADC_Bypass__BIT_MASK CYREG_PRT0_BIT_MASK
#define ADC_Bypass__BYP CYREG_PRT0_BYP
#define ADC_Bypass__CTL CYREG_PRT0_CTL
#define ADC_Bypass__DM0 CYREG_PRT0_DM0
#define ADC_Bypass__DM1 CYREG_PRT0_DM1
#define ADC_Bypass__DM2 CYREG_PRT0_DM2
#define ADC_Bypass__DR CYREG_PRT0_DR
#define ADC_Bypass__INP_DIS CYREG_PRT0_INP_DIS
#define ADC_Bypass__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define ADC_Bypass__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define ADC_Bypass__LCD_EN CYREG_PRT0_LCD_EN
#define ADC_Bypass__MASK 0x04u
#define ADC_Bypass__PORT 0u
#define ADC_Bypass__PRT CYREG_PRT0_PRT
#define ADC_Bypass__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define ADC_Bypass__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define ADC_Bypass__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define ADC_Bypass__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define ADC_Bypass__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define ADC_Bypass__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define ADC_Bypass__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define ADC_Bypass__PS CYREG_PRT0_PS
#define ADC_Bypass__SHIFT 2u
#define ADC_Bypass__SLW CYREG_PRT0_SLW
#define ADC_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ADC_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ADC_IRQ__INTC_MASK 0x02u
#define ADC_IRQ__INTC_NUMBER 1u
#define ADC_IRQ__INTC_PRIOR_NUM 7u
#define ADC_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_1
#define ADC_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ADC_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define ADC_theACLK__CFG0 CYREG_CLKDIST_ACFG0_CFG0
#define ADC_theACLK__CFG1 CYREG_CLKDIST_ACFG0_CFG1
#define ADC_theACLK__CFG2 CYREG_CLKDIST_ACFG0_CFG2
#define ADC_theACLK__CFG2_SRC_SEL_MASK 0x07u
#define ADC_theACLK__CFG3 CYREG_CLKDIST_ACFG0_CFG3
#define ADC_theACLK__CFG3_PHASE_DLY_MASK 0x0Fu
#define ADC_theACLK__INDEX 0x00u
#define ADC_theACLK__PM_ACT_CFG CYREG_PM_ACT_CFG1
#define ADC_theACLK__PM_ACT_MSK 0x01u
#define ADC_theACLK__PM_STBY_CFG CYREG_PM_STBY_CFG1
#define ADC_theACLK__PM_STBY_MSK 0x01u

/* I2C */
#define I2C_I2C_FF__ADR CYREG_I2C_ADR
#define I2C_I2C_FF__CFG CYREG_I2C_CFG
#define I2C_I2C_FF__CLK_DIV1 CYREG_I2C_CLK_DIV1
#define I2C_I2C_FF__CLK_DIV2 CYREG_I2C_CLK_DIV2
#define I2C_I2C_FF__CSR CYREG_I2C_CSR
#define I2C_I2C_FF__D CYREG_I2C_D
#define I2C_I2C_FF__MCSR CYREG_I2C_MCSR
#define I2C_I2C_FF__PM_ACT_CFG CYREG_PM_ACT_CFG5
#define I2C_I2C_FF__PM_ACT_MSK 0x04u
#define I2C_I2C_FF__PM_STBY_CFG CYREG_PM_STBY_CFG5
#define I2C_I2C_FF__PM_STBY_MSK 0x04u
#define I2C_I2C_FF__TMOUT_CFG0 CYREG_I2C_TMOUT_CFG0
#define I2C_I2C_FF__TMOUT_CFG1 CYREG_I2C_TMOUT_CFG1
#define I2C_I2C_FF__TMOUT_CSR CYREG_I2C_TMOUT_CSR
#define I2C_I2C_FF__TMOUT_SR CYREG_I2C_TMOUT_SR
#define I2C_I2C_FF__XCFG CYREG_I2C_XCFG
#define I2C_I2C_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define I2C_I2C_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define I2C_I2C_IRQ__INTC_MASK 0x8000u
#define I2C_I2C_IRQ__INTC_NUMBER 15u
#define I2C_I2C_IRQ__INTC_PRIOR_NUM 7u
#define I2C_I2C_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_15
#define I2C_I2C_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define I2C_I2C_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* IRS */
#define IRS__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define IRS__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define IRS__INTC_MASK 0x01u
#define IRS__INTC_NUMBER 0u
#define IRS__INTC_PRIOR_NUM 7u
#define IRS__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define IRS__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define IRS__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* LCD */
#define LCD_LCDPort__0__INTTYPE CYREG_PICU12_INTTYPE0
#define LCD_LCDPort__0__MASK 0x01u
#define LCD_LCDPort__0__PC CYREG_PRT12_PC0
#define LCD_LCDPort__0__PORT 12u
#define LCD_LCDPort__0__SHIFT 0u
#define LCD_LCDPort__1__INTTYPE CYREG_PICU12_INTTYPE1
#define LCD_LCDPort__1__MASK 0x02u
#define LCD_LCDPort__1__PC CYREG_PRT12_PC1
#define LCD_LCDPort__1__PORT 12u
#define LCD_LCDPort__1__SHIFT 1u
#define LCD_LCDPort__2__INTTYPE CYREG_PICU12_INTTYPE2
#define LCD_LCDPort__2__MASK 0x04u
#define LCD_LCDPort__2__PC CYREG_PRT12_PC2
#define LCD_LCDPort__2__PORT 12u
#define LCD_LCDPort__2__SHIFT 2u
#define LCD_LCDPort__3__INTTYPE CYREG_PICU12_INTTYPE3
#define LCD_LCDPort__3__MASK 0x08u
#define LCD_LCDPort__3__PC CYREG_PRT12_PC3
#define LCD_LCDPort__3__PORT 12u
#define LCD_LCDPort__3__SHIFT 3u
#define LCD_LCDPort__4__INTTYPE CYREG_PICU12_INTTYPE4
#define LCD_LCDPort__4__MASK 0x10u
#define LCD_LCDPort__4__PC CYREG_PRT12_PC4
#define LCD_LCDPort__4__PORT 12u
#define LCD_LCDPort__4__SHIFT 4u
#define LCD_LCDPort__5__INTTYPE CYREG_PICU12_INTTYPE5
#define LCD_LCDPort__5__MASK 0x20u
#define LCD_LCDPort__5__PC CYREG_PRT12_PC5
#define LCD_LCDPort__5__PORT 12u
#define LCD_LCDPort__5__SHIFT 5u
#define LCD_LCDPort__6__INTTYPE CYREG_PICU12_INTTYPE6
#define LCD_LCDPort__6__MASK 0x40u
#define LCD_LCDPort__6__PC CYREG_PRT12_PC6
#define LCD_LCDPort__6__PORT 12u
#define LCD_LCDPort__6__SHIFT 6u
#define LCD_LCDPort__AG CYREG_PRT12_AG
#define LCD_LCDPort__BIE CYREG_PRT12_BIE
#define LCD_LCDPort__BIT_MASK CYREG_PRT12_BIT_MASK
#define LCD_LCDPort__BYP CYREG_PRT12_BYP
#define LCD_LCDPort__DM0 CYREG_PRT12_DM0
#define LCD_LCDPort__DM1 CYREG_PRT12_DM1
#define LCD_LCDPort__DM2 CYREG_PRT12_DM2
#define LCD_LCDPort__DR CYREG_PRT12_DR
#define LCD_LCDPort__INP_DIS CYREG_PRT12_INP_DIS
#define LCD_LCDPort__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define LCD_LCDPort__MASK 0x7Fu
#define LCD_LCDPort__PORT 12u
#define LCD_LCDPort__PRT CYREG_PRT12_PRT
#define LCD_LCDPort__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define LCD_LCDPort__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define LCD_LCDPort__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define LCD_LCDPort__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define LCD_LCDPort__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define LCD_LCDPort__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define LCD_LCDPort__PS CYREG_PRT12_PS
#define LCD_LCDPort__SHIFT 0u
#define LCD_LCDPort__SIO_CFG CYREG_PRT12_SIO_CFG
#define LCD_LCDPort__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define LCD_LCDPort__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define LCD_LCDPort__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define LCD_LCDPort__SLW CYREG_PRT12_SLW

/* SCL */
#define SCL__0__INTTYPE CYREG_PICU2_INTTYPE2
#define SCL__0__MASK 0x04u
#define SCL__0__PC CYREG_PRT2_PC2
#define SCL__0__PORT 2u
#define SCL__0__SHIFT 2u
#define SCL__AG CYREG_PRT2_AG
#define SCL__AMUX CYREG_PRT2_AMUX
#define SCL__BIE CYREG_PRT2_BIE
#define SCL__BIT_MASK CYREG_PRT2_BIT_MASK
#define SCL__BYP CYREG_PRT2_BYP
#define SCL__CTL CYREG_PRT2_CTL
#define SCL__DM0 CYREG_PRT2_DM0
#define SCL__DM1 CYREG_PRT2_DM1
#define SCL__DM2 CYREG_PRT2_DM2
#define SCL__DR CYREG_PRT2_DR
#define SCL__INP_DIS CYREG_PRT2_INP_DIS
#define SCL__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define SCL__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define SCL__LCD_EN CYREG_PRT2_LCD_EN
#define SCL__MASK 0x04u
#define SCL__PORT 2u
#define SCL__PRT CYREG_PRT2_PRT
#define SCL__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define SCL__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define SCL__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define SCL__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define SCL__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define SCL__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define SCL__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define SCL__PS CYREG_PRT2_PS
#define SCL__SHIFT 2u
#define SCL__SLW CYREG_PRT2_SLW

/* SDA */
#define SDA__0__INTTYPE CYREG_PICU2_INTTYPE3
#define SDA__0__MASK 0x08u
#define SDA__0__PC CYREG_PRT2_PC3
#define SDA__0__PORT 2u
#define SDA__0__SHIFT 3u
#define SDA__AG CYREG_PRT2_AG
#define SDA__AMUX CYREG_PRT2_AMUX
#define SDA__BIE CYREG_PRT2_BIE
#define SDA__BIT_MASK CYREG_PRT2_BIT_MASK
#define SDA__BYP CYREG_PRT2_BYP
#define SDA__CTL CYREG_PRT2_CTL
#define SDA__DM0 CYREG_PRT2_DM0
#define SDA__DM1 CYREG_PRT2_DM1
#define SDA__DM2 CYREG_PRT2_DM2
#define SDA__DR CYREG_PRT2_DR
#define SDA__INP_DIS CYREG_PRT2_INP_DIS
#define SDA__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define SDA__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define SDA__LCD_EN CYREG_PRT2_LCD_EN
#define SDA__MASK 0x08u
#define SDA__PORT 2u
#define SDA__PRT CYREG_PRT2_PRT
#define SDA__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define SDA__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define SDA__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define SDA__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define SDA__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define SDA__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define SDA__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define SDA__PS CYREG_PRT2_PS
#define SDA__SHIFT 3u
#define SDA__SLW CYREG_PRT2_SLW

/* Rx_1 */
#define Rx_1__0__INTTYPE CYREG_PICU0_INTTYPE0
#define Rx_1__0__MASK 0x01u
#define Rx_1__0__PC CYREG_PRT0_PC0
#define Rx_1__0__PORT 0u
#define Rx_1__0__SHIFT 0u
#define Rx_1__AG CYREG_PRT0_AG
#define Rx_1__AMUX CYREG_PRT0_AMUX
#define Rx_1__BIE CYREG_PRT0_BIE
#define Rx_1__BIT_MASK CYREG_PRT0_BIT_MASK
#define Rx_1__BYP CYREG_PRT0_BYP
#define Rx_1__CTL CYREG_PRT0_CTL
#define Rx_1__DM0 CYREG_PRT0_DM0
#define Rx_1__DM1 CYREG_PRT0_DM1
#define Rx_1__DM2 CYREG_PRT0_DM2
#define Rx_1__DR CYREG_PRT0_DR
#define Rx_1__INP_DIS CYREG_PRT0_INP_DIS
#define Rx_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define Rx_1__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Rx_1__LCD_EN CYREG_PRT0_LCD_EN
#define Rx_1__MASK 0x01u
#define Rx_1__PORT 0u
#define Rx_1__PRT CYREG_PRT0_PRT
#define Rx_1__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Rx_1__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Rx_1__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Rx_1__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Rx_1__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Rx_1__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Rx_1__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Rx_1__PS CYREG_PRT0_PS
#define Rx_1__SHIFT 0u
#define Rx_1__SLW CYREG_PRT0_SLW

/* Tx_1 */
#define Tx_1__0__INTTYPE CYREG_PICU0_INTTYPE1
#define Tx_1__0__MASK 0x02u
#define Tx_1__0__PC CYREG_PRT0_PC1
#define Tx_1__0__PORT 0u
#define Tx_1__0__SHIFT 1u
#define Tx_1__AG CYREG_PRT0_AG
#define Tx_1__AMUX CYREG_PRT0_AMUX
#define Tx_1__BIE CYREG_PRT0_BIE
#define Tx_1__BIT_MASK CYREG_PRT0_BIT_MASK
#define Tx_1__BYP CYREG_PRT0_BYP
#define Tx_1__CTL CYREG_PRT0_CTL
#define Tx_1__DM0 CYREG_PRT0_DM0
#define Tx_1__DM1 CYREG_PRT0_DM1
#define Tx_1__DM2 CYREG_PRT0_DM2
#define Tx_1__DR CYREG_PRT0_DR
#define Tx_1__INP_DIS CYREG_PRT0_INP_DIS
#define Tx_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define Tx_1__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Tx_1__LCD_EN CYREG_PRT0_LCD_EN
#define Tx_1__MASK 0x02u
#define Tx_1__PORT 0u
#define Tx_1__PRT CYREG_PRT0_PRT
#define Tx_1__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Tx_1__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Tx_1__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Tx_1__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Tx_1__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Tx_1__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Tx_1__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Tx_1__PS CYREG_PRT0_PS
#define Tx_1__SHIFT 1u
#define Tx_1__SLW CYREG_PRT0_SLW

/* UART */
#define UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB05_06_ACTL
#define UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB05_06_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB05_06_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB05_06_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG CYREG_B0_UDB05_06_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG CYREG_B0_UDB05_06_MSK
#define UART_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG CYREG_B0_UDB05_06_MSK
#define UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG CYREG_B0_UDB05_06_MSK
#define UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB05_06_MSK
#define UART_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG CYREG_B0_UDB05_ACTL
#define UART_BUART_sRX_RxBitCounter__CONTROL_REG CYREG_B0_UDB05_CTL
#define UART_BUART_sRX_RxBitCounter__CONTROL_ST_REG CYREG_B0_UDB05_ST_CTL
#define UART_BUART_sRX_RxBitCounter__COUNT_REG CYREG_B0_UDB05_CTL
#define UART_BUART_sRX_RxBitCounter__COUNT_ST_REG CYREG_B0_UDB05_ST_CTL
#define UART_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB05_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG CYREG_B0_UDB05_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter__PERIOD_REG CYREG_B0_UDB05_MSK
#define UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB05_06_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG CYREG_B0_UDB05_06_ST
#define UART_BUART_sRX_RxBitCounter_ST__MASK_REG CYREG_B0_UDB05_MSK
#define UART_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B0_UDB05_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B0_UDB05_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG CYREG_B0_UDB05_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG CYREG_B0_UDB05_ST_CTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG CYREG_B0_UDB05_ST_CTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_REG CYREG_B0_UDB05_ST
#define UART_BUART_sRX_RxShifter_u0__16BIT_A0_REG CYREG_B0_UDB05_06_A0
#define UART_BUART_sRX_RxShifter_u0__16BIT_A1_REG CYREG_B0_UDB05_06_A1
#define UART_BUART_sRX_RxShifter_u0__16BIT_D0_REG CYREG_B0_UDB05_06_D0
#define UART_BUART_sRX_RxShifter_u0__16BIT_D1_REG CYREG_B0_UDB05_06_D1
#define UART_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB05_06_ACTL
#define UART_BUART_sRX_RxShifter_u0__16BIT_F0_REG CYREG_B0_UDB05_06_F0
#define UART_BUART_sRX_RxShifter_u0__16BIT_F1_REG CYREG_B0_UDB05_06_F1
#define UART_BUART_sRX_RxShifter_u0__A0_A1_REG CYREG_B0_UDB05_A0_A1
#define UART_BUART_sRX_RxShifter_u0__A0_REG CYREG_B0_UDB05_A0
#define UART_BUART_sRX_RxShifter_u0__A1_REG CYREG_B0_UDB05_A1
#define UART_BUART_sRX_RxShifter_u0__D0_D1_REG CYREG_B0_UDB05_D0_D1
#define UART_BUART_sRX_RxShifter_u0__D0_REG CYREG_B0_UDB05_D0
#define UART_BUART_sRX_RxShifter_u0__D1_REG CYREG_B0_UDB05_D1
#define UART_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB05_ACTL
#define UART_BUART_sRX_RxShifter_u0__F0_F1_REG CYREG_B0_UDB05_F0_F1
#define UART_BUART_sRX_RxShifter_u0__F0_REG CYREG_B0_UDB05_F0
#define UART_BUART_sRX_RxShifter_u0__F1_REG CYREG_B0_UDB05_F1
#define UART_BUART_sRX_RxShifter_u0__MSK_DP_AUX_CTL_REG CYREG_B0_UDB05_MSK_ACTL
#define UART_BUART_sRX_RxShifter_u0__PER_DP_AUX_CTL_REG CYREG_B0_UDB05_MSK_ACTL
#define UART_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB00_01_ACTL
#define UART_BUART_sRX_RxSts__16BIT_STATUS_REG CYREG_B0_UDB00_01_ST
#define UART_BUART_sRX_RxSts__3__MASK 0x08u
#define UART_BUART_sRX_RxSts__3__POS 3
#define UART_BUART_sRX_RxSts__4__MASK 0x10u
#define UART_BUART_sRX_RxSts__4__POS 4
#define UART_BUART_sRX_RxSts__5__MASK 0x20u
#define UART_BUART_sRX_RxSts__5__POS 5
#define UART_BUART_sRX_RxSts__MASK 0x38u
#define UART_BUART_sRX_RxSts__MASK_REG CYREG_B0_UDB00_MSK
#define UART_BUART_sRX_RxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB00_ACTL
#define UART_BUART_sRX_RxSts__STATUS_REG CYREG_B0_UDB00_ST
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG CYREG_B0_UDB00_01_A0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG CYREG_B0_UDB00_01_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG CYREG_B0_UDB00_01_D0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG CYREG_B0_UDB00_01_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB00_01_ACTL
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG CYREG_B0_UDB00_01_F0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG CYREG_B0_UDB00_01_F1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_B0_UDB00_A0_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_B0_UDB00_A0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_B0_UDB00_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_B0_UDB00_D0_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_B0_UDB00_D0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_B0_UDB00_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_B0_UDB00_ACTL
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_B0_UDB00_F0_F1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_B0_UDB00_F0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_B0_UDB00_F1
#define UART_BUART_sTX_TxShifter_u0__16BIT_A0_REG CYREG_B0_UDB01_02_A0
#define UART_BUART_sTX_TxShifter_u0__16BIT_A1_REG CYREG_B0_UDB01_02_A1
#define UART_BUART_sTX_TxShifter_u0__16BIT_D0_REG CYREG_B0_UDB01_02_D0
#define UART_BUART_sTX_TxShifter_u0__16BIT_D1_REG CYREG_B0_UDB01_02_D1
#define UART_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB01_02_ACTL
#define UART_BUART_sTX_TxShifter_u0__16BIT_F0_REG CYREG_B0_UDB01_02_F0
#define UART_BUART_sTX_TxShifter_u0__16BIT_F1_REG CYREG_B0_UDB01_02_F1
#define UART_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_B0_UDB01_A0_A1
#define UART_BUART_sTX_TxShifter_u0__A0_REG CYREG_B0_UDB01_A0
#define UART_BUART_sTX_TxShifter_u0__A1_REG CYREG_B0_UDB01_A1
#define UART_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_B0_UDB01_D0_D1
#define UART_BUART_sTX_TxShifter_u0__D0_REG CYREG_B0_UDB01_D0
#define UART_BUART_sTX_TxShifter_u0__D1_REG CYREG_B0_UDB01_D1
#define UART_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB01_ACTL
#define UART_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_B0_UDB01_F0_F1
#define UART_BUART_sTX_TxShifter_u0__F0_REG CYREG_B0_UDB01_F0
#define UART_BUART_sTX_TxShifter_u0__F1_REG CYREG_B0_UDB01_F1
#define UART_BUART_sTX_TxSts__0__MASK 0x01u
#define UART_BUART_sTX_TxSts__0__POS 0
#define UART_BUART_sTX_TxSts__1__MASK 0x02u
#define UART_BUART_sTX_TxSts__1__POS 1
#define UART_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB01_02_ACTL
#define UART_BUART_sTX_TxSts__16BIT_STATUS_REG CYREG_B0_UDB01_02_ST
#define UART_BUART_sTX_TxSts__2__MASK 0x04u
#define UART_BUART_sTX_TxSts__2__POS 2
#define UART_BUART_sTX_TxSts__3__MASK 0x08u
#define UART_BUART_sTX_TxSts__3__POS 3
#define UART_BUART_sTX_TxSts__MASK 0x0Fu
#define UART_BUART_sTX_TxSts__MASK_REG CYREG_B0_UDB01_MSK
#define UART_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB01_ACTL
#define UART_BUART_sTX_TxSts__STATUS_REG CYREG_B0_UDB01_ST
#define UART_IntClock__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define UART_IntClock__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define UART_IntClock__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define UART_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define UART_IntClock__INDEX 0x00u
#define UART_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define UART_IntClock__PM_ACT_MSK 0x01u
#define UART_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define UART_IntClock__PM_STBY_MSK 0x01u

/* ISR_SW */
#define ISR_SW__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ISR_SW__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ISR_SW__INTC_MASK 0x80u
#define ISR_SW__INTC_NUMBER 7u
#define ISR_SW__INTC_PRIOR_NUM 7u
#define ISR_SW__INTC_PRIOR_REG CYREG_NVIC_PRI_7
#define ISR_SW__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ISR_SW__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* timer_clock */
#define timer_clock__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define timer_clock__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define timer_clock__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define timer_clock__CFG2_SRC_SEL_MASK 0x07u
#define timer_clock__INDEX 0x01u
#define timer_clock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define timer_clock__PM_ACT_MSK 0x02u
#define timer_clock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define timer_clock__PM_STBY_MSK 0x02u

/* Timer_TimerHW */
#define Timer_TimerHW__CAP0 CYREG_TMR0_CAP0
#define Timer_TimerHW__CAP1 CYREG_TMR0_CAP1
#define Timer_TimerHW__CFG0 CYREG_TMR0_CFG0
#define Timer_TimerHW__CFG1 CYREG_TMR0_CFG1
#define Timer_TimerHW__CFG2 CYREG_TMR0_CFG2
#define Timer_TimerHW__CNT_CMP0 CYREG_TMR0_CNT_CMP0
#define Timer_TimerHW__CNT_CMP1 CYREG_TMR0_CNT_CMP1
#define Timer_TimerHW__PER0 CYREG_TMR0_PER0
#define Timer_TimerHW__PER1 CYREG_TMR0_PER1
#define Timer_TimerHW__PM_ACT_CFG CYREG_PM_ACT_CFG3
#define Timer_TimerHW__PM_ACT_MSK 0x01u
#define Timer_TimerHW__PM_STBY_CFG CYREG_PM_STBY_CFG3
#define Timer_TimerHW__PM_STBY_MSK 0x01u
#define Timer_TimerHW__RT0 CYREG_TMR0_RT0
#define Timer_TimerHW__RT1 CYREG_TMR0_RT1
#define Timer_TimerHW__SR0 CYREG_TMR0_SR0

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "proyecto4"
#define CY_VERSION "PSoC Creator  4.2"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 18u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 18u
#define CYDEV_CHIP_MEMBER_4D 13u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 19u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 17u
#define CYDEV_CHIP_MEMBER_4I 23u
#define CYDEV_CHIP_MEMBER_4J 14u
#define CYDEV_CHIP_MEMBER_4K 15u
#define CYDEV_CHIP_MEMBER_4L 22u
#define CYDEV_CHIP_MEMBER_4M 21u
#define CYDEV_CHIP_MEMBER_4N 10u
#define CYDEV_CHIP_MEMBER_4O 7u
#define CYDEV_CHIP_MEMBER_4P 20u
#define CYDEV_CHIP_MEMBER_4Q 12u
#define CYDEV_CHIP_MEMBER_4R 8u
#define CYDEV_CHIP_MEMBER_4S 11u
#define CYDEV_CHIP_MEMBER_4T 9u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 16u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 24u
#define CYDEV_CHIP_MEMBER_FM3 28u
#define CYDEV_CHIP_MEMBER_FM4 29u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 26u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 27u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00008003u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
