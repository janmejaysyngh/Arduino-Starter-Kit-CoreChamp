/*
Arduino Starter Kit-CoreChamp by Janmejay Singh
    Lesson 12: Stepper speed control
 The Circuit
 INT4 - D2
 INT3 - D3
 INT2 - D4
 INT1 - D5
 GND - GND
 +5V - 5V 
 Potentiometer - A0
   
This code is completely free for any use.
 Visit https://github.com/janmejaysyngh/Arduino-Starter-Kit-CoreChamp .
 Visit http://www.corechamp.in for more information.
 Visit http://www.arduino.cc to learn about the Arduino.
 */


#include <Stepper.h>
const int stepsPerRevolution = 90;
// change this to fit the number of steps per revolution
// for your motor
// initialize the stepper library on pins 2 through 5:
Stepper myStepper(stepsPerRevolution, 2,3,4,5);

void setup() {
   // set the speed at 60 rpm:
   myStepper.setSpeed(5);
   // initialize the serial port:
   Serial.begin(9600);
}

void loop() {
   // step one revolution in one direction:
   Serial.println("clockwise");
   myStepper.step(stepsPerRevolution);
   delay(500);
   // step one revolution in the other direction:
   Serial.println("counterclockwise");
   myStepper.step(-stepsPerRevolution);
   delay(500);
}
