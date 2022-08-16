#include <Arduino.h>

void setup() {
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);  
}

void loop() {
  digitalWrite(15, HIGH);
  digitalWrite(16, LOW);  
  delay(500);
  digitalWrite(15, LOW);
  digitalWrite(16, HIGH);  
  delay(500);  
}