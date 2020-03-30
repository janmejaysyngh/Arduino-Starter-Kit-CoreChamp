/*
Arduino Starter Kit-CoreChamp by Janmejay Singh
    Lesson 15: Flame alarm system
Flame sensor    UNO R3
Short Pin ->  +5V
Long Pin  ->  A0 & 10KΩ resistor
Buzzer    ->  D6
Note：The short pin of the Flame sensor is connected to +5v.
      The long pin of Flame sensor is connected to A0 & one side of 10KΩ resistor
      The other side of 10KΩ resistor is connected to GND

 This code is completely free for any use.
 Visit https://github.com/janmejaysyngh/Arduino-Starter-Kit-CoreChamp .
 Visit http://www.corechamp.in for more information.
 Visit http://www.arduino.cc to learn about the Arduino.
 */
 
int buzzer = 6;
int LED = 7;
int flame_sensor = 4;
int flame_detected;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(flame_sensor, INPUT);
}

void loop()
{
  flame_detected = digitalRead(flame_sensor);
  if (flame_detected == 1)
  {
    Serial.println("Flame detected...! take action immediately.");
    digitalWrite(buzzer, HIGH);
    digitalWrite(LED, HIGH);
    delay(200);
    digitalWrite(LED, LOW);
    delay(200);
  }
  else
  {
    Serial.println("No flame detected. stay cool");
    digitalWrite(buzzer, LOW);
    digitalWrite(LED, LOW);
  }
  delay(1000);
}
