from os import system
from escpos.printer import Serial

p = Serial(devfile='/dev/ttyUSB1',
           baudrate=9600,
           bytesize=8,
           parity='N',
           stopbits=1,
           timeout=1.00,
           dsrdtr=True)


p.image("utech_logo-pequeno3.png")

p.cut()
exit()