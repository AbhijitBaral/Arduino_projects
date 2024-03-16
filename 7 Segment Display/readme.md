7 Segment Display:

A seven-segment display is a form of electronic display device for displaying decimal numerals that is an alternative to the more complex dot matrix displays.

![Seven_segment_01_Pengo](https://github.com/AbhijitBaral/Arduino_projects/assets/70994821/796397ab-2e4d-483b-a237-a5429448e8b4)

It consists of 7 elongated hexagonal LED screens arranged in an order as shown in the figure. A specific configuration of the LEDs are turned on so as to roughly otline the shape of the corresponding number. The LEDs are labeled 'a' to 'g' in clockwise sense.
The display used here has 10 pins: 7 pins-Numbers 1-Decimal point  2- Common Cathode

![802 11bgnwirelessLAN_Bluetooth4 1_BLE_ _60_480x480](https://github.com/AbhijitBaral/Arduino_projects/assets/70994821/59aa497d-002e-40de-94da-4dc24a4d31e3)

The program uses a 2D array to store the truth table of each number 0 to 9, where the 1 represents LED's On state and 0 off state.

![HowDoICheckTheHealthOfMySdCardOnMyRaspberryPi_8_480x480](https://github.com/AbhijitBaral/Arduino_projects/assets/70994821/1d8cbb85-acc8-4ac9-926e-ec0f95de8b38)


The number is input from Serial monitor. Serial buffer is checked if any input is present; If present, the digit is extracted into a char variable. A loop structure turns displays according to the truth table of the respective digit from 2D array. This loop structure is kept inside a different infinite while loop which is exited on the condition that another digit has been input into the serial buffer.
