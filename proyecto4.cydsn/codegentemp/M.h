/*******************************************************************************
* File Name: M.h  
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

#if !defined(CY_PINS_M_H) /* Pins M_H */
#define CY_PINS_M_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "M_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 M__PORT == 15 && ((M__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    M_Write(uint8 value);
void    M_SetDriveMode(uint8 mode);
uint8   M_ReadDataReg(void);
uint8   M_Read(void);
void    M_SetInterruptMode(uint16 position, uint16 mode);
uint8   M_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the M_SetDriveMode() function.
     *  @{
     */
        #define M_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define M_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define M_DM_RES_UP          PIN_DM_RES_UP
        #define M_DM_RES_DWN         PIN_DM_RES_DWN
        #define M_DM_OD_LO           PIN_DM_OD_LO
        #define M_DM_OD_HI           PIN_DM_OD_HI
        #define M_DM_STRONG          PIN_DM_STRONG
        #define M_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define M_MASK               M__MASK
#define M_SHIFT              M__SHIFT
#define M_WIDTH              1u

/* Interrupt constants */
#if defined(M__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in M_SetInterruptMode() function.
     *  @{
     */
        #define M_INTR_NONE      (uint16)(0x0000u)
        #define M_INTR_RISING    (uint16)(0x0001u)
        #define M_INTR_FALLING   (uint16)(0x0002u)
        #define M_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define M_INTR_MASK      (0x01u) 
#endif /* (M__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define M_PS                     (* (reg8 *) M__PS)
/* Data Register */
#define M_DR                     (* (reg8 *) M__DR)
/* Port Number */
#define M_PRT_NUM                (* (reg8 *) M__PRT) 
/* Connect to Analog Globals */                                                  
#define M_AG                     (* (reg8 *) M__AG)                       
/* Analog MUX bux enable */
#define M_AMUX                   (* (reg8 *) M__AMUX) 
/* Bidirectional Enable */                                                        
#define M_BIE                    (* (reg8 *) M__BIE)
/* Bit-mask for Aliased Register Access */
#define M_BIT_MASK               (* (reg8 *) M__BIT_MASK)
/* Bypass Enable */
#define M_BYP                    (* (reg8 *) M__BYP)
/* Port wide control signals */                                                   
#define M_CTL                    (* (reg8 *) M__CTL)
/* Drive Modes */
#define M_DM0                    (* (reg8 *) M__DM0) 
#define M_DM1                    (* (reg8 *) M__DM1)
#define M_DM2                    (* (reg8 *) M__DM2) 
/* Input Buffer Disable Override */
#define M_INP_DIS                (* (reg8 *) M__INP_DIS)
/* LCD Common or Segment Drive */
#define M_LCD_COM_SEG            (* (reg8 *) M__LCD_COM_SEG)
/* Enable Segment LCD */
#define M_LCD_EN                 (* (reg8 *) M__LCD_EN)
/* Slew Rate Control */
#define M_SLW                    (* (reg8 *) M__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define M_PRTDSI__CAPS_SEL       (* (reg8 *) M__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define M_PRTDSI__DBL_SYNC_IN    (* (reg8 *) M__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define M_PRTDSI__OE_SEL0        (* (reg8 *) M__PRTDSI__OE_SEL0) 
#define M_PRTDSI__OE_SEL1        (* (reg8 *) M__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define M_PRTDSI__OUT_SEL0       (* (reg8 *) M__PRTDSI__OUT_SEL0) 
#define M_PRTDSI__OUT_SEL1       (* (reg8 *) M__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define M_PRTDSI__SYNC_OUT       (* (reg8 *) M__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(M__SIO_CFG)
    #define M_SIO_HYST_EN        (* (reg8 *) M__SIO_HYST_EN)
    #define M_SIO_REG_HIFREQ     (* (reg8 *) M__SIO_REG_HIFREQ)
    #define M_SIO_CFG            (* (reg8 *) M__SIO_CFG)
    #define M_SIO_DIFF           (* (reg8 *) M__SIO_DIFF)
#endif /* (M__SIO_CFG) */

/* Interrupt Registers */
#if defined(M__INTSTAT)
    #define M_INTSTAT            (* (reg8 *) M__INTSTAT)
    #define M_SNAP               (* (reg8 *) M__SNAP)
    
	#define M_0_INTTYPE_REG 		(* (reg8 *) M__0__INTTYPE)
#endif /* (M__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_M_H */


/* [] END OF FILE */
