import serial
import time

arduino_port = "COMX"  # Recordatorio: Reemplazar "COMX" con el puerto COM al que está conectado el Arduino
baud_rate = 9600

try:
    arduino = serial.Serial(arduino_port, baud_rate)
    print("Conexión establecida con Arduino")
except:
    print("No se pudo conectar con Arduino. Verifica el puerto COM.")
    exit()

while True:
    command = input("Ingresa 'R' para luz roja, 'Y' para luz amarilla, 'G' para luz verde, o 'Q' para salir: ")
    if command.upper() == 'Q':
        break
    arduino.write(command.encode())
    time.sleep(0.1)

arduino.close()
