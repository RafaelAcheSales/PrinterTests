from os import system
from PIL.Image import frombytes
from escpos.printer import Serial

EOT = b'\x04'
ENQ = b'\x05'
DLE = b'\x10'
RT_STATUS = DLE + EOT
RT_STATUS_ONLINE = RT_STATUS +  b'\x01'
RT_STATUS_PAPER = RT_STATUS +  b'\x04'
TRASMIT_STATUS = b'\x1D\x72\x01'

p = Serial(devfile='/dev/ttyUSB0',
           baudrate=9600,
           bytesize=8,
           parity='N',
           stopbits=1,
           xonxoff=True
           )


#p.image("logo_rodape.png")
p.image("logo_rodape.png")
p.text("rafaelachesalesrafaelachesalesrafaelachesalesrafaelachesalesrafaelachesales\n")
print(p.query_status(TRASMIT_STATUS))
p.cut()
exit()