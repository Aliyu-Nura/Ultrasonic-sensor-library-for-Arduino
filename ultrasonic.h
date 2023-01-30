#ifndef ultrasonic_h
#define ultrasonic_h
#include <Arduino.h>

class USS{
protected:
    int TrigPin = 11;
    int EchoPin = 12;
    long duration,cm,inch;

public:
    USS();
    USS(int trigger,int echo);  //class contructor
    void Setup();
    long GetDistance();         //Method to get distance from ultrasonic sensor
    long Distance_in_inch();    //method to print distance in inches
    void ShowDistance();        //Method to print ultrasonic sensor readings to the serial monitor

};
#endif
