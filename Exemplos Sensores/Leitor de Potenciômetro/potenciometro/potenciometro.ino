#define PORT 34

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.flush();
  Serial.println(analogRead(PORT));
  Serial.flush();
  delay(5); //Envia os dados a cada 5 mili
}
