// --- 28BYJ-48 Motor Control --- //

// -- Pin Configuration -- //

/*
ULN2003 Driver      Arduino
IN1                 8
IN2                 9
IN3                 10
IN4                 11
GND                 GND
*/

// Include Stepper Library
#include <Stepper.h>

// Number of steps per rotation
const int steps = 2038;

// Pin sequence
Stepper Stepper_Motor = Stepper(steps,8,9,10,11);

void setup() {

}

void loop() {
  Stepper_Motor.setSpeed(15);
  Stepper_Motor.step(steps);
}
