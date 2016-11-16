const int pinoLed = 11;
const int pinoLdr = A0;
int valorLdr = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinoLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valorLdr = analogRead(pinoLdr);
  Serial.println(valorLdr);
  
  if (valorLdr >= 900) {
    analogWrite(pinoLed, 255);
  } else {
    analogWrite(pinoLed, 0);
  }
}

