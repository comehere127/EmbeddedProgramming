/*
 * LCD_CACUL.c
 *
 * Created: 9/5/2016 3:15:41 PM
 *  Author: duong
 */ 

	
#include <avr/io.h>
#include <util/delay.h>
#include "DemoCacul.h" //include th? vi?n myLCD

#define KEYPAD_DDR		DDRB
#define KEYPAD_PORT		PORTB
#define KEYPAD_PIN		PINB

uint8_t scan_code[4] = {0x0E, 0x0D, 0x0B, 0x07};
uint8_t ascii_code[4][4]= {'7','8','9','/','4','5','6','*','1','2','3','-', 'N','0','=','+'};
uint8_t key;
uint8_t checkpad();

int main(){ 
       KEYPAD_PORT	= 0x0F;
	   KEYPAD_DDR	= 0xF0;
	   
	   init_LCD();
	   clr_LCD();
       while(1){
		   key	= checkpad();
		   move_LCD(1,1);
		   if (key){
			 putChar_LCD(key);
		   }		    
       };
}

uint8_t checkpad(){
	uint8_t i,j,keyin;
	for(i=0;i<4;i++){
		KEYPAD_PORT	= 0xFF-(1<<(i+4));
		_delay_us(10);
		keyin	= KEYPAD_PIN & 0x0F;
		if(keyin != 0x0F)
			for(j=0;j<4;j++)
				if(keyin == scan_code[j])
					return ascii_code[j][i];
	}
	return 0;
}