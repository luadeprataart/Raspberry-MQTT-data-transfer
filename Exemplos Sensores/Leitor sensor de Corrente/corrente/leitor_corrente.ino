
#include "EmonLib.h"

//VARIAVEIS AJUSTAVEIS DE CORRENTE
#define I_calibration  7.5 //fator de calibração da corrente  11.11            


EnergyMonitor EnerMonitor1; //cria uma instancia da classe EnergyMonitor
      

#define PIN_sensor_1 34 //define o canal analógico 1 para o sinal do SCT
  
float lin1;  

void SETUP_CORRENTE();
void LE_CORRENTE1();


//--------- VOID SETUP PRINCIPAL ---------
void SETUP_CORRENTE() {
  pinMode (PIN_sensor_1, INPUT);
  EnerMonitor1.current(PIN_sensor_1, I_calibration);   
}

//--------- VOID LE CORRENTE ---------
void LE_CORRENTE1() {
  lin1 = EnerMonitor1.calcIrms(1480); 
  Serial.flush();
  Serial.println(lin1);
  Serial.flush();
}
