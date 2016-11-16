int pinoPWM = 11;

void setup() {
  pinMode(pinoPWM, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int vCiclo = 0;
  for (; vCiclo <= 255; vCiclo++) {
    analogWrite(pinoPWM, vCiclo);
    delay(5);
  }
  for (; vCiclo >= 0; vCiclo--) {
    analogWrite(pinoPWM, vCiclo);
    delay(5);
  }
//  if (Serial.available()) {
//    vCiclo = Serial.parseInt();
//    analogWrite(pinoPWM, vCiclo);
//  }
}

