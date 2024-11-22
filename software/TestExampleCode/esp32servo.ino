//Need to check documentation for the library to install for this to work properly
#include <Servo.h>
#define SERVO_PIN 26

Servo servoMotor;

void setup() {
    Serial.begin(9600);
    servoMotor.attach(SERVO_PIN);
}

void loop() {
    for(int posDegrees = 0; posDegrees <= 180; posDegrees++) {
        servoMotor.write(posDegrees);
        Serial.println(posDegrees);
        delay(20);
    }

    for(int posDegrees = 180; posDegrees >= 0; posDegrees--) {
        servoMotor.write(posDegrees);
        Serial.println(posDegrees);
        delay(20);
    }
}
