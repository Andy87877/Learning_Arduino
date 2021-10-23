char LED[5] = {D3,D4,D5,D6,D7}; //LED位置
int Waitmsec = 100; //間隔幾毫秒
void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(LED[i], OUTPUT);
  }
}

void One() {
  digitalWrite(LED[4], HIGH);
  delay(Waitmsec);
  for (int i = 3; i >= 0; i--) {
    digitalWrite(LED[i+1], LOW);
    digitalWrite(LED[i], HIGH);
    delay(Waitmsec);
  }
}

void Two() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(LED[i], LOW);
    digitalWrite(LED[i+1], HIGH);
    delay(Waitmsec);
  }
}

void Three() {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 5; j++) {
      if ((((j % 2)+(i%2)) % 2)==0){ //位置和第幾次時
        digitalWrite(LED[j], HIGH);
      } else {
        digitalWrite(LED[j], LOW);
      }
    }
    delay(Waitmsec);
  }
}

void Four() {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 5; j++) {
      if ((i % 2) == 0) {
        digitalWrite(LED[j], HIGH);
      } else {
        digitalWrite(LED[j], LOW);
      }
    } 
    delay(Waitmsec);
  }
}

void loop() {
  One();
  Two();
  Three();
  Four();
}
