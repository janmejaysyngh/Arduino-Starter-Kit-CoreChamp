/* Arduino Starter Kit-CoreChamp by Janmejay Singh
    Lesson 9: Making Alarm

 Turns on and off a Buzzer connected to digital
 pin 11 & other pin to GND.


 The circuit:
 * Buzzer (+ve) pin connected to pin 11
 * Buzzer (-ve) pin connected to GND
 * LDR one side to 5V and other side with 10KΩ resistor and A0 
 * 10KΩ resistor other pin to GND

This code is completely free for any use.
 Visit https://github.com/janmejaysyngh/Arduino-Starter-Kit-CoreChamp .
 Visit http://www.corechamp.in for more information.
 Visit http://www.arduino.cc to learn about the Arduino.
 */

const int Buzzer = 11;
const int ldrPin = A0;

void setup() {

Serial.begin(9600);
pinMode(Buzzer, OUTPUT);
pinMode(ldrPin, INPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);

if (ldrStatus <= 200) {

digitalWrite(Buzzer, HIGH);

Serial.print("Object detected, Turn ON the Buzzer : ");

Serial.println(ldrStatus);
}

else {

digitalWrite(Buzzer, LOW);

Serial.print("NO Object, Turn OFF the Buzzer : ");

Serial.println(ldrStatus);

}

}
