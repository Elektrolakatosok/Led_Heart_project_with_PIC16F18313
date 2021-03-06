/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18313
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"

void LEDsOut(uint8_t LEDs);

void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    while (1)
    {
        for(unsigned char i = 0; i<10; i++){
        LEDsOut(i);
        if(i == 9) {i = 0;}
        __delay_ms(500); 
        }
    }
}

void LEDsOut(uint8_t LEDs){
 
    switch(LEDs){
            case 1:
                A_SetDigitalOutput();
                B_SetDigitalOutput();
                C_SetDigitalInput();
                D_SetDigitalInput();
                
                A_SetHigh();
                B_SetLow();
                break;
                
            case 2:
                A_SetDigitalOutput();
                B_SetDigitalOutput();
                C_SetDigitalInput();
                D_SetDigitalInput();
       
                A_SetLow();
                B_SetHigh();
                break;
                
            case 3:
                A_SetDigitalInput();
                B_SetDigitalOutput();
                C_SetDigitalOutput();
                D_SetDigitalInput();
              
                B_SetHigh();
                C_SetLow();
                break;
                
            case 4:
                A_SetDigitalInput();
                B_SetDigitalOutput();
                C_SetDigitalOutput();
                D_SetDigitalInput();
        
                B_SetLow();
                C_SetHigh();
                break;
                
            case 5:
                A_SetDigitalInput();
                B_SetDigitalInput();
                C_SetDigitalOutput();
                D_SetDigitalOutput();
        
                C_SetHigh();
                D_SetLow();
                break;
                
            case 6:
                A_SetDigitalInput();
                B_SetDigitalInput();
                C_SetDigitalOutput();
                D_SetDigitalOutput();
        
                C_SetLow();
                D_SetHigh();
                break;
                
            case 7:
                A_SetDigitalInput();
                B_SetDigitalOutput();
                C_SetDigitalInput();
                D_SetDigitalOutput();
        
                B_SetHigh();
                D_SetLow();
                break;
                
            case 8:
                A_SetDigitalInput();
                B_SetDigitalOutput();
                C_SetDigitalInput();
                D_SetDigitalOutput();
        
                B_SetLow();
                D_SetHigh();
                break;
                
            case 9:
                A_SetDigitalOutput();
                B_SetDigitalInput();
                C_SetDigitalOutput();
                D_SetDigitalInput();
        
                A_SetHigh();
                C_SetLow();
                break;
                
            case 10:
                A_SetDigitalOutput();
                B_SetDigitalOutput();
                C_SetDigitalOutput();
                D_SetDigitalInput();
        
                A_SetHigh();
                B_SetLow();
                C_SetLow();
                break;
                
            case 11:
                A_SetDigitalOutput();
                B_SetDigitalOutput();
                C_SetDigitalOutput();
                D_SetDigitalInput();
        
                A_SetHigh();
                B_SetLow();
                C_SetHigh();
                break;
                
            case 12:
                A_SetDigitalOutput();
                B_SetDigitalOutput();
                C_SetDigitalOutput();
                D_SetDigitalInput();
                
                A_SetLow();
                B_SetHigh();
                C_SetLow();
                break;    
                                
            default:
                break;
    }
}
/**
 End of File
*/