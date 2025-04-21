import serial

with serial.Serial('/dev/cu.usbmodem1101', 9600) as ser:
    ser.write(b'this is me\n')
    print(ser.readline().decode().strip())
