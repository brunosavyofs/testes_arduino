int pinoAnalogico = A0;
int vPino = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  vPino = analogRead(pinoAnalogico);
  //Serial.println(vPino);
  Serial.println(vPino/204.6);
  Serial.println();
  delay(500);
}

