//Autor : Erik Churo
#include<htc.h> 			//Incluimos librería del micro a usar
__CONFIG(WRT_OFF & WDTE_OFF & PWRTE_OFF & FOSC_XT & LVP_OFF);
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
//WRT_OFF = Codigo no Potegido
//WDTE_OFF = Watch Dog Timer Desactivado
//PWRTE_OFF = Power Activado
//FOSC_XT = Osiclador cristal
//LVP_OFF = Low Voltage Porgramming Desactivado
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/ 	
#define _XTAL_FREQ 4000000 				//Oscilador Interno de 4MHZ	

//Funciones para el correcto funcionamiento del programa principal
#include "appConfiguration.h"
#include "appS2.h"
//
//FUNCION PRINCIPAL DEL PROGRAMA
//
void main(){
  APP_CONFIGURATION_Initialize();//funcion de inicializacion
  while(1){//HILO PRINCIPAL, TAREAS QUE DEBE ATENDER EL MICRO
    APP_S2_Task();//maquina de estados pulsadar boton
  }
}

//funcion de atencion a la interrupciones
static void interrupt isr(){
  if (T0IF){
    T0IF = 0;//bajamos el flag
    APP_PIC_TIMER0Set(appConfig._TMR0_);//comenzamos a contar
    if (appS2.state == APP_STATE_DEBOUNCE){//estado de bloque 
      appS2.timerCount = appS2.timerCount + 1; //incrementados contador de 20ms
    }
 }
}

