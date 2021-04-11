/*	Author: lab
 *  Partner(s) Name: Mustafa Ibrahim
 *	Lab Section:021
 *	Assignment: Lab #3  Exercise #1
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
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	
	unsigned char tempA = 0x00, tempB = 0x00;
	unsigned char sum = 0x00, i =0x00;
    /* Insert your solution below */
    while (1) {
	tempA = PINA;
	tempB = PINB;
	sum = 0;
 
	for(i = 0; i < 8; i++){
		if((tempA >> i & 0x01) == 0x01)
			sum = sum + 1;
		if ((tempB >> i & 0x01) == 0x01)
			sum = sum + 1;
	}
	PORTC = sum;
    }
    return 1;
}

