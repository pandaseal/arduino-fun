void setup() {
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.print(digitalRead(2));
  delay(100);
}
