//#include <prescaler.h>

int ldr = A0;
int vLdr = 0; 

void setup() {
  pinMode(ldr, INPUT);
  Serial.begin(9600);
}

void loop() {
  vLdr = analogRead(ldr);
  Serial.println(vLdr);
  delay(100);
}

