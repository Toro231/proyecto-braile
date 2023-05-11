#include <Arduino.h>
#include "pap.h"
#include "abc.h"

char* palabras;

void funcion_papel();
void marcar();

#define Serial1

void setup() {
  Serial.begin(9600);//blututh // BLUETOOTH* govir
  Serial.println("conexion exitosa.");
  myservo.attach(9); //pin en el que se encuentra el micro servo
  myStepper.setSpeed(10);  //velocidad 
}

void loop() {

  //while(Serial.availa|ble())//
  //{
  //  palabras = Serial.read();//guarda lo que lee en la variable palabras
  //}
  palabras = "bot";
  int palabras_size = sizeof(*palabras);
  for (i = 0 ; palabras[i] != '\0' ; i++)//lee cada letra de la palabra
  {
    switch (palabras[i]){
      case 'a': funcion_a();
      break;
      case 'b': funcion_b();
      break;
      case 'c': funcion_c();
      break;
      case 'd': funcion_d();
      break;
      case 'e': funcion_e();
      break;
      case 'f': funcion_f();
      break;
      case 'g': funcion_g();
      break;
      case 'h': funcion_h();
      break;
      case 'i': funcion_i();
      break;
      case 'j': funcion_j();
      break;
      case 'k': funcion_k();
      break;
      case 'l': funcion_l();
      break;
      case 'm': funcion_m();
      break;
      case 'n': funcion_n();
      break;
      case 'o': funcion_o();
      break;
      case 'p': funcion_p();
      break;
      case 'q': funcion_q();
      break;
      case 'r': funcion_r();
      break;
      case 's': funcion_s();
      break;
      case 't': funcion_t();
      break;
      case 'u': funcion_u();
      break;
      case 'v': funcion_v();
      break;
      case 'w': funcion_w();
      break;
      case 'x': funcion_x();
      break;
      case 'y': funcion_y();
      break;
      case 'z': funcion_z();
      break;
    }
  }
}