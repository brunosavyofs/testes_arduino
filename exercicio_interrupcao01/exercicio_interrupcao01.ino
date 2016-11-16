volatile boolean vLed = false;
int led = 13;
int botao = 2;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
  attachInterrupt(0, algoAconteceu, FALLING);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(led, vLed);
}

void algoAconteceu() {
  Serial.print("mudou para ");
  Serial.println(vLed);
  vLed = !vLed;
}

