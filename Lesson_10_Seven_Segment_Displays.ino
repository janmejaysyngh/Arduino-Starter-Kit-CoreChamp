/* Arduino Starter Kit-CoreChamp by Janmejay Singh
    Lesson 10: Seven Segment Displays
       
 The circuit:
 * UNO R3   SEG
 * D2  ->  C
 * D3  ->  D
 * D4  ->  E
 * D5  ->  G
 * D6  ->  F
 * D7  ->  A
 * D8  ->  B
 * GND ->  COM - 220Ω resistor

 This code is completely free for any use.
 Visit https://github.com/janmejaysyngh/Arduino-Starter-Kit-CoreChamp .
 Visit http://www.corechamp.in for more information.
 Visit http://www.arduino.cc to learn about the Arduino.
 */

void setup()
{
  // define pin modes
  
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 
}

void loop() 
{
  // loop to turn leds od seven seg ON
  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
    delay(600);
  }
  
  // loop to turn leds od seven seg OFF
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,LOW);
    delay(600);
  }
  
  
  delay(1000);

}
