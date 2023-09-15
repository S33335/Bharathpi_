
#include <Arduino.h>

// Define the analog pin to which the photoresistor is connected
const int analogPin = 15; // You can use any available analog pin on your ESP32

void setup() {
  Serial.begin(115200); // Initialize serial communication for debugging
}

void loop() {
  // Read the analog value from the photoresistor
  int photoresistorValue = analogRead(analogPin);

  // Print the photoresistor value to the serial monitor
  Serial.print("Photoresistor Value: ");
  Serial.println(photoresistorValue);

  delay(1000); // Delay for 1 second before taking the next reading
}