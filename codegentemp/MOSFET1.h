/*******************************************************************************
* File Name: MOSFET1.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_MOSFET1_H) /* Pins MOSFET1_H */
#define CY_PINS_MOSFET1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "MOSFET1_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    MOSFET1_Write(uint8 value) ;
void    MOSFET1_SetDriveMode(uint8 mode) ;
uint8   MOSFET1_ReadDataReg(void) ;
uint8   MOSFET1_Read(void) ;
uint8   MOSFET1_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define MOSFET1_DRIVE_MODE_BITS        (3)
#define MOSFET1_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - MOSFET1_DRIVE_MODE_BITS))

#define MOSFET1_DM_ALG_HIZ         (0x00u)
#define MOSFET1_DM_DIG_HIZ         (0x01u)
#define MOSFET1_DM_RES_UP          (0x02u)
#define MOSFET1_DM_RES_DWN         (0x03u)
#define MOSFET1_DM_OD_LO           (0x04u)
#define MOSFET1_DM_OD_HI           (0x05u)
#define MOSFET1_DM_STRONG          (0x06u)
#define MOSFET1_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define MOSFET1_MASK               MOSFET1__MASK
#define MOSFET1_SHIFT              MOSFET1__SHIFT
#define MOSFET1_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define MOSFET1_PS                     (* (reg32 *) MOSFET1__PS)
/* Port Configuration */
#define MOSFET1_PC                     (* (reg32 *) MOSFET1__PC)
/* Data Register */
#define MOSFET1_DR                     (* (reg32 *) MOSFET1__DR)
/* Input Buffer Disable Override */
#define MOSFET1_INP_DIS                (* (reg32 *) MOSFET1__PC2)


#if defined(MOSFET1__INTSTAT)  /* Interrupt Registers */

    #define MOSFET1_INTSTAT                (* (reg32 *) MOSFET1__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define MOSFET1_DRIVE_MODE_SHIFT       (0x00u)
#define MOSFET1_DRIVE_MODE_MASK        (0x07u << MOSFET1_DRIVE_MODE_SHIFT)


#endif /* End Pins MOSFET1_H */


/* [] END OF FILE */
