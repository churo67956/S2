//Autor : Erik Churo
//MIDDLEWARE QUE NOS PERMITE INTERRACTUAR CON EL PIC
//DE ESTA FORMA BASTA CON CAMBIAR ESTE FICHERO PARA 
//EMPLEAR CUALQUIER OTRO PIC ( MAYOR TRANSPARENCIA )
#ifndef _APP_PIC_
#define _APP_PIC_
#include <htc.h> 
#include "appConfiguration.h" 
//boton presionado

unsigned char APP_PIC_BtnPressed();
//fijar el valor de TMR0 que vamos a temporizar
void APP_PIC_TIMER0Set(unsigned char _TMR0_);
#endif
