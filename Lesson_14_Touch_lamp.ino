/*
Arduino Starter Kit-CoreChamp by Janmejay Singh
    Lesson 14: Touch Lamp
Touch Sensor  UNO R3
  GND ->  GND
  VCC ->  +5V
  SIG ->  D2
  LED1 '+' -> D3
  LED2 '+' -> D5
  LED3 '+' -> D6

 This code is completely free for any use.
 Visit https://github.com/janmejaysyngh/Arduino-Starter-Kit-CoreChamp .
 Visit http://www.corechamp.in for more information.
 Visit http://www.arduino.cc to learn about the Arduino.
 */
 
#define sensorPin 7 // capactitive touch sensor - Arduino Digital pin D1
 
int ledPin = 13; // Output display LED (on board LED) - Arduino Digital pin D13
 
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  
  pinMode(sensorPin, INPUT);
}
 
void loop() {
  int senseValue = digitalRead(sensorPin);
  if (senseValue == HIGH){
    digitalWrite(ledPin, HIGH);
    Serial.println("TOUCHED");
  }
  else{
    digitalWrite(ledPin,LOW);
    Serial.println("not touched");
  } 
  delay(500);
  
}
