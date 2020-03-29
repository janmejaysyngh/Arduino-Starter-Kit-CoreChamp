/* Arduino Starter Kit-CoreChamp by Janmejay Singh
    Lesson 9: Making Alarm

 Turns on and off a RGB connected to digital
 pin 9,10 & 11 & Common pin to Cathode or Anode.


 The circuit:
 RGB are generally 2 type Common anode(+ve) or Common Cathode(-ve GND)
 * RGB 1 pin connected to pin 9
 * RGB 1 pin connected to pin 10
 * RGB 1 pin connected to pin 11
 * RGB common pin connected to pin GND/5+ve (Common pin)

This code is completely free for any use.
 Visit https://github.com/janmejaysyngh/Arduino-Starter-Kit-CoreChamp .
 Visit http://www.corechamp.in for more information.
 Visit http://www.arduino.cc to learn about the Arduino.
 */
const int RED_PIN = 9;
const int GREEN_PIN = 10;
const int BLUE_PIN = 11;
 void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(RED_PIN, HIGH);   // turn the LED on (HIGH for com Anode, LOW for Com Cathode)
  delay(5000);                       // wait for a second
  digitalWrite(RED_PIN, LOW);    // turn the LED off (LOW for com Anode, HIGH for Com Cathode)
  delay(1000);    
  digitalWrite(GREEN_PIN, HIGH);   // turn the LED on (HIGH for com Anode, LOW for Com Cathode)
  delay(1000);                       // wait for a second
  digitalWrite(GREEN_PIN, LOW);    // turn the LED off (LOW for com Anode, HIGH for Com Cathode)
  delay(1000); 
  digitalWrite(BLUE_PIN, HIGH);   // turn the LED on (HIGH for com Anode, LOW for Com Cathode)
  delay(1000);                       // wait for a second
  digitalWrite(BLUE_PIN, LOW);    // turn the LED off (LOW for com Anode, HIGH for Com Cathode)
  delay(1000); // wait for a second
}
