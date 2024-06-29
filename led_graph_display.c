/*
    Project name : Arduino Uno LED Bar Graph Display
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-led-bar-graph-display
*/

const int numLeds = 10;     // Number of LEDs in the bar graph
int ledPins[numLeds] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};  // Array of LED pins
int sensorValue = 0;        // Variable to simulate sensor value

void setup() {
  // Initialize the LED pins as outputs
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Simulate sensor value incrementally
  sensorValue = (sensorValue + 100) % 1024;  // Increment sensor value (simulated)

  // Map sensor value to LED bar graph
  int ledLevel = map(sensorValue, 0, 1023, 0, numLeds);

  // Display the LED bar graph
  for (int i = 0; i < numLeds; i++) {
    if (i < ledLevel) {
      digitalWrite(ledPins[i], HIGH);  // Turn on LEDs up to ledLevel
    } else {
      digitalWrite(ledPins[i], LOW);   // Turn off LEDs beyond ledLevel
    }
  }

  delay(500);  // Delay for visualization (adjust as needed)
}
