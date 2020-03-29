/*
Arduino Starter Kit-CoreChamp by Janmejay Singh
    Lesson 13: Relay module experiment
 The Circuit
Relay module    UNO R3
      S ->  D8
      + ->  VCC
      - ->  GND
  Button Pin1 -> 5V
  Button Pin2 -> D2 & 10KΩ resistor one side
  10KΩ resistor other side to 5V
   
This code is completely free for any use.
 Visit https://github.com/janmejaysyngh/Arduino-Starter-Kit-CoreChamp .
 Visit http://www.corechamp.in for more information.
 Visit http://www.arduino.cc to learn about the Arduino.
 */
 
int buttonPin = 2;// connect output to push button
int relayPin = 8;// Connected to relay

int val = 0; // push value from pin 2
int lightON = 0;//light status
int pushed = 0;//push status


void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP); 
  pinMode(relayPin, OUTPUT);
 digitalWrite(relayPin, HIGH);// keep the load OFF at the begining. If you wanted to be ON, change the HIGH to LOW
}

void loop() {
  val = digitalRead(buttonPin);// read the push button value

  if(val == HIGH && lightON == LOW){

    pushed = 1-pushed;
    delay(100);
  }    

  lightON = val;

      if(pushed == HIGH){
        Serial.println("Light ON");
        digitalWrite(relayPin, LOW); 
       
      }else{
        Serial.println("Light OFF");
        digitalWrite(relayPin, HIGH);
   
      }     

  delay(100);
}
