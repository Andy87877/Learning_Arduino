int Waitmsec = 100;
void setup() {
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
}

void One() {
  digitalWrite(D3, LOW);
  digitalWrite(D7, HIGH);
  delay(Waitmsec);
  digitalWrite(D7, LOW);
  digitalWrite(D6, HIGH);
  delay(Waitmsec);
  digitalWrite(D6, LOW);
  digitalWrite(D5, HIGH);
  delay(Waitmsec);
  digitalWrite(D5, LOW);
  digitalWrite(D4, HIGH);
  delay(Waitmsec);
  digitalWrite(D4, LOW);
  digitalWrite(D3, HIGH);
  delay(Waitmsec);
}

void Two() {
  digitalWrite(D7, LOW);
  digitalWrite(D3, HIGH);
  delay(Waitmsec);
  digitalWrite(D3, LOW);
  digitalWrite(D4, HIGH);
  delay(Waitmsec);
  digitalWrite(D4, LOW);
  digitalWrite(D5, HIGH);
  delay(Waitmsec);
  digitalWrite(D5, LOW);
  digitalWrite(D6, HIGH);
  delay(Waitmsec);
  digitalWrite(D6, LOW);
  digitalWrite(D7, HIGH);
  delay(Waitmsec);
}
void Three() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(D7, HIGH);
    digitalWrite(D5, HIGH);
    digitalWrite(D3, HIGH);
    digitalWrite(D6, LOW);
    digitalWrite(D4, LOW);
    delay(Waitmsec);
    digitalWrite(D7, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D6, HIGH);
    digitalWrite(D4, HIGH);
    delay(Waitmsec);
  }
  digitalWrite(D7, LOW);
  digitalWrite(D6, LOW);
  digitalWrite(D5, LOW);
  digitalWrite(D4, LOW);
  digitalWrite(D3, LOW);
}

void Four() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(D7, HIGH);
    digitalWrite(D5, HIGH);
    digitalWrite(D3, HIGH);
    digitalWrite(D6, HIGH);
    digitalWrite(D4, HIGH);
    delay(Waitmsec);
    digitalWrite(D7, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D6, LOW);
    digitalWrite(D4, LOW);
    delay(Waitmsec);
  }
}

void loop() {
  One();
  Two();
  Three();  
  Four();
}
