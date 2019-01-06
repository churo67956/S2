#include "appPIC.h"
//boton presionado
unsigned char APP_PIC_BtnPressed(){
  return !RA4;//boton pulsado o no
}
//fijar el valor de TMR0 que vamos a temporizar
void APP_PIC_TIMER0Set(unsigned char _TMR0_){
  TMR0 = _TMR0_;
}
