/*******************************************************
This program was created by the
CodeWizardAVR V3.12 Advanced
Automatic Program Generator
� Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 10.02.2016
Author  : 
Company : 
Comments: 


Chip type               : ATmega48P
AVR Core Clock frequency: 8,000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 128
*******************************************************/

#include <avr/io.h>
#include <util/delay.h>

long int i=0;

const char mas[2761] ={0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111110,
0b11111111,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11111111,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11111111,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11111111,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11111111,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11111111,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11111111,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11100000,
0b00001111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b00011111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111110,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b00111111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111100,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111100,
0b01111111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111100,
0b01111111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111100,
0b01111111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111100,
0b01111111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111100,
0b01111111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111100,
0b01111111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111100,
0b01111111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b00111111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111100,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11110000,
0b00011111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111110,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11100000,
0b00001111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11100000,
0b00001111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111111,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11110000,
0b00011111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111110,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11110000,
0b00111111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111100,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b01111111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b01111111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b01111111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b01111111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b01111111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b01111111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b11000000,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11110000,
0b00111111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111100,
0b11111111,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11100000,
0b00011111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111110,
0b11111111,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b00001111,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111111,
0b11111111,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11111111,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11111111,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11111111,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000010,
0b00000000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11111111,
0b11111111,
0b00000001,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111110,
0b11111111,
0b00111111,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
};

int j;
 
 
void vivod (int nomer)
{
 for (j=1;j<24;j++) {
 SPDR=mas[(nomer-1)*23+j];
 while(!(SPSR & (1<<SPIF))) {};  
  }
 
} 


void main(void)
{
// Declare your local variables here

// Crystal Oscillator division factor: 1
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
      int k;
        for (k=1;k<121;k++) { 
            vivod(k);
            PORTB |= (1<<0);
            _delay_us(610);
            PORTB &=~(1<<0);
            i++;
                };

      }
}
