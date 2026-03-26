/*******************************************************************************
* File Name: R_2.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_R_2_ALIASES_H) /* Pins R_2_ALIASES_H */
#define CY_PINS_R_2_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define R_2_0			(R_2__0__PC)
#define R_2_0_PS		(R_2__0__PS)
#define R_2_0_PC		(R_2__0__PC)
#define R_2_0_DR		(R_2__0__DR)
#define R_2_0_SHIFT	(R_2__0__SHIFT)
#define R_2_0_INTR	((uint16)((uint16)0x0003u << (R_2__0__SHIFT*2u)))

#define R_2_INTR_ALL	 ((uint16)(R_2_0_INTR))


#endif /* End Pins R_2_ALIASES_H */


/* [] END OF FILE */
