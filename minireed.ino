
const int reedPin = 33; // Define the GPIO pin to which the Reed sensor is connected

void setup() {
  pinMode(reedPin, INPUT_PULLUP); // Set the pin as an input with a pull-up resistor
  Serial.begin(115200);
}

void loop() {
  int reedState = digitalRead(reedPin); // Read the state of the Reed sensor

  if (reedState == LOW) {
    // Reed sensor is triggered (magnet is near)
    Serial.println("Reed sensor triggered!");
  } else {
    // Reed sensor is not triggered (magnet is away)
    Serial.println("Reed sensor not triggered.");
  }

  delay(1000); // Add a delay to avoid rapid readings
}