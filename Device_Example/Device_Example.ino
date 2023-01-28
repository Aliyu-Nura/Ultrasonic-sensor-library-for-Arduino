/*A device example for an ultrasonic sensor library*/

#include <ultrasonic.h>

int trigpin = 11; //Trigger pin of the ultrasonic sensor that gives the duration data output
int echopin = 12;  //Echo pin of the ultrasonic sensor that receives the data inout

USS ultrasonic (trigpin,echopin);    //Creating an object of the class USS

void setup() {
  pinMode(echopin, INPUT);
  pinMode(trigpin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  long distance = ultrasonic.GetDistance(); 
  ultrasonic.ShowDistance();
  delay(500);

}
