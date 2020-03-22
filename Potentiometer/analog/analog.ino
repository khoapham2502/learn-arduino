/*
  reading potentiometer (bien tro)
*/

int ledPin = 9;
int controlPin = 3;
int val = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(controlPin);
  analogWrite(ledPin, val / 4);
}
