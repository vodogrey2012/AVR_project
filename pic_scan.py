#!/usr/bin/python

import cv2
import os

code_file_name  = "SPI48.c"
array_file_name = "array.h"
obj_file_name = "obj.o"
hex_file_name = "hex.hex"
resized_image_name = "resized_image.jpeg"


# resize image
#image = cv2.imread( raw_input("Name of image -> "))
input_image = cv2.imread( "col.jpg")
resized_image = cv2.resize( input_image, (120, 60)) 
cv2.imwrite( resized_image_name , resized_image)


# array file writing
file = open( array_file_name , 'w')

file.write( "const char array[120][30] = {\n")

i = 0
j = 0
color = 0
shift = 0
for i in range(0 , 120 , 1):
    file.write( "// " + str(i) + " column\n{")
    for color in range(0 , 3 , 1):
        for j in range(0 , 60 , 6):
            file.write( "0b00")
            for shift in range(0 , 6 , 1):
                file.write( str( resized_image[j + shift][i][color] / 128))
            file.write( " , ")
    file.seek( -3 , os.SEEK_END)
    file.truncate()
    file.write( "},\n")
            
file.seek(-4, os.SEEK_END)
file.truncate() 

file.write( "}\n};\n")

file.close()

# complinig and loadind ucont
c2obj = "avr-gcc -mmcu=atmega328p -I. -gdwarf-2 -DF_CPU=16000000UL -Os -o " + obj_file_name + " " + code_file_name
obj2hex = "avr-objcopy -O ihex " + obj_file_name + " " + hex_file_name
hex2ucont = "avrdude -c usbasp -p atmega328p -P usb -U flash:w:" + hex_file_name

os.system( c2obj)
os.system( obj2hex)
os.system( hex2ucont)




