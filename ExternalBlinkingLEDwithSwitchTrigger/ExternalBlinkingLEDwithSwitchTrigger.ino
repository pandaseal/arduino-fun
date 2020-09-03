void setup() {
  pinMode(4, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  if(digitalRead(2) == 1){
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4, LOW);
    delay(500);
  } else {
    digitalWrite(4, LOW);
  }
}
