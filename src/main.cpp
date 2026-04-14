#include <Arduino.h>
#define BTN_UP 5
void setup() {
pinMode(BTN_UP, OUTPUT);
}

void loop() {
digitalWrite(BTN_UP, LOW);
}