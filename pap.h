//copyright 153229935

#ifndef pap_h
#define pap_h

#include <Arduino.h>
#include <Servo.h>
#include <Stepper.h>


const int solenoide = 3;
const int stepsPerRevolution = 2048;//esto es una vuelta completa (cambiar para que sean pasos mas chicos)

Servo myservo;
Stepper myStepper = Stepper(100, 3, 4, 5, 6);

void funcion_papel();
void marcar();


#endif
