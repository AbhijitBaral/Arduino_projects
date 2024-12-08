import serial
from tkinter import *
import tkinter as tk

ser = serial.Serial('/dev/ttyUSB0', baudrate = 9600, timeout = 1)

def turnOnLED():
    ser.write(b'o')

def turnOffLED():
    ser.write(b'x')

root = Tk()
root.title('LED toggle GUI')

btn_ON = tk.Button(root, text="Turn ON", command = turnOnLED)
btn_ON.grid(row =0, column = 0)

btn_OFF = tk.Button(root, text="Turn OFF", command = turnOffLED)
btn_OFF.grid(row =0,column =1)

root.geometry("350x350")
root.mainloop()
