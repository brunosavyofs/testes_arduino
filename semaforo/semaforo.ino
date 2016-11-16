const int pinoLedVermelho = 12;
const int pinoLedAmarelo = 8;
const int pinoLedVerde = 7;

int pinos[] = {pinoLedVermelho, pinoLedAmarelo, pinoLedVerde};

void setup() {
  // put your setup code here, to run once:
  pinMode(pinoLedVermelho, OUTPUT);
  pinMode(pinoLedAmarelo, OUTPUT);
  pinMode(pinoLedVerde, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  aciona(pinoLedVerde, 10000);
  aciona(pinoLedAmarelo, 2000);
  aciona(pinoLedVermelho, 8000);
//  digitalWrite(pinoLedVermelho, HIGH);
//  digitalWrite(pinoLedAmarelo, HIGH);
//  digitalWrite(pinoLedVerde, HIGH);
}

void aciona(int pino, int tempo) {
  for (int x = 0; x < 3; x++) {
    Serial.println(pinos[x]);
    if (pinos[x] == pino) {
      Serial.print("aciona ");
      Serial.println(pinos[x]);
      digitalWrite(pinos[x], HIGH);
    } else {
      Serial.print("apaga ");
      Serial.println(pinos[x]);
      digitalWrite(pinos[x], LOW);
    }
  }
  delay(tempo);
  Serial.println();
  Serial.println();
}

