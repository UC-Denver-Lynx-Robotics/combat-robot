#include <Servo.h> // Include the Servo library, which allows us to control the ESC (Electronic Speed Controller) as if it were a servo motor
// Original forum link for reference: https://forum.arduino.cc/t/controlling-a-esc-with-the-servo-library/72935

Servo ESC1; // Create a Servo object named ESC1 that represents the ESC we are controlling

int pos = 0; // Initialize a position variable; not used directly in this code but may be useful for future modifications

// Function to arm the ESC. "Arming" is a necessary initialization step to make the ESC ready to receive throttle signals.
void arm() {
  setSpeed(0); // Set the motor speed to 0% (full stop)
  delay(1000); // Pause for 1 second to ensure the ESC has time to recognize the stopped position and complete arming
}

// Function to set motor speed, accepts speed as a percentage (0 to 100)
void setSpeed(int speed) {
  int angle = map(speed, 0, 100, 0, 180); // Map the speed (0-100%) to an angle (0-180) for the ESC control
  ESC1.write(angle); // Write the mapped angle to the ESC, adjusting the motor's speed
}

void setup() {
  ESC1.attach(3); // Attach the ESC (via the Servo object) to digital pin 3
  arm();          // Call the arm() function to initialize the ESC before use
}

void loop() {
  int speed; // Variable to hold the current speed value in each step of the loop

  // Increase motor speed gradually from 0% to 70% in steps of 5%
  for (speed = 0; speed <= 70; speed += 5) {
    setSpeed(speed); // Set the current speed value to the ESC
    delay(1000);     // Wait for 1 second at each speed increment to allow for a smooth ramp-up
  }

  delay(4000); // Hold at 70% speed for 4 seconds to maintain high speed briefly

  // Decrease motor speed gradually from 70% back to 0% in steps of 5%
  for (speed = 70; speed > 0; speed -= 5) {
    setSpeed(speed); // Set the current speed value to the ESC
    delay(1000);     // Wait for 1 second at each speed decrement to allow for a smooth ramp-down
  }

  setSpeed(0);    // Ensure the motor is stopped (0% speed) at the end of the cycle
  delay(1000);    // Pause for 1 second before repeating the loop
}
