#include <avr/io.h>
#include <util/delay.h>
#include "/tmp/AVRtmp/array.h"


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
    for( j = 0 ; j < 23 ; j++)
    {
        SPDR=array[i][j];
        while(!(SPSR & (1<<SPIF)));
    }
    SET_ALL;
    WAIT;
}
    
        
};
}
