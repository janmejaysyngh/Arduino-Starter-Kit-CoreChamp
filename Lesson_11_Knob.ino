/* Arduino Starter Kit-CoreChamp by Janmejay Singh
    Lesson 3: Traffic light

 The Circuit
 *Servo Yellow pin to D9
 *Servo Red pin to 5V
 *Servo Black pin to GND
 *Potentiometer Middle pin to A0
 *Potentiometer first pin to GND
 *Potentiometer last pin to 5V
 
 This code is completely free for any use.
 Visit https://github.com/janmejaysyngh/Arduino-Starter-Kit-CoreChamp .
 Visit http://www.corechamp.in for more information.
 Visit http://www.arduino.cc to learn about the Arduino.
*/


#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
}
