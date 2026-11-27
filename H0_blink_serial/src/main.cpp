#include <Arduino.h>

const int LED_PIN = LED_BUILTIN;
unsigned long sayac = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
  delay(1000);
  Serial.println("Hisar Roket IREC 2027 - UKB Baslatildi!");
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  Serial.print("Durum: LED ACIK | Dongu: ");
  Serial.println(sayac);
  delay(500);

  digitalWrite(LED_PIN, LOW);
  Serial.println("Durum: LED KAPALI");
  delay(500);

  sayac++;
}