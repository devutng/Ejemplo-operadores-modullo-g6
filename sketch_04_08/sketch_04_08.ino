/*
 * Estructura básica
 * Por: Anastacio Rodríguez
 * Fecha: 08 de Abril de 2022
 * 
 * Este programa me permite experimentar en el uso y aplicaciones del 
 * operador módulo.
 */

// Bibliotecas

// Constantes

// Variables
int dato = 0;
double tiempoInicial;
double tiempoFinal;

// Definición de objetos

// Condiciones iniciales - Se ejecuta sólo una vez al energizar
void setup() {// Inicio de void setup ()
  // Aquí va tu código
  Serial.begin(115200); //Iniciar comunicación Serial.
  Serial.println("Comunicacion Serial!");
  

}// Fin de void setup

// Cuerpo del programa - Se ejecuta constamente
void loop() {// Inicio de void loop
  // put your main code here, to run repeatedly:

  tiempoInicial = micros();
  for(int i=0; i<1000; i++){
    dato++;
    if(dato>8){
      dato = 0;  
    }
  }

  tiempoFinal = micros();
  Serial.println("IF:");
  Serial.println(tiempoFinal-tiempoInicial);

  delay(5000);

  tiempoInicial = micros();
  
  for(int i=0; i<1000; i++){
    dato++;
    dato%=8; 
  }
  
  tiempoFinal = micros();
  Serial.println("Con Modulo:");
  Serial.println(tiempoFinal-tiempoInicial);

  delay(5000);
 
}// Fin de void loop

// Funcioes del usuario
