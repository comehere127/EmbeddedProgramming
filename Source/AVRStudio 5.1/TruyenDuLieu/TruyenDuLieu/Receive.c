#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
//chuong trinh con phat du lieu
void uart_char_tx(unsigned char chr){
      while (bit_is_clear(UCSRA,UDRE)) {}; //cho den khi bit UDRE=1 
      UDR=chr;
}
volatile unsigned char u_Data;

int main(void){    
//set baud, 57.6k ung voi f=8Mhz, xem bang 70 trang 165, Atmega32 datasheet
      UBRRH=0;    
      UBRRL=8;
//set khung truyen va kich hoat bo nhan du lieu
      UCSRA=0x00;
      UCSRC=(1<<URSEL)|(1<<UCSZ1)|(1<<UCSZ0);
      UCSRB=(1<<RXEN)|(1<<TXEN)|(1<<RXCIE);//cho phep ca 2 qua trinh nhan va//truyen, va cho  phep ngat sau khi nhan xong 
      sei(); //cho phep ngat toan cuc

      while(1){
      }    
}
ISR(SIG_UART_RECV){ //trinh phuc vu ngat USART hoan tat nhan 
      u_Data=UDR;
      uart_char_tx(u_Data);
}