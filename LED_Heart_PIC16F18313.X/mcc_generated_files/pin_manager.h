/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18313
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set A aliases
#define A_TRIS                 TRISAbits.TRISA0
#define A_LAT                  LATAbits.LATA0
#define A_PORT                 PORTAbits.RA0
#define A_WPU                  WPUAbits.WPUA0
#define A_OD                   ODCONAbits.ODCA0
#define A_ANS                  ANSELAbits.ANSA0
#define A_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define A_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define A_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define A_GetValue()           PORTAbits.RA0
#define A_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define A_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define A_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define A_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define A_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define A_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define A_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define A_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set B aliases
#define B_TRIS                 TRISAbits.TRISA1
#define B_LAT                  LATAbits.LATA1
#define B_PORT                 PORTAbits.RA1
#define B_WPU                  WPUAbits.WPUA1
#define B_OD                   ODCONAbits.ODCA1
#define B_ANS                  ANSELAbits.ANSA1
#define B_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define B_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define B_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define B_GetValue()           PORTAbits.RA1
#define B_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define B_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define B_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define B_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define B_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define B_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define B_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define B_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set C aliases
#define C_TRIS                 TRISAbits.TRISA2
#define C_LAT                  LATAbits.LATA2
#define C_PORT                 PORTAbits.RA2
#define C_WPU                  WPUAbits.WPUA2
#define C_OD                   ODCONAbits.ODCA2
#define C_ANS                  ANSELAbits.ANSA2
#define C_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define C_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define C_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define C_GetValue()           PORTAbits.RA2
#define C_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define C_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define C_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define C_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define C_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define C_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define C_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define C_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set D aliases
#define D_TRIS                 TRISAbits.TRISA4
#define D_LAT                  LATAbits.LATA4
#define D_PORT                 PORTAbits.RA4
#define D_WPU                  WPUAbits.WPUA4
#define D_OD                   ODCONAbits.ODCA4
#define D_ANS                  ANSELAbits.ANSA4
#define D_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define D_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define D_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define D_GetValue()           PORTAbits.RA4
#define D_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define D_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define D_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define D_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define D_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define D_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define D_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define D_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/