#include <avr/io.h>
#include <avr/delay.h>

//chuong trinh con phat du lieu
void uart_char_tx(unsigned char chr){
    while (bit_is_clear(UCSRA,UDRE)) {}; //cho den khi bit UDRE=1    
            UDR=chr;
}

int main(void){    
//set baud, 57.6k ung voi f=8Mhz, xem bang 70 trang 165, Atmega32 datasheet
    UBRRH=0;    
    UBRRL=8;
    
    //set khung truyen va kich hoat bo nhan du lieu
    UCSRA=0x00;
    UCSRC=(1<<URSEL)|(1<<UCSZ1)|(1<<UCSZ0);
    UCSRB=(1<<TXEN);    
    
    while(1){
        for (char i=32; i<128; i++){
            uart_char_tx(i+1);    //phat du lieu
            _delay_ms(100);
        }
    }    
}