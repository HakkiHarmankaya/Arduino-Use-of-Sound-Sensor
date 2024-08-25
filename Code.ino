void setup() {
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  int sev = digitalRead(2);
  if(sev == LOW)
  {
    digitalWrite(4, 1);
    digitalWrite(3, 0);
    delay(175);
  }
  else
  {
    digitalWrite(4, 0);
    digitalWrite(3, 1);
  }

}
