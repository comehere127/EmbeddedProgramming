/*
 * LED.c
 *
 * Created: 12/17/2016 4:36:30 PM
 *  Author: TuDHM
 */ 

#include <avr/io.h>
#include <util/delay.h>

void So3()
{
	/*quét t?ng c?t*/
	PORTC = 0b00000001;//ch?n c?t ??u tiên
	PORTD = 0b00111101;//ch?n hàng 1
	_delay_ms(10);
	PORTC = 0b00000010;//ch?n c?t th? hai
	PORTD = 0b00111110;//ch?n hàng 1
	_delay_ms(10);
	PORTC = 0b00000100;//ch?n c?t th? ba
	PORTD = 0b00101110;//ch?n hàng tat ca cac hang
	_delay_ms(10);
	PORTC = 0b00001000;//ch?n c?t th? 4
	PORTD = 0b00010110;//ch?n hàng 1
	_delay_ms(10);
	PORTC = 0b00010000;//ch?n c?t th? 5
	PORTD = 0b00111001;//ch?n hàng 1
	_delay_ms(10);
}
void ChuT()
{
	/*quét t?ng c?t*/
	_delay_ms(10);
	PORTC = 0b00000001;//ch?n c?t ??u tiên
	PORTD = 0b00111111;//ch?n hàng 1
	_delay_ms(10);
	PORTC = 0b00000010;//ch?n c?t th? hai
	PORTD = 0b00111111;//ch?n hàng 1
	_delay_ms(10);
	PORTC = 0b00000100;//ch?n c?t th? ba
	PORTD = 0b00000000;//ch?n hàng tat ca cac hang
	_delay_ms(10);
	PORTC = 0b00001000;//ch?n c?t th? 4
	PORTD = 0b00111111;//ch?n hàng 1
	_delay_ms(10);
	PORTC = 0b00010000;//ch?n c?t th? 5
	PORTD = 0b00111111;//ch?n hàng 1
	_delay_ms(10);
}
void ChuU()
{
	/*quét t?ng c?t*/
	_delay_ms(10);
	PORTC = 0b00000001;//ch?n c?t ??u tiên
	PORTD = 0b00000001;//ch?n hàng 1
	_delay_ms(10);
	PORTC = 0b00000010;//ch?n c?t th? hai
	PORTD = 0b01111110;//ch?n hàng 1
	_delay_ms(10);
	PORTC = 0b00000100;//ch?n c?t th? ba
	PORTD = 0b01111110;//ch?n hàng tat ca cac hang
	_delay_ms(10);
	PORTC = 0b00001000;//ch?n c?t th? 4
	PORTD = 0b01111110;//ch?n hàng 1
	_delay_ms(10);
	PORTC = 0b00010000;//ch?n c?t th? 5
	PORTD = 0b00000001;//ch?n hàng 1
	_delay_ms(10);
}


int main(void)
{
	/* Replace with your application code */
	//Chon cong ra
	DDRC = 0b00011111;
	DDRD = 0b01111111;
	while (1)
	{
		So3();
	}
}


