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
    unsigned char z;
    DDRB = 0xFF;                //PORTB is output
    for(z=0;z<=255;z++)
    {
        PORTB = z;              
        _delay_ms(100);
    }return 0;
}
