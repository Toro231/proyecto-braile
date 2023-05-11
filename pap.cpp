#include "pap.h"

void funcion_papel(){
  Serial.println("counterclockwise");    
  myStepper.step(stepsPerRevolution);  
  delay(1000); 
}

void marcar(){
  digitalWrite(solenoide,HIGH);
  delay(100);
  digitalWrite(solenoide,LOW);
}