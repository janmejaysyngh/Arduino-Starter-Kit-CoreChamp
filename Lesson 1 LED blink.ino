/* Arduino Starter Kit-CoreChamp
    Lesson 1: LED blink
    
 Turn an LED on for one second off for one second and repeat forever.
 
 This code is completely free for any use.
 Visit http://www.corechamp.in for more information.
 Visit http://www.arduino.cc to learn about the Arduino.
 */

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);   // Turn on the LED
  delay(1000);              // Wait for one second
  digitalWrite(13, LOW);    // Turn off the LED  
  delay(1000);              // Wait for one second
}
/* 
  Try changing the 1000 ms in the above delay() to
  different numbers and see how it affects the timing.
 
 Other challenges:
    * Decrease the delay to 10 ms and absorb the result
    * Modify the code above to resemble a heartbeat.  
 */
