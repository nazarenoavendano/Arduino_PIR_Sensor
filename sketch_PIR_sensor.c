const int PIR = 2; 
const int LED = 12;
const int BUZZER = 7;

void setup() {
  pinMode(PIR, INPUT); 
  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  digitalWrite(BUZZER, HIGH);
}

void loop() {
  int valor = digitalRead(PIR);

  if(valor == HIGH) {
    digitalWrite(LED, HIGH);
    digitalWrite(BUZZER, LOW);
    delay(100);
    digitalWrite(BUZZER, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
