/*
  reading potentiometer (bien tro)
*/

int ledPin = 13;
int pemPin = 5;
int val = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(pemPin);
  analogWrite(ledPin, val/4);
  Serial.println(val);
}
