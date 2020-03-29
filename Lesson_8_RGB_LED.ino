/* Arduino Starter Kit-CoreChamp by Janmejay Singh
    Lesson 8: RGB LED

 Turns on and off a RGB connected to digital
 pin 10,11 & 12 & Common pin to Cathode or Anode.


 The circuit:
 RGB are generally 2 type Common anode(+ve) or Common Cathode(-ve GND)
 * RGB 1 pin connected to pin 10
 * RGB 1 pin connected to pin 11
 * RGB 1 pin connected to pin 12
 * RGB common pin connected to pin GND/5+ve (Common pin)

 */
const int RED_PIN = 10;
const int GREEN_PIN = 11;
const int BLUE_PIN = 12;
 void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
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
