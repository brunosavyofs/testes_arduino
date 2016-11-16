int pinoLed = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinoLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinoLed, HIGH);
  delay(2000);
  digitalWrite(pinoLed, LOW);
  delay(2000);
}
