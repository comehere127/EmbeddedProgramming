/*
 * TextLCD.c
 *
 * Created: 12/16/2016 3:20:06 PM
 *  Author: TuDHM
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include "myLCD.h"

int main(){	
	init_LCD(); 
	clr_LCD();
	uint8_t text1="Tuuuu";
	print_LCD(text1,5); 
	
	move_LCD(2,1);
	print_LCD("hihi",4);
	while(1){
		
	};
}
