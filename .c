#include <avr/io.h>
#include <util/delay.h>


void main(void)
{

// Function: Bit7=In Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
DDRD=(0<<DDD7) | (0<<DDD6) | (0<<DDD5) | (0<<DDD4) | (0<<DDD3) | (1<<DDD2) | (1<<DDD1) | (1<<DDD0);
// State: Bit7=T Bit6=T Bit5=T Bit4=T Bit3=T Bit2=T Bit1=T Bit0=T 
PORTD=(0<<PORTD7) | (0<<PORTD6) | (0<<PORTD5) | (0<<PORTD4) | (0<<PORTD3) | (0<<PORTD2) | (0<<PORTD1) | (0<<PORTD0);


while (1)
      { 
        int i;
        PORTD &=~(1<<0); 
        
        for (i=1;i<65;i++) {
                             PORTD &=~(1<<2); // 0 в data
                             PORTD |= (1<<1); // регистрация
                             PORTD &=~(1<<1); // бита
                            } 
                            
        for (i=1;i<61;i++) {
                             PORTD |= (1<<2); // 1 в data
                             PORTD |= (1<<1); // регистрация
                             PORTD &=~(1<<1); // бита
                            }
        
        for (i=1;i<61;i++) {
                             PORTD &=~(1<<2); // 0 в data
                             PORTD |= (1<<1); // регистрация
                             PORTD &=~(1<<1); // бита
                            }  
                                
        
        PORTD |= (1<<0);
        
        _delay_ms(1);

        PORTD &=~(1<<0); 
        
        for (i=1;i<65;i++) {
                             PORTD &=~(1<<2); // 0 в data
                             PORTD |= (1<<1); // регистрация
                             PORTD &=~(1<<1); // бита
                            }
                            
        for (i=1;i<61;i++) {
                             PORTD &=~(1<<2); // 0 в data
                             PORTD |= (1<<1); // регистрация
                             PORTD &=~(1<<1); // бита
                            }                             
                            
        for (i=1;i<61;i++) {
                             PORTD |= (1<<2); // 1 в data
                             PORTD |= (1<<1); // регистрация
                             PORTD &=~(1<<1); // бита
                            }
        
        
        PORTD |= (1<<0);
        
        _delay_us(100);
      }
}
