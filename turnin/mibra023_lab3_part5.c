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
	DDRB = 0x01; PORTB = 0x00;
	DDRD = 0x00; PORTD = 0xFF;
	unsigned char tempB = 0x00; 
	unsigned char tempD = 0x00;
	unsigned short totalWeight;
    /* Insert your solution bel0ow */
    while (1) {
	tempB = PINB;
	tempD = PIND;
	totalWeight = (tempD << 1) | (tempB & 0x01);
	if (totalWeight >= 0x046) {
		PORTB = 0x02;
	}
	else if (totalWeight > 0x005) {
		PORTB = 0x04;
	}
	else {
		PORTB = 0x000;
	}	
    }
    return 1;
}

