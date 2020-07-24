int potPin = A0;
int motorPin = 9;
int motorSpeed = 0;
int potVal = 0;

void setup() {
  pinMode(motorPin, INPUT);
}

void loop() {
  potVal = analogRead(potPin);
  motorSpeed = map(potVal, 0, 1023, 0, 255);

  analogWrite(motorPin, motorSpeed);

}
