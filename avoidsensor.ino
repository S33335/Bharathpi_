const int IR_SENSOR_EN_PIN = 32;
const int IR_SENSOR_PIN = 13;  // Replace with the GPIO pin number you've chosen
const float VCC = 5; // Supply voltage (3.3V or 5V, depending on your sensor)
const float ADC_RESOLUTION = 1023.0; // ADC resolution (10-bit ADC)


void setup() {
  pinMode(IR_SENSOR_EN_PIN, OUTPUT); // Set the EN pin as an output
  digitalWrite(IR_SENSOR_EN_PIN, HIGH); // Turn on the sensor (or LOW to turn it off)

  Serial.begin(115200);
  pinMode(IR_SENSOR_PIN, INPUT); // Set the IR sensor pin as an input
}

void loop() {
  // Read the analog value from the IR sensor
  int sensorValue = analogRead(IR_SENSOR_PIN);

  // Calculate voltage based on the analog reading
  float voltage = (sensorValue / ADC_RESOLUTION) * VCC;

  // Calculate distance (adjust this equation based on your sensor's specifications)
  // This is just an example equation, actual values may vary
  float distanceCM = 40 / (voltage - 0.2); // Example equation for distance in centimeters

  // Print the distance to the serial monitor
  Serial.print("Distance (cm): ");
  Serial.println(distanceCM);

  // Add a delay before the next reading
  delay(500); // Adjust the delay based on your application's requirements
}
