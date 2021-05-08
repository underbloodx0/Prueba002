/*
 * File:   Prueba001main.c
 * Author: under
 *
 * Created on 21 de abril de 2021, 09:47 PM
 */
// Prueba para subir de nuevo a GITHUB
#include<xc.h>
#include<avr/io.h>              //Standad AVR header
#define F_CPU 1000000UL
#include<util/delay.h>

int main(void) 
{
    unsigned char t;
    DDRB = 0xFF;                //PORTB is output
    for(t=0;t<=255;t++)
    {
        PORTB = t;              
        _delay_ms(100);
    }return 0;
}
