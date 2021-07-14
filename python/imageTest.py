from os import system
from escpos.printer import Serial
import serial

p = Serial(devfile='/dev/ttyUSB1',
           baudrate=115200,
           bytesize=8,
           parity='N',
           stopbits=1,
           xonxoff=True
           )


#p.image("logo_rodape.png")
p.text("rafaelachesalesrafaelachesalesrafaelachesalesrafaelachesalesrafaelachesales\n")
p.image("logo_rodape.png")
p.cut()
exit()