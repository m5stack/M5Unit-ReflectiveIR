/**
 * @file detect.ino
 * @author SeanKwok (shaoxiang@m5stack.com)
 * @brief M5Unit ReflectiveIR detect demo
 * @version 0.1
 * @date 2023-11-29
 *
 *
 * @Hardwares: M5Unit ReflectiveIR
 * @Platform Version: Arduino M5Stack Board Manager v2.0.7
 * @Dependent Library:
 * M5Unified: https://github.com/m5stack/M5Unified
 */

#include <M5Unified.h>
#include <Arduino.h>

#define IR_ANALOG_PIN  36
#define IR_DIGITAL_PIN 26

void setup() {
    M5.begin();
    pinMode(IR_ANALOG_PIN, INPUT);
    pinMode(IR_DIGITAL_PIN, INPUT);
}

void loop() {
    int analog  = analogRead(IR_ANALOG_PIN);
    int digital = digitalRead(IR_DIGITAL_PIN);
    Serial.printf("analog: %d\r\n", analog);
    Serial.printf("digital: %d\r\n", digital);
    delay(100);
}
