#include <Arduino.h>

// Define the analog pin to which the LM35 sensor is connected
const int analogPin = 34; // You can use any available analog pin on your ESP32

void setup() {
  Serial.begin(115200); // Initialize serial communication for debugging
}

void loop() {
  // Read the analog value from the LM35 sensor
  int rawValue = analogRead(analogPin);

  // Convert the raw analog value to temperature in Celsius
  float voltage = (rawValue / 4095.0) * 3.3; // Convert to voltage (3.3V is the ESP32 reference voltage)
  float temperatureC = (voltage - 0.5) * 100.0; // LM35 has a scale factor of 10 mV/°C

  // Print the temperature value to the serial monitor
  Serial.print("Temperature (Celsius): ");
  Serial.println(temperatureC);

  delay(1000); // Delay for 1 second before taking the next reading
}