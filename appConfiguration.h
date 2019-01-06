//Autor : Erik Churo
#ifndef _APP_CONFIG_
#define _APP_CONFIG_
//estructura de datos que aglutina los diferentes estados de las tareas
enum APP_STATE{//estados
  APP_STATE_INIT = 1,//estado de inicio
  APP_STATE_HIGH = 2,//estado no pulsador
  APP_STATE_DEBOUNCE = 3,//estado de espera, elimina rebotes
  APP_STATE_LOW = 4,//estado pulsador
  APP_STATE_DISABLE =5//estado desactivado
};
struct APP_CONFIGURATION{
  unsigned char _20_MS_;//espera de 20 ms
  unsigned char _TMR0_;//TMR0
};
//instancia con la configuracion de la aplicacion
struct APP_CONFIGURATION appConfig;
//funcion de inicializacion
void APP_CONFIGURATION_Initialize();
#endif 
