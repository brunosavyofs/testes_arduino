#include <prescaler.h>

const int led = 13;

void setup() {
  pinMode(led, OUTPUT);
  setClockPrescaler(CLOCK_PRESCALER_1);
}

void loop() {
  digitalWrite(led, HIGH);
  trueDelay(1000);
  digitalWrite(led, LOW);
  trueDelay(1000);
}

