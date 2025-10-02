#include <Arduino.h>

int ledPin = 13; // ขา LED

void setup() {
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    digitalWrite(ledPin, HIGH);
    Serial.println("LED ON");
    delay(1000);
    digitalWrite(ledPin, LOW);
    Serial.println("LED OFF");
    delay(1000);
}