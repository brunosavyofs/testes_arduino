int led = 13;
int botao = 7;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
  //pinMode(botao, INPUT_PULLUP);
}

void piscar(int tempo) {
  digitalWrite(led, HIGH);
  delay(tempo);
  digitalWrite(led, LOW);
  delay(tempo);
}

void loop() {
  Serial.println(digitalRead(botao));
  if (digitalRead(botao) == LOW) {
    piscar(100);
  } else {
    piscar(500);
  }
}

