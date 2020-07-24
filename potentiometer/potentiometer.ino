int potPin = A0;
int ledPin = 9;
int potVal = 0;
int brightness = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  potVal = analogRead(potPin);

  brightness = map(potVal, 0, 1023, 0, 255);

  analogWrite(ledPin, brightness);

}
