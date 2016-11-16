#include <MsTimer2.h>
#include <avr/power.h>
#include <Narcoleptic.h>

const int led = 13;
volatile boolean valor = HIGH;

void pisca() {
  digitalWrite(led, valor);
  valor = !valor;
}

void setup() {
  Narcoleptic.disableTimer1();
  pinMode(led, OUTPUT);
  MsTimer2::set(1000, pisca);
  MsTimer2::start();
}

void loop() {}

