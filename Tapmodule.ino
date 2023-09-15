include <Arduino.h>

const int sensorPin = 34;  // Define the GPIO pin connected to the sensor
bool tapped = false;

void setup() {
  pinMode(sensorPin, INPUT);
  Serial.begin(115200);
}

void loop() {
  int sensorValue = digitalRead(sensorPin);

  if (sensorValue == HIGH && tapped) {
    Serial.println("Tap detected!");
    // Your code to react to the tap goes here
    tapped = true;
  }

  if (sensorValue == LOW) {
    tapped = false;
  }

  delay(10);  // Add a small delay to debounce the sensor (adjust as needed)
}
