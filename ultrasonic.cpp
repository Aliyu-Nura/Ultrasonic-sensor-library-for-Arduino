#include "ultrasonic.h"
#include <Arduino.h>
//contructor definition
USS::USS(){

}
USS::USS(int trigger,int echo){
    TrigPin = trigger;
    EchoPin = echo;
}

//Other device method definitions
void USS::Setup(){
   pinMode(TrigPin, OUTPUT);
   pinMode(EchoPin, INPUT);
   Serial.begin(9600);
}
long USS::GetDistance(){
    digitalWrite(TrigPin, LOW);
    delayMicroseconds(5);
    digitalWrite(TrigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(TrigPin, LOW);
    duration = pulseIn(EchoPin, HIGH);
    cm =  (duration/2) / 29.1;
    inch =(duration/2) / 74;
    return cm;
}
long USS::Distance_in_inch(){
    return (duration/2) / 74;
}
void USS::ShowDistance(){
    Serial.print(inch);
    Serial.print(" \", ");
    Serial.print(cm);
    Serial.print(" cm");
    Serial.println();
}
