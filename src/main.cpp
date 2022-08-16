#include <Arduino.h>

void setup() {
  pinMode(19, OUTPUT);
  pinMode(16, OUTPUT);  
}

void loop() {
  digitalWrite(19, HIGH);
  digitalWrite(16, LOW);  
  delay(500);
  digitalWrite(19, LOW);
  digitalWrite(16, HIGH);  
  delay(500);  
}