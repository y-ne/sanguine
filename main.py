import serial

ser = serial.Serial('/dev/cu.usbmodem1101', 9600)
ser.write(b'hello\n')
print(ser.readline().decode())
