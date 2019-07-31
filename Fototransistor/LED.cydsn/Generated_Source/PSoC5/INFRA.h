/*******************************************************************************
* File Name: INFRA.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_INFRA_H) /* Pins INFRA_H */
#define CY_PINS_INFRA_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "INFRA_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 INFRA__PORT == 15 && ((INFRA__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    INFRA_Write(uint8 value);
void    INFRA_SetDriveMode(uint8 mode);
uint8   INFRA_ReadDataReg(void);
uint8   INFRA_Read(void);
void    INFRA_SetInterruptMode(uint16 position, uint16 mode);
uint8   INFRA_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the INFRA_SetDriveMode() function.
     *  @{
     */
        #define INFRA_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define INFRA_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define INFRA_DM_RES_UP          PIN_DM_RES_UP
        #define INFRA_DM_RES_DWN         PIN_DM_RES_DWN
        #define INFRA_DM_OD_LO           PIN_DM_OD_LO
        #define INFRA_DM_OD_HI           PIN_DM_OD_HI
        #define INFRA_DM_STRONG          PIN_DM_STRONG
        #define INFRA_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define INFRA_MASK               INFRA__MASK
#define INFRA_SHIFT              INFRA__SHIFT
#define INFRA_WIDTH              1u

/* Interrupt constants */
#if defined(INFRA__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in INFRA_SetInterruptMode() function.
     *  @{
     */
        #define INFRA_INTR_NONE      (uint16)(0x0000u)
        #define INFRA_INTR_RISING    (uint16)(0x0001u)
        #define INFRA_INTR_FALLING   (uint16)(0x0002u)
        #define INFRA_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define INFRA_INTR_MASK      (0x01u) 
#endif /* (INFRA__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define INFRA_PS                     (* (reg8 *) INFRA__PS)
/* Data Register */
#define INFRA_DR                     (* (reg8 *) INFRA__DR)
/* Port Number */
#define INFRA_PRT_NUM                (* (reg8 *) INFRA__PRT) 
/* Connect to Analog Globals */                                                  
#define INFRA_AG                     (* (reg8 *) INFRA__AG)                       
/* Analog MUX bux enable */
#define INFRA_AMUX                   (* (reg8 *) INFRA__AMUX) 
/* Bidirectional Enable */                                                        
#define INFRA_BIE                    (* (reg8 *) INFRA__BIE)
/* Bit-mask for Aliased Register Access */
#define INFRA_BIT_MASK               (* (reg8 *) INFRA__BIT_MASK)
/* Bypass Enable */
#define INFRA_BYP                    (* (reg8 *) INFRA__BYP)
/* Port wide control signals */                                                   
#define INFRA_CTL                    (* (reg8 *) INFRA__CTL)
/* Drive Modes */
#define INFRA_DM0                    (* (reg8 *) INFRA__DM0) 
#define INFRA_DM1                    (* (reg8 *) INFRA__DM1)
#define INFRA_DM2                    (* (reg8 *) INFRA__DM2) 
/* Input Buffer Disable Override */
#define INFRA_INP_DIS                (* (reg8 *) INFRA__INP_DIS)
/* LCD Common or Segment Drive */
#define INFRA_LCD_COM_SEG            (* (reg8 *) INFRA__LCD_COM_SEG)
/* Enable Segment LCD */
#define INFRA_LCD_EN                 (* (reg8 *) INFRA__LCD_EN)
/* Slew Rate Control */
#define INFRA_SLW                    (* (reg8 *) INFRA__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define INFRA_PRTDSI__CAPS_SEL       (* (reg8 *) INFRA__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define INFRA_PRTDSI__DBL_SYNC_IN    (* (reg8 *) INFRA__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define INFRA_PRTDSI__OE_SEL0        (* (reg8 *) INFRA__PRTDSI__OE_SEL0) 
#define INFRA_PRTDSI__OE_SEL1        (* (reg8 *) INFRA__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define INFRA_PRTDSI__OUT_SEL0       (* (reg8 *) INFRA__PRTDSI__OUT_SEL0) 
#define INFRA_PRTDSI__OUT_SEL1       (* (reg8 *) INFRA__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define INFRA_PRTDSI__SYNC_OUT       (* (reg8 *) INFRA__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(INFRA__SIO_CFG)
    #define INFRA_SIO_HYST_EN        (* (reg8 *) INFRA__SIO_HYST_EN)
    #define INFRA_SIO_REG_HIFREQ     (* (reg8 *) INFRA__SIO_REG_HIFREQ)
    #define INFRA_SIO_CFG            (* (reg8 *) INFRA__SIO_CFG)
    #define INFRA_SIO_DIFF           (* (reg8 *) INFRA__SIO_DIFF)
#endif /* (INFRA__SIO_CFG) */

/* Interrupt Registers */
#if defined(INFRA__INTSTAT)
    #define INFRA_INTSTAT            (* (reg8 *) INFRA__INTSTAT)
    #define INFRA_SNAP               (* (reg8 *) INFRA__SNAP)
    
	#define INFRA_0_INTTYPE_REG 		(* (reg8 *) INFRA__0__INTTYPE)
#endif /* (INFRA__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_INFRA_H */


/* [] END OF FILE */
