int Button = 12;
int Buzzer = 11;
int Val = 0;

void setup() {
  pinMode(Button, INPUT_PULLUP);

  pinMode(Buzzer, OUTPUT);


}

void loop() {
  Val = digitalRead(Button);

  if (Val == LOW) {
    digitalWrite(Buzzer, HIGH);
  } else {
    digitalWrite(Buzzer, LOW);
  }

}
