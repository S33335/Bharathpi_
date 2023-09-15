#include <Arduino.h>

// Define the digital pin to which the Hall Effect sensor is connected
const int hallSensorPin = 33; // You can use any available digital pin on your ESP32

void setup() {
  Serial.begin(115200); // Initialize serial communication for debugging

  pinMode(hallSensorPin, INPUT_PULLUP); // Set the Hall Effect sensor pin as an input with internal pull-up resistor
}

void loop() {
  // Read the state of the Hall Effect sensor
  int sensorState = digitalRead(hallSensorPin);

  // Print the sensor state to the serial monitor
  if (sensorState == LOW) {
    Serial.println("Magnetic Field Detected");
  } else {
    Serial.println("No Magnetic Field Detected");
  }

  delay(1000); // Delay for 1 second before taking the next reading
}
