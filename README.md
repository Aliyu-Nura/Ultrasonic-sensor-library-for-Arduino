# Arduino library for HC-SR04 ultrasonic distance sensor.

HC-SR04 is an ultrasonic sensor that measures distances from 2 to 400cm.

## Usage
Sensor is initialized by creating instance of class USS and providing trigger and echo pins.
```c
USS sensor(TrigPin, EchoPin);
```

A display method that display the sensor reading in the serial monitor.
```c
ShowData();
```

To measure the distance in cm, you just call `GetDistance()`, which will return distance in centimeters.

The calculation assumes a temperature of around 20°C. For improved accuracy you may also provide a temperature yourself.
