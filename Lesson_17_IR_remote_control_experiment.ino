/*
Arduino Starter Kit-CoreChamp by Janmejay Singh
    Lesson 17: IR remote control experiment
UNO R3    IR Receiver
D2  ->  OUT
GND ->  GND
+5V ->  VCC
Red LED   -> D7 
Green LED -> D6 
Blue LED  -> D5;


 This code is completely free for any use.
 Visit https://github.com/janmejaysyngh/Arduino-Starter-Kit-CoreChamp .
 Visit http://www.corechamp.in for more information.
 Visit http://www.arduino.cc to learn about the Arduino.
 */

/*  Button codes : ON = A90, Volume up = 490, volume down = C90 */
#include <IRremote.h>                                           // infrared library
int RECV_PIN = 2;                                               // connect TSOP data pin to Arduino pin 2
int system_state=0; int led_status=0;                           // flag for system status and LED no
int red_led=7; int green_led=6; int blue_led=5; int count=0;    // define pin no. for LEDs

IRrecv irrecv(RECV_PIN);                                        // attach pin 2 as a datareceiver
decode_results results;                                         // define variable "results" as decoded results from IR library 'irrecv.decode' command

void setup()
{
  Serial.begin(9600);                                           // start serial monitor at a baud rate of 9600
  pinMode(red_led, OUTPUT);                                     // define pin 5 as output pin
  pinMode(green_led, OUTPUT);                                   // define pin 6 as output pin
  pinMode(blue_led, OUTPUT);                                    // define pin 7 as output pin
  irrecv.enableIRIn();                                          // working for receiving IR signals 
}

void loop() {
  if (irrecv.decode(&results)) {                                // check whether any infrared signal available
    Serial.print(count); Serial.print(" - ");                   // print the count value and system state for croschecking the output
    Serial.print(system_state); Serial.print(" - ");
    Serial.println(results.value,HEX);                          // convert into HEX datat and print in the serial monitor
    switch (results.value) {                                    // start comparing received data
      
      case 0xA90:                                               // check whether ON/OFF button pressed
      if(system_state==0)                                       // if system is in OFF state
        system_state=1;                                         // change the system state to ON
      else if (system_state==1)                                 // if system is in ON state
        system_state=0;                                         // change the system state to OFF
        digitalWrite(blue_led, LOW);                            // Turn off the Red LED
        digitalWrite(green_led, LOW);                           // Turn off the Green LED
        digitalWrite(red_led, LOW);                             // Turn off the Blue LED
        count=0;                                                // make the counter zero to start from begining
      break;
      
      case 0x490:                                               // check whether volume up button pressed
          if(system_state==1 && count==0) {                     // if system is ON and no LEDs are ON
            count=1;                                            // assign counter value 1
            digitalWrite(red_led, HIGH); }                      // turn on the red LED
          else if(system_state==1 && count==1) {                // if system is ON and only Red LED is ON
            count=2;                                            // assign counter value 2
            digitalWrite(green_led, HIGH); }                    // turn on the green LED
            else if(system_state==1 && count==2) {              // if system is ON and green LED is ON
            count=3;                                            // assign counter by value 3
            digitalWrite(blue_led, HIGH); }                     // turn on the blue LED
          else if(system_state==1 && count==3) {                // if system is ON and all LEDs are ON
            count=3;                                            // hold the counter value at maximum (3).
          }
      break;

      case 0xC90:                                               // check whether volume down button pressed
          if(system_state==1 && count==3) {                     // if system is ON and all LEDs are ON
            count=2;                                            // assign counter value 2
            digitalWrite(blue_led, LOW); }                      // turn off the blue LED
          else if(system_state==1 && count==2) {                // if system is ON and only blue LED is OFF
            count=1;                                            // assign counter value 1
            digitalWrite(green_led, LOW); }                     // turn off the green LED
          else if(system_state==1 && count==1) {                // if system is ON and green LED is OFF
            count=0;                                            // assign counter value 0
            digitalWrite(red_led, LOW); }                       // turn off the red LED
          else if(system_state==1 && count==0) {                // if system is ON and all LEDs are OFF
            count=0;                                            // hold the counter value at minimum (0).
          }
      break;
    }
    delay(500);                                                 // delay to avoid junk data in serial monitor
  irrecv.resume();                                              // receiver is ready to receive data
  }
}
