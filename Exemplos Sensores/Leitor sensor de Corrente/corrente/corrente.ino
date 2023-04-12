#include "EmonLib.h"    


#define BAUD_RATE            115200
#define delay_enviar_pacote  5000 //delay em milisegundos para enviar pacote

extern float lin1;  

extern void SETUP_CORRENTE();
extern void LE_CORRENTE1();


void setup() {
  Serial.begin(BAUD_RATE);
  SETUP_CORRENTE();
}


void loop() {
  LE_CORRENTE1();
  delay(5);
}
