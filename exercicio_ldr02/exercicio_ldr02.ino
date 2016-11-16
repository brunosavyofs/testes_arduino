//#include <prescaler.h>

int ldr = A0;
int vLdr = 0;
int led = 11;
const int luzMax = 255;

void setup() {
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  analogWrite(led, 255);
  
}

void loop() {
  vLdr = analogRead(ldr);
  if (vLdr > luzMax) vLdr = luzMax;
  analogWrite(led, luzMax - vLdr);
  delay(100);
}

