/*A device example for an ultrasonic sensor library*/

#include <ultrasonic.h>
/*Connect the trigger and echo pin of the ultrasonic sensor to the pin 11 and 12 of the Arduino Uno board for default usage,
pass the pins numbers to the class constructor*/
/*Uncomment the following to declare the pins manually*/

//int trigpin = 2 ; //Trigger pin of the ultrasonic sensor that gives the duration data output assuming pin 2
//int echopin = 3 ;  //Echo pin of the ultrasonic sensor that receives the data input assuming pin 3
//USS ultasonic (trigpin,echopin);

USS ultrasonic;     //For default usage

void setup() {
 ultrasonic.Setup();
}

void loop() {
  long distance = ultrasonic.GetDistance(); 
  ultrasonic.ShowDistance();
  delay(500);

}
