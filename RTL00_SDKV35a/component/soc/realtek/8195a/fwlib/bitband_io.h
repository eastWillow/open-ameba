#ifndef _BITBAND_IO_H_
#define _BITBAND_IO_H_

#include "hal_platform.h"
#include "hal_api.h"
#include "hal_gpio.h"
#include "rtl8195a_gpio.h"

#define BITBAND_SRAM_REF  0x10000000
#define BITBAND_SRAM_BASE 0x12000000
#define BITBAND_SRAM(a,b) (BITBAND_SRAM_BASE + (a-BITBAND_SRAM_REF)*32 + (b*4)) // Convert SRAM address

/*
 * in hal_platform.h
#define GPIO_REG_BASE		0x40001000
 */

/*
 * in rtl8195a_gpio.h
 *
#define GPIO_PORTA_DR           0x00        // data register
#define GPIO_PORTA_DDR          0x04        // data direction
#define GPIO_PORTA_CTRL         0x08        // data source control, we should keep it as default: data source from software

#define GPIO_PORTB_DR           0x0c        // data register
#define GPIO_PORTB_DDR          0x10        // data direction
#define GPIO_PORTB_CTRL         0x14        // data source control, we should keep it as default: data source from software

#define GPIO_PORTC_DR           0x18        // data register
#define GPIO_PORTC_DDR          0x1c        // data direction
#define GPIO_PORTC_CTRL         0x20        // data source control, we should keep it as default: data source from software

#define GPIO_EXT_PORTA          0x50        // GPIO IN read or OUT read back
#define GPIO_EXT_PORTB          0x54        // GPIO IN read or OUT read back
#define GPIO_EXT_PORTC          0x58        // GPIO IN read or OUT read back
*/

#define BITBAND_PERI_REF	0x40000000
#define BITBAND_PERI_BASE	0x42000000
#define BITBAND_PERI(a,b)	(BITBAND_PERI_BASE + (a-BITBAND_PERI_REF)*32 + (b*4))	// Convert PERI address
#define ucBITBAND_PERI(a,b)	*((volatile unsigned char *)BITBAND_PERI(a,b))
#define uiBITBAND_PERI(a,b) *((volatile unsigned int *)BITBAND_PERI(a,b))

#define GPIO_A0 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,0)	//Port = 0, bit = 0, A0
#define GPIO_A1 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,1)	//Port = 0, bit = 1, A1
#define GPIO_A2 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,0)	//Port = 1, bit = 0, A2
#define GPIO_A3 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,1)	//Port = 1, bit = 1, A3
#define GPIO_A4 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,2)	//Port = 1, bit = 2, A4
#define GPIO_A5 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,3)	//Port = 1, bit = 3, A5
#define GPIO_A6 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,4)	//Port = 1, bit = 4, A6
#define GPIO_A7 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,5)	//Port = 1, bit = 5, A7

#define GPIO_B0 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,6)	//Port = 1, bit = 6, B0
#define GPIO_B1 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,7)	//Port = 1, bit = 7, B1
#define GPIO_B2 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,8)	//Port = 1, bit = 8, B2
#define GPIO_B3 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,2)	//Port = 0, bit = 2, B3
#define GPIO_B4 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,3)	//Port = 0, bit = 3, B4
#define GPIO_B5 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,9)	//Port = 1, bit = 9, B5
#define GPIO_B6 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,4)	//Port = 0, bit = 4, B6
#define GPIO_B7 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,5)	//Port = 0, bit = 5, B7

#define GPIO_C0 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,10)	//Port = 1, bit = 10, C0
#define GPIO_C1 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,6)	//Port = 0, bit = 6,  C1
#define GPIO_C2 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,11)	//Port = 1, bit = 11, C2
#define GPIO_C3 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,7)	//Port = 0, bit = 7,  C3
#define GPIO_C4 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,8)	//Port = 0, bit = 8,  C4
#define GPIO_C5 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,9)	//Port = 0, bit = 9,  C5
#define GPIO_C6 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,10)	//Port = 0, bit = 10, C6
#define GPIO_C7 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,11)	//Port = 0, bit = 11, C7
#define GPIO_C8 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,12)	//Port = 0, bit = 12, C8
#define GPIO_C9 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,13)	//Port = 0, bit = 13, C9

#define GPIO_D0 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,12)  //Port = 1, bit = 12, D0
#define GPIO_D1 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,14)  //Port = 0, bit = 14, D1
#define GPIO_D2 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,13)  //Port = 1, bit = 13, D2
#define GPIO_D3 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,15)  //Port = 0, bit = 15, D3
#define GPIO_D4 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,16)  //Port = 0, bit = 16, D4
#define GPIO_D5 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,17)  //Port = 0, bit = 17, D5
#define GPIO_D6 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,18)  //Port = 0, bit = 18, D6
#define GPIO_D7 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,19)  //Port = 0, bit = 19, D7
#define GPIO_D8 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,14)  //Port = 1, bit = 14, D8
#define GPIO_D9 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,20)  //Port = 0, bit = 20, D9

#define GPIO_E0 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,15)  //Port = 2, bit = 15, E0
#define GPIO_E1 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,21)  //Port = 0, bit = 21, E1
#define GPIO_E2 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,22)  //Port = 0, bit = 22, E2
#define GPIO_E3 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,23)  //Port = 0, bit = 23, E3
#define GPIO_E4 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,16)  //Port = 1, bit = 16, E4
#define GPIO_E5 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,24)  //Port = 0, bit = 24, E5
#define GPIO_E6 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,25)  //Port = 0, bit = 25, E6
#define GPIO_E7 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,26)  //Port = 0, bit = 26, E7
#define GPIO_E8 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,27)  //Port = 0, bit = 27, E8
#define GPIO_E9 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,17)  //Port = 1, bit = 17, E9
#define GPIO_E10 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,18) //Port = 1, bit = 17, E10

#define GPIO_F0 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,19)  //Port = 1, bit = 19, F0
#define GPIO_F1 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,20)  //Port = 1, bit = 20, F1
#define GPIO_F2 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,21)  //Port = 1, bit = 21, F2
#define GPIO_F3 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,22)  //Port = 1, bit = 22, F3
#define GPIO_F4 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,23)  //Port = 1, bit = 23, F4
#define GPIO_F5 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,24)  //Port = 1, bit = 24, F5

#define GPIO_G0 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,25)  //Port = 1, bit = 25, G0
#define GPIO_G1 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,26)  //Port = 1, bit = 26, G1
#define GPIO_G2 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,27)  //Port = 1, bit = 27, G2
#define GPIO_G3 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,28)  //Port = 0, bit = 28, G3
#define GPIO_G4 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,28)  //Port = 1, bit = 28, G4
#define GPIO_G5 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,29)  //Port = 1, bit = 29, G5
#define GPIO_G6 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,30)  //Port = 1, bit = 30, G6
#define GPIO_G7 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTB_DR,31)  //Port = 1, bit = 31, G7

#define GPIO_H0 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,0)   //Port = 2, bit = 0,  H0
#define GPIO_H1 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,29)  //Port = 0, bit = 29, H1
#define GPIO_H2 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,1)   //Port = 2, bit = 1,  H2
#define GPIO_H3 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,30)  //Port = 0, bit = 30, H3
#define GPIO_H4 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,2)   //Port = 2, bit = 2,  H4
#define GPIO_H5 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,31)  //Port = 0, bit = 31, H5
#define GPIO_H6 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,3)   //Port = 2, bit = 3,  H6
#define GPIO_H7 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTA_DR,4)   //Port = 2, bit = 4,  H7

#define GPIO_I0 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,5)   //Port = 2, bit = 5,  I0
#define GPIO_I1 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,6)   //Port = 2, bit = 6,  I1
#define GPIO_I2 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,7)   //Port = 2, bit = 7,  I2
#define GPIO_I3 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,8)   //Port = 2, bit = 8,  I3
#define GPIO_I4 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,9)   //Port = 2, bit = 9,  I4
#define GPIO_I5 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,10)  //Port = 2, bit = 10, I5
#define GPIO_I6 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,11)  //Port = 2, bit = 11, I6
#define GPIO_I7 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,12)  //Port = 2, bit = 12, I7

#define GPIO_J0 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,13)  //Port = 2, bit = 13, J0
#define GPIO_J1 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,14)  //Port = 2, bit = 14, J1
#define GPIO_J2 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,15)  //Port = 2, bit = 15, J2
#define GPIO_J3 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,16)  //Port = 2, bit = 16, J3
#define GPIO_J4 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,17)  //Port = 2, bit = 17, J4
#define GPIO_J5 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,18)  //Port = 2, bit = 18, J5
#define GPIO_J6 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,19)  //Port = 2, bit = 19, J6

#define GPIO_K0 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,20)  //Port = 2, bit = 20, K0
#define GPIO_K1 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,21)  //Port = 2, bit = 21, K1
#define GPIO_K2 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,22)  //Port = 2, bit = 22, K2
#define GPIO_K3 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,23)  //Port = 2, bit = 23, K3
#define GPIO_K4 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,24)  //Port = 2, bit = 24, K4
#define GPIO_K5 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,25)  //Port = 2, bit = 25, K5
#define GPIO_K6 ucBITBAND_PERI(GPIO_REG_BASE+GPIO_PORTC_DR,26)  //Port = 2, bit = 26, K6

#endif // _BITBAND_IO_H_