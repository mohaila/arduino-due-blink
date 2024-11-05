#include <Arduino.h>

#define SECOND 1000

// setup board, called once at startup
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

// program loop, called every time code is ready
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(SECOND);
  digitalWrite(LED_BUILTIN, LOW);
  delay(SECOND);
}