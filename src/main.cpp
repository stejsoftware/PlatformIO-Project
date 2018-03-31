#include <Arduino.h>

#define LED 13

void setup()
{
    Serial.begin(115200);
    pinMode(LED, OUTPUT);
}

void loop()
{
    Serial.println("on");
    digitalWrite(LED, HIGH);

    delay(500);

    Serial.println("off");
    digitalWrite(LED, LOW);

    delay(500);
}