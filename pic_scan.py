#!/usr/bin/python

import cv2
import os
import sys
import argparse

tmp_dir = "/tmp/AVRtmp/"
code_file_name  = "code.c"
array_file_name = tmp_dir + "array.h"
obj_file_name = tmp_dir + "obj.o"
hex_file_name = tmp_dir + "hex.hex"
resized_image_name = tmp_dir + "resized_image.jpeg"

# parse arguments

parser = argparse.ArgumentParser( description = 'Load image to the light ball')
parser.add_argument( '-f' , '--fast' , dest = 'speed' , const = 270 , default = 400 , action = 'store_const' , help = 'Set -f to load fast speed image')
parser.add_argument('image_name' , type = str ,help = 'Input image name')
args = parser.parse_args()


# create tmp dir
os.system( "mkdir -p " + tmp_dir)

# resize image
input_image = cv2.imread( args.image_name)

if input_image is None:
    sys.exit( "Invalid image name: " + sys.argv[1])

resized_image = cv2.resize( input_image , (120, 60)) 
cv2.imwrite( resized_image_name , resized_image)

# array file writing
file = open( array_file_name , 'w')

file.write( "const char array[120][23] PROGMEM = {\n")

i = 0
j = 0
color = 0
shift = 0
for i in range(119 , -1 , -1):
    file.write( "// " + str(i) + " column\n{")
    for color in range(0 , 3 , 1):
        for j in range(0 , 60 , 1):
            if (j == 0) and (color == 0):
                file.write( "0b")
            elif (color * 60 + j)%8 == 0 :
                file.write( " , 0b")
            file.write( str( resized_image[j][i][(color + 1) % 3] / 128))
    file.write( "0000},\n")
            
file.seek(-3, os.SEEK_END)
file.truncate() 

file.write( "}\n};\n")

# speed write
file.write( "\n#define WAIT _delay_us(" + str(args.speed) + ")\n")

file.close()


# complinig and loadind ucont
c2obj = "avr-gcc -mmcu=atmega328p -I. -gdwarf-2 -DF_CPU=16000000UL -Os -o " + obj_file_name + " " + code_file_name
obj2hex = "avr-objcopy -O ihex " + obj_file_name + " " + hex_file_name
hex2ucont = "avrdude -c usbasp -p atmega328p -P usb -U flash:w:" + hex_file_name

os.system( c2obj)
os.system( obj2hex)
os.system( hex2ucont)

# remove tmp dir
os.system( "rm -r " + tmp_dir)


