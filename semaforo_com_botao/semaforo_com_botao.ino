const int ledVermelhoAuto = 12;
const int ledAmareloAuto = 8;
const int ledVerdeAuto = 7;

const int ledVerdePedestre = 13;
const int ledVermelhoPedestre = 4;

const int botao = 2;

volatile int estadoBotao = LOW;
volatile boolean pedestreChamou = false;

int pinos[] = {ledVermelhoAuto, ledAmareloAuto, ledVerdeAuto};

void setup() {
  pinMode(ledVermelhoAuto, OUTPUT);
  pinMode(ledAmareloAuto, OUTPUT);
  pinMode(ledVerdeAuto, OUTPUT);
  
  pinMode(ledVerdePedestre, OUTPUT);
  pinMode(ledVermelhoPedestre, OUTPUT);

  pinMode(botao, INPUT);

  Serial.begin(9600);

  attachInterrupt(0, pedePassagem, RISING);
//  pisca(ledVerdePedestre);
}

void loop() {
  if (pedestreChamou) {
    delay(2000);
    aciona(ledAmareloAuto, 2000);
    aciona(ledVermelhoAuto, 0);
    digitalWrite(ledVerdePedestre, HIGH);
    digitalWrite(ledVermelhoPedestre, LOW);
    pedestreChamou = false;
    delay(5000);
    pisca(ledVerdePedestre);
  } else {
    aciona(ledVerdeAuto, 0);
    digitalWrite(ledVerdePedestre, LOW);
    digitalWrite(ledVermelhoPedestre, HIGH);
  }
}

void pedePassagem() {
  Serial.print("pedestre pediu passagem ");
  Serial.println(estadoBotao);
  pedestreChamou = true;
}

void aciona(int pino, int tempo) {
  for (int x = 0; x < 3; x++) {
    if (pinos[x] == pino) {
      digitalWrite(pinos[x], HIGH);
    } else {
      digitalWrite(pinos[x], LOW);
    }
  }
  delay(tempo);
}

void pisca(int led) {
  for (int x = 0; x <= 5; x++) {
    digitalWrite(led, HIGH);
    delay(300);
    digitalWrite(led, LOW);
    delay(300);
  }
}

