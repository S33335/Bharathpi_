int LASER_PIN=25;
void setup() {
  pinMode(LASER_PIN, OUTPUT);
  Serial.begin(115200);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(LASER_PIN, HIGH);
  Serial.println("Laser ON");
  delay(1000);
  digitalWrite(LASER_PIN, LOW);
  Serial.println("Laser OFF");
  delay(1000);
}
  // put your main code here, to run repeatedly: