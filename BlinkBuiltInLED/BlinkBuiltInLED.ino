void setup() {

  // use GPIO pin 13 as output
  pinMode(13, OUTPUT);

}

void loop() {

  // turn on built in LED and wait 1 sec
  digitalWrite(13, HIGH);
  delay(500);

  // turn off built in LED and wait 1 sec
  digitalWrite(13, LOW);
  delay(500);

}
