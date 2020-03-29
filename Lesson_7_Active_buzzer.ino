/* Arduino Starter Kit-CoreChamp by Janmejay Singh
    Lesson 7 : Active buzzer

 Turns on and off a buzzer connected to digital
 pin 9, with delay of 2 second & 1second delay simentanously.


 The circuit:
 * buzzer '+'ve attached to pin 13
 * buzzer '-'ve attached to ground

 */
 
void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(9,HIGH);
delay(2000);
digitalWrite(9,LOW);
delay(2000);
digitalWrite(9,HIGH);
delay(1000);
digitalWrite(9,LOW);
delay(1000);
}
