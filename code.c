#include <avr/io.h>
#include <util/delay.h>
#include "array.h"


#define SET PORTD |= (1<<1) ; PORTD&=~(1<<1)
#define SIG1 PORTD |= (1<<2)
#define SIG0 PORTD &=~(1<<2)
#define READY2SET PORTB &=~(1<<0)
#define SET_ALL PORTB |= (1<<0)



void main()
{

#pragma optsize-
CLKPR=(1<<CLKPCE);
CLKPR=(0<<CLKPCE) | (0<<CLKPS3) | (0<<CLKPS2) | (0<<CLKPS1) | (0<<CLKPS0);
#ifdef _OPTIMIZE_SIZE_
#pragma optsize+
#endif

DDRB=0xFF;

SPCR=0b01110000;


while (1)
{ 
int i = 0;
int j = 0;
int shift = 0;
for( i = 0 ; i < 120 ; i++)
{
    READY2SET;

    // set empty
    for( j = 0 ; j < 4 ; j++)
    {
        SIG0;
        SET;
    }

    for( j = 0 ; j < 30 ; j++)
    {
        for( shift = 5 ; shift >= 0 ; shift--)
        {
            if( array[i][j] & (1<<shift) )
                SIG1;
            else
                SIG0;
            SET;
        }
    
    }
    SET_ALL;
    _delay_ms(100);
}
    
        
};
}
