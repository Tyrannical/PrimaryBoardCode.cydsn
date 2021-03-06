.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu_trm.inc"

/* LED1 */
.set LED1__0__DR, CYREG_GPIO_PRT3_DR
.set LED1__0__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set LED1__0__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set LED1__0__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set LED1__0__HSIOM, CYREG_HSIOM_PORT_SEL3
.set LED1__0__HSIOM_MASK, 0x00000F00
.set LED1__0__HSIOM_SHIFT, 8
.set LED1__0__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set LED1__0__INTR, CYREG_GPIO_PRT3_INTR
.set LED1__0__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set LED1__0__INTSTAT, CYREG_GPIO_PRT3_INTR
.set LED1__0__MASK, 0x04
.set LED1__0__PA__CFG0, CYREG_UDB_PA3_CFG0
.set LED1__0__PA__CFG1, CYREG_UDB_PA3_CFG1
.set LED1__0__PA__CFG10, CYREG_UDB_PA3_CFG10
.set LED1__0__PA__CFG11, CYREG_UDB_PA3_CFG11
.set LED1__0__PA__CFG12, CYREG_UDB_PA3_CFG12
.set LED1__0__PA__CFG13, CYREG_UDB_PA3_CFG13
.set LED1__0__PA__CFG14, CYREG_UDB_PA3_CFG14
.set LED1__0__PA__CFG2, CYREG_UDB_PA3_CFG2
.set LED1__0__PA__CFG3, CYREG_UDB_PA3_CFG3
.set LED1__0__PA__CFG4, CYREG_UDB_PA3_CFG4
.set LED1__0__PA__CFG5, CYREG_UDB_PA3_CFG5
.set LED1__0__PA__CFG6, CYREG_UDB_PA3_CFG6
.set LED1__0__PA__CFG7, CYREG_UDB_PA3_CFG7
.set LED1__0__PA__CFG8, CYREG_UDB_PA3_CFG8
.set LED1__0__PA__CFG9, CYREG_UDB_PA3_CFG9
.set LED1__0__PC, CYREG_GPIO_PRT3_PC
.set LED1__0__PC2, CYREG_GPIO_PRT3_PC2
.set LED1__0__PORT, 3
.set LED1__0__PS, CYREG_GPIO_PRT3_PS
.set LED1__0__SHIFT, 2
.set LED1__DR, CYREG_GPIO_PRT3_DR
.set LED1__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set LED1__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set LED1__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set LED1__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set LED1__INTR, CYREG_GPIO_PRT3_INTR
.set LED1__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set LED1__INTSTAT, CYREG_GPIO_PRT3_INTR
.set LED1__MASK, 0x04
.set LED1__PA__CFG0, CYREG_UDB_PA3_CFG0
.set LED1__PA__CFG1, CYREG_UDB_PA3_CFG1
.set LED1__PA__CFG10, CYREG_UDB_PA3_CFG10
.set LED1__PA__CFG11, CYREG_UDB_PA3_CFG11
.set LED1__PA__CFG12, CYREG_UDB_PA3_CFG12
.set LED1__PA__CFG13, CYREG_UDB_PA3_CFG13
.set LED1__PA__CFG14, CYREG_UDB_PA3_CFG14
.set LED1__PA__CFG2, CYREG_UDB_PA3_CFG2
.set LED1__PA__CFG3, CYREG_UDB_PA3_CFG3
.set LED1__PA__CFG4, CYREG_UDB_PA3_CFG4
.set LED1__PA__CFG5, CYREG_UDB_PA3_CFG5
.set LED1__PA__CFG6, CYREG_UDB_PA3_CFG6
.set LED1__PA__CFG7, CYREG_UDB_PA3_CFG7
.set LED1__PA__CFG8, CYREG_UDB_PA3_CFG8
.set LED1__PA__CFG9, CYREG_UDB_PA3_CFG9
.set LED1__PC, CYREG_GPIO_PRT3_PC
.set LED1__PC2, CYREG_GPIO_PRT3_PC2
.set LED1__PORT, 3
.set LED1__PS, CYREG_GPIO_PRT3_PS
.set LED1__SHIFT, 2

/* LED2 */
.set LED2__0__DR, CYREG_GPIO_PRT3_DR
.set LED2__0__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set LED2__0__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set LED2__0__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set LED2__0__HSIOM, CYREG_HSIOM_PORT_SEL3
.set LED2__0__HSIOM_MASK, 0x0000000F
.set LED2__0__HSIOM_SHIFT, 0
.set LED2__0__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set LED2__0__INTR, CYREG_GPIO_PRT3_INTR
.set LED2__0__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set LED2__0__INTSTAT, CYREG_GPIO_PRT3_INTR
.set LED2__0__MASK, 0x01
.set LED2__0__PA__CFG0, CYREG_UDB_PA3_CFG0
.set LED2__0__PA__CFG1, CYREG_UDB_PA3_CFG1
.set LED2__0__PA__CFG10, CYREG_UDB_PA3_CFG10
.set LED2__0__PA__CFG11, CYREG_UDB_PA3_CFG11
.set LED2__0__PA__CFG12, CYREG_UDB_PA3_CFG12
.set LED2__0__PA__CFG13, CYREG_UDB_PA3_CFG13
.set LED2__0__PA__CFG14, CYREG_UDB_PA3_CFG14
.set LED2__0__PA__CFG2, CYREG_UDB_PA3_CFG2
.set LED2__0__PA__CFG3, CYREG_UDB_PA3_CFG3
.set LED2__0__PA__CFG4, CYREG_UDB_PA3_CFG4
.set LED2__0__PA__CFG5, CYREG_UDB_PA3_CFG5
.set LED2__0__PA__CFG6, CYREG_UDB_PA3_CFG6
.set LED2__0__PA__CFG7, CYREG_UDB_PA3_CFG7
.set LED2__0__PA__CFG8, CYREG_UDB_PA3_CFG8
.set LED2__0__PA__CFG9, CYREG_UDB_PA3_CFG9
.set LED2__0__PC, CYREG_GPIO_PRT3_PC
.set LED2__0__PC2, CYREG_GPIO_PRT3_PC2
.set LED2__0__PORT, 3
.set LED2__0__PS, CYREG_GPIO_PRT3_PS
.set LED2__0__SHIFT, 0
.set LED2__DR, CYREG_GPIO_PRT3_DR
.set LED2__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set LED2__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set LED2__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set LED2__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set LED2__INTR, CYREG_GPIO_PRT3_INTR
.set LED2__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set LED2__INTSTAT, CYREG_GPIO_PRT3_INTR
.set LED2__MASK, 0x01
.set LED2__PA__CFG0, CYREG_UDB_PA3_CFG0
.set LED2__PA__CFG1, CYREG_UDB_PA3_CFG1
.set LED2__PA__CFG10, CYREG_UDB_PA3_CFG10
.set LED2__PA__CFG11, CYREG_UDB_PA3_CFG11
.set LED2__PA__CFG12, CYREG_UDB_PA3_CFG12
.set LED2__PA__CFG13, CYREG_UDB_PA3_CFG13
.set LED2__PA__CFG14, CYREG_UDB_PA3_CFG14
.set LED2__PA__CFG2, CYREG_UDB_PA3_CFG2
.set LED2__PA__CFG3, CYREG_UDB_PA3_CFG3
.set LED2__PA__CFG4, CYREG_UDB_PA3_CFG4
.set LED2__PA__CFG5, CYREG_UDB_PA3_CFG5
.set LED2__PA__CFG6, CYREG_UDB_PA3_CFG6
.set LED2__PA__CFG7, CYREG_UDB_PA3_CFG7
.set LED2__PA__CFG8, CYREG_UDB_PA3_CFG8
.set LED2__PA__CFG9, CYREG_UDB_PA3_CFG9
.set LED2__PC, CYREG_GPIO_PRT3_PC
.set LED2__PC2, CYREG_GPIO_PRT3_PC2
.set LED2__PORT, 3
.set LED2__PS, CYREG_GPIO_PRT3_PS
.set LED2__SHIFT, 0

/* LED3 */
.set LED3__0__DR, CYREG_GPIO_PRT4_DR
.set LED3__0__DR_CLR, CYREG_GPIO_PRT4_DR_CLR
.set LED3__0__DR_INV, CYREG_GPIO_PRT4_DR_INV
.set LED3__0__DR_SET, CYREG_GPIO_PRT4_DR_SET
.set LED3__0__HSIOM, CYREG_HSIOM_PORT_SEL4
.set LED3__0__HSIOM_MASK, 0x0000000F
.set LED3__0__HSIOM_SHIFT, 0
.set LED3__0__INTCFG, CYREG_GPIO_PRT4_INTR_CFG
.set LED3__0__INTR, CYREG_GPIO_PRT4_INTR
.set LED3__0__INTR_CFG, CYREG_GPIO_PRT4_INTR_CFG
.set LED3__0__INTSTAT, CYREG_GPIO_PRT4_INTR
.set LED3__0__MASK, 0x01
.set LED3__0__PC, CYREG_GPIO_PRT4_PC
.set LED3__0__PC2, CYREG_GPIO_PRT4_PC2
.set LED3__0__PORT, 4
.set LED3__0__PS, CYREG_GPIO_PRT4_PS
.set LED3__0__SHIFT, 0
.set LED3__DR, CYREG_GPIO_PRT4_DR
.set LED3__DR_CLR, CYREG_GPIO_PRT4_DR_CLR
.set LED3__DR_INV, CYREG_GPIO_PRT4_DR_INV
.set LED3__DR_SET, CYREG_GPIO_PRT4_DR_SET
.set LED3__INTCFG, CYREG_GPIO_PRT4_INTR_CFG
.set LED3__INTR, CYREG_GPIO_PRT4_INTR
.set LED3__INTR_CFG, CYREG_GPIO_PRT4_INTR_CFG
.set LED3__INTSTAT, CYREG_GPIO_PRT4_INTR
.set LED3__MASK, 0x01
.set LED3__PC, CYREG_GPIO_PRT4_PC
.set LED3__PC2, CYREG_GPIO_PRT4_PC2
.set LED3__PORT, 4
.set LED3__PS, CYREG_GPIO_PRT4_PS
.set LED3__SHIFT, 0

/* LED4 */
.set LED4__0__DR, CYREG_GPIO_PRT1_DR
.set LED4__0__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set LED4__0__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set LED4__0__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set LED4__0__HSIOM, CYREG_HSIOM_PORT_SEL1
.set LED4__0__HSIOM_MASK, 0x00000F00
.set LED4__0__HSIOM_SHIFT, 8
.set LED4__0__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set LED4__0__INTR, CYREG_GPIO_PRT1_INTR
.set LED4__0__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set LED4__0__INTSTAT, CYREG_GPIO_PRT1_INTR
.set LED4__0__MASK, 0x04
.set LED4__0__PA__CFG0, CYREG_UDB_PA1_CFG0
.set LED4__0__PA__CFG1, CYREG_UDB_PA1_CFG1
.set LED4__0__PA__CFG10, CYREG_UDB_PA1_CFG10
.set LED4__0__PA__CFG11, CYREG_UDB_PA1_CFG11
.set LED4__0__PA__CFG12, CYREG_UDB_PA1_CFG12
.set LED4__0__PA__CFG13, CYREG_UDB_PA1_CFG13
.set LED4__0__PA__CFG14, CYREG_UDB_PA1_CFG14
.set LED4__0__PA__CFG2, CYREG_UDB_PA1_CFG2
.set LED4__0__PA__CFG3, CYREG_UDB_PA1_CFG3
.set LED4__0__PA__CFG4, CYREG_UDB_PA1_CFG4
.set LED4__0__PA__CFG5, CYREG_UDB_PA1_CFG5
.set LED4__0__PA__CFG6, CYREG_UDB_PA1_CFG6
.set LED4__0__PA__CFG7, CYREG_UDB_PA1_CFG7
.set LED4__0__PA__CFG8, CYREG_UDB_PA1_CFG8
.set LED4__0__PA__CFG9, CYREG_UDB_PA1_CFG9
.set LED4__0__PC, CYREG_GPIO_PRT1_PC
.set LED4__0__PC2, CYREG_GPIO_PRT1_PC2
.set LED4__0__PORT, 1
.set LED4__0__PS, CYREG_GPIO_PRT1_PS
.set LED4__0__SHIFT, 2
.set LED4__DR, CYREG_GPIO_PRT1_DR
.set LED4__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set LED4__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set LED4__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set LED4__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set LED4__INTR, CYREG_GPIO_PRT1_INTR
.set LED4__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set LED4__INTSTAT, CYREG_GPIO_PRT1_INTR
.set LED4__MASK, 0x04
.set LED4__PA__CFG0, CYREG_UDB_PA1_CFG0
.set LED4__PA__CFG1, CYREG_UDB_PA1_CFG1
.set LED4__PA__CFG10, CYREG_UDB_PA1_CFG10
.set LED4__PA__CFG11, CYREG_UDB_PA1_CFG11
.set LED4__PA__CFG12, CYREG_UDB_PA1_CFG12
.set LED4__PA__CFG13, CYREG_UDB_PA1_CFG13
.set LED4__PA__CFG14, CYREG_UDB_PA1_CFG14
.set LED4__PA__CFG2, CYREG_UDB_PA1_CFG2
.set LED4__PA__CFG3, CYREG_UDB_PA1_CFG3
.set LED4__PA__CFG4, CYREG_UDB_PA1_CFG4
.set LED4__PA__CFG5, CYREG_UDB_PA1_CFG5
.set LED4__PA__CFG6, CYREG_UDB_PA1_CFG6
.set LED4__PA__CFG7, CYREG_UDB_PA1_CFG7
.set LED4__PA__CFG8, CYREG_UDB_PA1_CFG8
.set LED4__PA__CFG9, CYREG_UDB_PA1_CFG9
.set LED4__PC, CYREG_GPIO_PRT1_PC
.set LED4__PC2, CYREG_GPIO_PRT1_PC2
.set LED4__PORT, 1
.set LED4__PS, CYREG_GPIO_PRT1_PS
.set LED4__SHIFT, 2

/* LED5 */
.set LED5__0__DR, CYREG_GPIO_PRT1_DR
.set LED5__0__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set LED5__0__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set LED5__0__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set LED5__0__HSIOM, CYREG_HSIOM_PORT_SEL1
.set LED5__0__HSIOM_MASK, 0x0000000F
.set LED5__0__HSIOM_SHIFT, 0
.set LED5__0__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set LED5__0__INTR, CYREG_GPIO_PRT1_INTR
.set LED5__0__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set LED5__0__INTSTAT, CYREG_GPIO_PRT1_INTR
.set LED5__0__MASK, 0x01
.set LED5__0__PA__CFG0, CYREG_UDB_PA1_CFG0
.set LED5__0__PA__CFG1, CYREG_UDB_PA1_CFG1
.set LED5__0__PA__CFG10, CYREG_UDB_PA1_CFG10
.set LED5__0__PA__CFG11, CYREG_UDB_PA1_CFG11
.set LED5__0__PA__CFG12, CYREG_UDB_PA1_CFG12
.set LED5__0__PA__CFG13, CYREG_UDB_PA1_CFG13
.set LED5__0__PA__CFG14, CYREG_UDB_PA1_CFG14
.set LED5__0__PA__CFG2, CYREG_UDB_PA1_CFG2
.set LED5__0__PA__CFG3, CYREG_UDB_PA1_CFG3
.set LED5__0__PA__CFG4, CYREG_UDB_PA1_CFG4
.set LED5__0__PA__CFG5, CYREG_UDB_PA1_CFG5
.set LED5__0__PA__CFG6, CYREG_UDB_PA1_CFG6
.set LED5__0__PA__CFG7, CYREG_UDB_PA1_CFG7
.set LED5__0__PA__CFG8, CYREG_UDB_PA1_CFG8
.set LED5__0__PA__CFG9, CYREG_UDB_PA1_CFG9
.set LED5__0__PC, CYREG_GPIO_PRT1_PC
.set LED5__0__PC2, CYREG_GPIO_PRT1_PC2
.set LED5__0__PORT, 1
.set LED5__0__PS, CYREG_GPIO_PRT1_PS
.set LED5__0__SHIFT, 0
.set LED5__DR, CYREG_GPIO_PRT1_DR
.set LED5__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set LED5__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set LED5__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set LED5__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set LED5__INTR, CYREG_GPIO_PRT1_INTR
.set LED5__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set LED5__INTSTAT, CYREG_GPIO_PRT1_INTR
.set LED5__MASK, 0x01
.set LED5__PA__CFG0, CYREG_UDB_PA1_CFG0
.set LED5__PA__CFG1, CYREG_UDB_PA1_CFG1
.set LED5__PA__CFG10, CYREG_UDB_PA1_CFG10
.set LED5__PA__CFG11, CYREG_UDB_PA1_CFG11
.set LED5__PA__CFG12, CYREG_UDB_PA1_CFG12
.set LED5__PA__CFG13, CYREG_UDB_PA1_CFG13
.set LED5__PA__CFG14, CYREG_UDB_PA1_CFG14
.set LED5__PA__CFG2, CYREG_UDB_PA1_CFG2
.set LED5__PA__CFG3, CYREG_UDB_PA1_CFG3
.set LED5__PA__CFG4, CYREG_UDB_PA1_CFG4
.set LED5__PA__CFG5, CYREG_UDB_PA1_CFG5
.set LED5__PA__CFG6, CYREG_UDB_PA1_CFG6
.set LED5__PA__CFG7, CYREG_UDB_PA1_CFG7
.set LED5__PA__CFG8, CYREG_UDB_PA1_CFG8
.set LED5__PA__CFG9, CYREG_UDB_PA1_CFG9
.set LED5__PC, CYREG_GPIO_PRT1_PC
.set LED5__PC2, CYREG_GPIO_PRT1_PC2
.set LED5__PORT, 1
.set LED5__PS, CYREG_GPIO_PRT1_PS
.set LED5__SHIFT, 0

/* LED6 */
.set LED6__0__DR, CYREG_GPIO_PRT0_DR
.set LED6__0__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set LED6__0__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set LED6__0__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set LED6__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set LED6__0__HSIOM_MASK, 0x00F00000
.set LED6__0__HSIOM_SHIFT, 20
.set LED6__0__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set LED6__0__INTR, CYREG_GPIO_PRT0_INTR
.set LED6__0__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set LED6__0__INTSTAT, CYREG_GPIO_PRT0_INTR
.set LED6__0__MASK, 0x20
.set LED6__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set LED6__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set LED6__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set LED6__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set LED6__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set LED6__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set LED6__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set LED6__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set LED6__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set LED6__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set LED6__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set LED6__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set LED6__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set LED6__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set LED6__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set LED6__0__PC, CYREG_GPIO_PRT0_PC
.set LED6__0__PC2, CYREG_GPIO_PRT0_PC2
.set LED6__0__PORT, 0
.set LED6__0__PS, CYREG_GPIO_PRT0_PS
.set LED6__0__SHIFT, 5
.set LED6__DR, CYREG_GPIO_PRT0_DR
.set LED6__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set LED6__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set LED6__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set LED6__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set LED6__INTR, CYREG_GPIO_PRT0_INTR
.set LED6__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set LED6__INTSTAT, CYREG_GPIO_PRT0_INTR
.set LED6__MASK, 0x20
.set LED6__PA__CFG0, CYREG_UDB_PA0_CFG0
.set LED6__PA__CFG1, CYREG_UDB_PA0_CFG1
.set LED6__PA__CFG10, CYREG_UDB_PA0_CFG10
.set LED6__PA__CFG11, CYREG_UDB_PA0_CFG11
.set LED6__PA__CFG12, CYREG_UDB_PA0_CFG12
.set LED6__PA__CFG13, CYREG_UDB_PA0_CFG13
.set LED6__PA__CFG14, CYREG_UDB_PA0_CFG14
.set LED6__PA__CFG2, CYREG_UDB_PA0_CFG2
.set LED6__PA__CFG3, CYREG_UDB_PA0_CFG3
.set LED6__PA__CFG4, CYREG_UDB_PA0_CFG4
.set LED6__PA__CFG5, CYREG_UDB_PA0_CFG5
.set LED6__PA__CFG6, CYREG_UDB_PA0_CFG6
.set LED6__PA__CFG7, CYREG_UDB_PA0_CFG7
.set LED6__PA__CFG8, CYREG_UDB_PA0_CFG8
.set LED6__PA__CFG9, CYREG_UDB_PA0_CFG9
.set LED6__PC, CYREG_GPIO_PRT0_PC
.set LED6__PC2, CYREG_GPIO_PRT0_PC2
.set LED6__PORT, 0
.set LED6__PS, CYREG_GPIO_PRT0_PS
.set LED6__SHIFT, 5

/* MOSFET1 */
.set MOSFET1__0__DR, CYREG_GPIO_PRT2_DR
.set MOSFET1__0__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set MOSFET1__0__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set MOSFET1__0__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set MOSFET1__0__HSIOM, CYREG_HSIOM_PORT_SEL2
.set MOSFET1__0__HSIOM_MASK, 0x00000F00
.set MOSFET1__0__HSIOM_SHIFT, 8
.set MOSFET1__0__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set MOSFET1__0__INTR, CYREG_GPIO_PRT2_INTR
.set MOSFET1__0__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set MOSFET1__0__INTSTAT, CYREG_GPIO_PRT2_INTR
.set MOSFET1__0__MASK, 0x04
.set MOSFET1__0__PA__CFG0, CYREG_UDB_PA2_CFG0
.set MOSFET1__0__PA__CFG1, CYREG_UDB_PA2_CFG1
.set MOSFET1__0__PA__CFG10, CYREG_UDB_PA2_CFG10
.set MOSFET1__0__PA__CFG11, CYREG_UDB_PA2_CFG11
.set MOSFET1__0__PA__CFG12, CYREG_UDB_PA2_CFG12
.set MOSFET1__0__PA__CFG13, CYREG_UDB_PA2_CFG13
.set MOSFET1__0__PA__CFG14, CYREG_UDB_PA2_CFG14
.set MOSFET1__0__PA__CFG2, CYREG_UDB_PA2_CFG2
.set MOSFET1__0__PA__CFG3, CYREG_UDB_PA2_CFG3
.set MOSFET1__0__PA__CFG4, CYREG_UDB_PA2_CFG4
.set MOSFET1__0__PA__CFG5, CYREG_UDB_PA2_CFG5
.set MOSFET1__0__PA__CFG6, CYREG_UDB_PA2_CFG6
.set MOSFET1__0__PA__CFG7, CYREG_UDB_PA2_CFG7
.set MOSFET1__0__PA__CFG8, CYREG_UDB_PA2_CFG8
.set MOSFET1__0__PA__CFG9, CYREG_UDB_PA2_CFG9
.set MOSFET1__0__PC, CYREG_GPIO_PRT2_PC
.set MOSFET1__0__PC2, CYREG_GPIO_PRT2_PC2
.set MOSFET1__0__PORT, 2
.set MOSFET1__0__PS, CYREG_GPIO_PRT2_PS
.set MOSFET1__0__SHIFT, 2
.set MOSFET1__DR, CYREG_GPIO_PRT2_DR
.set MOSFET1__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set MOSFET1__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set MOSFET1__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set MOSFET1__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set MOSFET1__INTR, CYREG_GPIO_PRT2_INTR
.set MOSFET1__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set MOSFET1__INTSTAT, CYREG_GPIO_PRT2_INTR
.set MOSFET1__MASK, 0x04
.set MOSFET1__PA__CFG0, CYREG_UDB_PA2_CFG0
.set MOSFET1__PA__CFG1, CYREG_UDB_PA2_CFG1
.set MOSFET1__PA__CFG10, CYREG_UDB_PA2_CFG10
.set MOSFET1__PA__CFG11, CYREG_UDB_PA2_CFG11
.set MOSFET1__PA__CFG12, CYREG_UDB_PA2_CFG12
.set MOSFET1__PA__CFG13, CYREG_UDB_PA2_CFG13
.set MOSFET1__PA__CFG14, CYREG_UDB_PA2_CFG14
.set MOSFET1__PA__CFG2, CYREG_UDB_PA2_CFG2
.set MOSFET1__PA__CFG3, CYREG_UDB_PA2_CFG3
.set MOSFET1__PA__CFG4, CYREG_UDB_PA2_CFG4
.set MOSFET1__PA__CFG5, CYREG_UDB_PA2_CFG5
.set MOSFET1__PA__CFG6, CYREG_UDB_PA2_CFG6
.set MOSFET1__PA__CFG7, CYREG_UDB_PA2_CFG7
.set MOSFET1__PA__CFG8, CYREG_UDB_PA2_CFG8
.set MOSFET1__PA__CFG9, CYREG_UDB_PA2_CFG9
.set MOSFET1__PC, CYREG_GPIO_PRT2_PC
.set MOSFET1__PC2, CYREG_GPIO_PRT2_PC2
.set MOSFET1__PORT, 2
.set MOSFET1__PS, CYREG_GPIO_PRT2_PS
.set MOSFET1__SHIFT, 2

/* Pin_Red */
.set Pin_Red__0__DR, CYREG_GPIO_PRT2_DR
.set Pin_Red__0__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set Pin_Red__0__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set Pin_Red__0__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set Pin_Red__0__HSIOM, CYREG_HSIOM_PORT_SEL2
.set Pin_Red__0__HSIOM_MASK, 0x0F000000
.set Pin_Red__0__HSIOM_SHIFT, 24
.set Pin_Red__0__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set Pin_Red__0__INTR, CYREG_GPIO_PRT2_INTR
.set Pin_Red__0__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set Pin_Red__0__INTSTAT, CYREG_GPIO_PRT2_INTR
.set Pin_Red__0__MASK, 0x40
.set Pin_Red__0__PA__CFG0, CYREG_UDB_PA2_CFG0
.set Pin_Red__0__PA__CFG1, CYREG_UDB_PA2_CFG1
.set Pin_Red__0__PA__CFG10, CYREG_UDB_PA2_CFG10
.set Pin_Red__0__PA__CFG11, CYREG_UDB_PA2_CFG11
.set Pin_Red__0__PA__CFG12, CYREG_UDB_PA2_CFG12
.set Pin_Red__0__PA__CFG13, CYREG_UDB_PA2_CFG13
.set Pin_Red__0__PA__CFG14, CYREG_UDB_PA2_CFG14
.set Pin_Red__0__PA__CFG2, CYREG_UDB_PA2_CFG2
.set Pin_Red__0__PA__CFG3, CYREG_UDB_PA2_CFG3
.set Pin_Red__0__PA__CFG4, CYREG_UDB_PA2_CFG4
.set Pin_Red__0__PA__CFG5, CYREG_UDB_PA2_CFG5
.set Pin_Red__0__PA__CFG6, CYREG_UDB_PA2_CFG6
.set Pin_Red__0__PA__CFG7, CYREG_UDB_PA2_CFG7
.set Pin_Red__0__PA__CFG8, CYREG_UDB_PA2_CFG8
.set Pin_Red__0__PA__CFG9, CYREG_UDB_PA2_CFG9
.set Pin_Red__0__PC, CYREG_GPIO_PRT2_PC
.set Pin_Red__0__PC2, CYREG_GPIO_PRT2_PC2
.set Pin_Red__0__PORT, 2
.set Pin_Red__0__PS, CYREG_GPIO_PRT2_PS
.set Pin_Red__0__SHIFT, 6
.set Pin_Red__DR, CYREG_GPIO_PRT2_DR
.set Pin_Red__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set Pin_Red__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set Pin_Red__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set Pin_Red__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set Pin_Red__INTR, CYREG_GPIO_PRT2_INTR
.set Pin_Red__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set Pin_Red__INTSTAT, CYREG_GPIO_PRT2_INTR
.set Pin_Red__MASK, 0x40
.set Pin_Red__PA__CFG0, CYREG_UDB_PA2_CFG0
.set Pin_Red__PA__CFG1, CYREG_UDB_PA2_CFG1
.set Pin_Red__PA__CFG10, CYREG_UDB_PA2_CFG10
.set Pin_Red__PA__CFG11, CYREG_UDB_PA2_CFG11
.set Pin_Red__PA__CFG12, CYREG_UDB_PA2_CFG12
.set Pin_Red__PA__CFG13, CYREG_UDB_PA2_CFG13
.set Pin_Red__PA__CFG14, CYREG_UDB_PA2_CFG14
.set Pin_Red__PA__CFG2, CYREG_UDB_PA2_CFG2
.set Pin_Red__PA__CFG3, CYREG_UDB_PA2_CFG3
.set Pin_Red__PA__CFG4, CYREG_UDB_PA2_CFG4
.set Pin_Red__PA__CFG5, CYREG_UDB_PA2_CFG5
.set Pin_Red__PA__CFG6, CYREG_UDB_PA2_CFG6
.set Pin_Red__PA__CFG7, CYREG_UDB_PA2_CFG7
.set Pin_Red__PA__CFG8, CYREG_UDB_PA2_CFG8
.set Pin_Red__PA__CFG9, CYREG_UDB_PA2_CFG9
.set Pin_Red__PC, CYREG_GPIO_PRT2_PC
.set Pin_Red__PC2, CYREG_GPIO_PRT2_PC2
.set Pin_Red__PORT, 2
.set Pin_Red__PS, CYREG_GPIO_PRT2_PS
.set Pin_Red__SHIFT, 6

/* Miscellaneous */
.set CYDEV_BCLK__HFCLK__HZ, 48000000
.set CYDEV_BCLK__HFCLK__KHZ, 48000
.set CYDEV_BCLK__HFCLK__MHZ, 48
.set CYDEV_BCLK__SYSCLK__HZ, 48000000
.set CYDEV_BCLK__SYSCLK__KHZ, 48000
.set CYDEV_BCLK__SYSCLK__MHZ, 48
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 12
.set CYDEV_CHIP_DIE_PSOC5LP, 19
.set CYDEV_CHIP_DIE_PSOC5TM, 20
.set CYDEV_CHIP_DIE_TMA4, 2
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 4
.set CYDEV_CHIP_FAMILY_FM3, 5
.set CYDEV_CHIP_FAMILY_FM4, 6
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC4
.set CYDEV_CHIP_JTAG_ID, 0x0E34119E
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 12
.set CYDEV_CHIP_MEMBER_4C, 18
.set CYDEV_CHIP_MEMBER_4D, 8
.set CYDEV_CHIP_MEMBER_4E, 4
.set CYDEV_CHIP_MEMBER_4F, 13
.set CYDEV_CHIP_MEMBER_4G, 2
.set CYDEV_CHIP_MEMBER_4H, 11
.set CYDEV_CHIP_MEMBER_4I, 17
.set CYDEV_CHIP_MEMBER_4J, 9
.set CYDEV_CHIP_MEMBER_4K, 10
.set CYDEV_CHIP_MEMBER_4L, 16
.set CYDEV_CHIP_MEMBER_4M, 15
.set CYDEV_CHIP_MEMBER_4N, 6
.set CYDEV_CHIP_MEMBER_4O, 5
.set CYDEV_CHIP_MEMBER_4P, 14
.set CYDEV_CHIP_MEMBER_4Q, 7
.set CYDEV_CHIP_MEMBER_4U, 3
.set CYDEV_CHIP_MEMBER_5A, 20
.set CYDEV_CHIP_MEMBER_5B, 19
.set CYDEV_CHIP_MEMBER_FM3, 24
.set CYDEV_CHIP_MEMBER_FM4, 25
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 21
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 22
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 23
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_4F
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4C_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_4F_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_READ_ACCELERATOR, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_PROTECT_KILL, 4
.set CYDEV_DEBUG_PROTECT_OPEN, 1
.set CYDEV_DEBUG_PROTECT, CYDEV_DEBUG_PROTECT_OPEN
.set CYDEV_DEBUG_PROTECT_PROTECTED, 2
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DFT_SELECT_CLK0, 10
.set CYDEV_DFT_SELECT_CLK1, 11
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_IMO_TRIMMED_BY_USB, 0
.set CYDEV_IMO_TRIMMED_BY_WCO, 0
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 1
.set CYDEV_VDDA_MV, 3300
.set CYDEV_VDDD_MV, 3300
.set CYDEV_VDDR_MV, 3300
.set CYDEV_WDT_GENERATE_ISR, 1
.set CYIPBLOCK_m0s8bless_VERSION, 1
.set CYIPBLOCK_m0s8cpussv2_VERSION, 1
.set CYIPBLOCK_m0s8csd_VERSION, 1
.set CYIPBLOCK_m0s8ioss_VERSION, 1
.set CYIPBLOCK_m0s8lcd_VERSION, 2
.set CYIPBLOCK_m0s8lpcomp_VERSION, 2
.set CYIPBLOCK_m0s8peri_VERSION, 1
.set CYIPBLOCK_m0s8scb_VERSION, 2
.set CYIPBLOCK_m0s8srssv2_VERSION, 1
.set CYIPBLOCK_m0s8tcpwm_VERSION, 2
.set CYIPBLOCK_m0s8udbif_VERSION, 1
.set CYIPBLOCK_s8pass4al_VERSION, 1
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
