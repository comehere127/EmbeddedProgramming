	
#include <avr/io.h>
#include <util/delay.h>
#include "DemoLCD.h" //include th? vi?n myLCD

int main(){ 
       init_LCD(); //kh?i ?? LCD
       clr_LCD(); // x�a to� b? LCD
 
       print_LCD("Hello world",11); //hi?n th? 1 chu?i k� t? 
       move_LCD(2,1); //di chuy?n cursor ??n d�ng 2, c?t ??u ti�n
       print_LCD("Duong Tu",8); //hi?n th? chu?i th? 2
       while(1){

       };
}