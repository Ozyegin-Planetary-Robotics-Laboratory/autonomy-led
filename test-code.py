import serial
import time

# Replace 'COMx' with the correct COM port of your Arduino
arduino_port = 'COM10'
baud_rate = 9600

# Open serial connection to Arduino
ser = serial.Serial(arduino_port, baud_rate, timeout=1)
time.sleep(2)  # Allow time for the Arduino to reset

try:
    while True:
        for command in ['0', '1', '2','1',"0"]:
            ser.write(command.encode())  # Send the command to Arduino
            print(f"Sent command: {command}")
            time.sleep(0.1)  # Adjust the delay time as needed for your animation speed
            ser.write(command.encode())  # Send the command to Arduino
except KeyboardInterrupt:
    print("\nClosing serial connection.")
    ser.close()
