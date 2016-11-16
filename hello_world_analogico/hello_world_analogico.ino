const int pinoLed = 11;
const int tempoDelay = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinoLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   acende();
   delay(1000);
   apaga();
}

void acende() {
//  analogWrite(pinoLed, 255);
//  delay(1000);
  Serial.println("Acendendo");
  for (int x=0; x <= 255; x++) {
    Serial.println(x);
    analogWrite(pinoLed, x);
    delay(5);
  }
}

void apaga() {
  Serial.println("Apagando");
  for (int x=255; x >= 0; x--) {
    Serial.println(x);
    analogWrite(pinoLed, x);
    delay(5);
  }
//  analogWrite(pinoLed, 0);
//  delay(1000);
}

