
 const int flowSensorPin = 33; // Replace with the GPIO pin you are using

   volatile int flowCount = 0;
   unsigned long lastMillis = 0;
   float flowRate = 0.0;

   void IRAM_ATTR pulseCounter() {
     flowCount++;
   }

   void setup() {
     pinMode(flowSensorPin, INPUT_PULLUP);
     attachInterrupt(digitalPinToInterrupt(flowSensorPin), pulseCounter, RISING);
     Serial.begin(115200);
   }

   void loop() {
     unsigned long currentMillis = millis();

     if (currentMillis - lastMillis >= 1000) { // Update every 1 second
       detachInterrupt(digitalPinToInterrupt(flowSensorPin)); // Disable interrupts
       flowRate = (float)flowCount * 60.0 / 7.5; // Calculate flow rate (adjust the divisor based on your sensor's specifications)
       flowCount = 0;
       lastMillis = currentMillis;
       attachInterrupt(digitalPinToInterrupt(flowSensorPin), pulseCounter, RISING); // Re-enable interrupts
 Serial.print("Flow Rate: ");
       Serial.print(flowRate);
       Serial.println(" L/min");
     }
   }