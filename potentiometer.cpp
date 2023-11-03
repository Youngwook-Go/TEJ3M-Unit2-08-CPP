// Created by: Youngwook Go
// Created on: NOV 2023
// Potentiometer

#include <Servo.h>

Servo servoNumber1;

const int potPin = A0;
float duration;
float distance;
float value;
int potentiometer;

void setup() {
    pinMode(potPin, INPUT);
  
    servoNumber1.attach(0);
    servoNumber1.write(0);
}

void loop() {
    value = analogRead(potPin);
    value = map(value, 0, 1023, 0, 180);
  
    servoNumber1.write(value);
    delay(100);
}