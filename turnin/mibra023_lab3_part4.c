/*	Author: lab
 *  Partner(s) Name: Mustafa Ibrahim
 *	Lab Section:021
 *	Assignment: Lab #3  Exercise #2
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char first = 0x00;
	unsigned char second = 0x00;
	unsigned char tempA = 0x00;
    /* Insert your solution bel0ow */
    while (1) {
	tempA = PINA;
        first = (tempA >> 4);
	second = (tempA << 4);
	PORTC = first | second;
    }
    return 1;
}

