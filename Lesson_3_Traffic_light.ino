
/* Arduino Starter Kit-CoreChamp by Janmejay Singh
    Lesson 3: Traffic light
    
 The green light flashes for 5 seconds,
 then the yellow light flashes 3 times, and then the red light 5 seconds, 
 the formation of a cycle. And then repeat the cycle. 
 This experiment shows the effect of the simulation of traffic lights.
 
 This code is completely free for any use.
 Visit https://github.com/janmejaysyngh/Arduino-Starter-Kit-CoreChamp .
 Visit http://www.corechamp.in for more information.
 Visit http://www.arduino.cc to learn about the Arduino.
*/
int red = 3;
int yellow = 5;
int green = 7;


 void setup(){
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
}
 
  void loop(){
    changeLights();
    delay(15000);
}

void changeLights(){
    // green off, yellow on for 3 seconds
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(3000);

    // turn off yellow, then turn red on for 5 seconds
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(5000);

    // red and yellow on for 2 seconds (red is already on though)
    digitalWrite(yellow, HIGH);
    delay(2000);

    // turn off red and yellow, then turn on green
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    delay(5000);
}
