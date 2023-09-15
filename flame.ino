
 const int flameDigitalPin = 32; // Digital output pin
 // Analog output pin

void setup() {
  Serial.begin(115200); // Initialize serial communication
  pinMode(flameDigitalPin, INPUT); // Set the digital output pin as an input
   // Set the analog output pin as an input
}

void loop() {
  int digitalValue = digitalRead(flameDigitalPin); // Read the digital output value (HIGH or LOW)
   // Read the analog voltage

  if (digitalValue == HIGH) {
    Serial.println("Digital - Flame detected!"); // Print a message if flame is detected (digital)
  } else {
    Serial.println("Digital - No flame detected");
  }

   // Print the analog value

  delay(1000); // Wait for a moment before reading again (adjust as needed)
} // put your setup code here, to run once:




  // put your main code here, to run repeatedly:
