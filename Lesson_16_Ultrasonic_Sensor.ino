/*
Arduino Starter Kit-CoreChamp by Janmejay Singh
    Lesson 16: Ultrasonic Sensor
HC SR04   UNO R3
Vcc   ->  VCC
Trig  ->  D2
Echo  ->  D3
Gnd   ->  GND


 This code is completely free for any use.
 Visit https://github.com/janmejaysyngh/Arduino-Starter-Kit-CoreChamp .
 Visit http://www.corechamp.in for more information.
 Visit http://www.arduino.cc to learn about the Arduino.
 */
 
const int trigPin = 2; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 3; // Echo Pin of Ultrasonic Sensor

void setup() {
   Serial.begin(9600); // Starting Serial Terminal
}

void loop() {
   long duration, inches, cm;
   pinMode(trigPin, OUTPUT);
   digitalWrite(trigPin, LOW);
   delayMicroseconds(2);
   digitalWrite(trigPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(trigPin, LOW);
   pinMode(echoPin, INPUT);
   duration = pulseIn(echoPin, HIGH);
   inches = microsecondsToInches(duration);  // converting values to inches
   cm = microsecondsToCentimeters(duration); // converting values to cm
   Serial.print(inches);
   Serial.print("in, ");
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();
   delay(100);
}

long microsecondsToInches(long microseconds) {
   return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}
