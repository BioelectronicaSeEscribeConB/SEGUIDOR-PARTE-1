#include <AFMotor.h> //incluimos libreria de shield motor
AF_DCMotor M3(3); //motor uno conectar en M3
AF_DCMotor M4(4); //motor uno conectar en M4
int a=0;
int b=1;
int vel=110; //Variable de velocidad

//int sensorI=A0; //sensor ir en A0
//int lecturaI=0; //lectura del sensor trasero
//
//int sensorD=A1; //sensor ir en A1
//int lecturaD=0; //lectura del sensor trasero

void setup() 
{
  Serial.begin(9600);    // set up Serial library at 9600 bps
  M3.run(RELEASE); //motor inicia apagado
  M4.run(RELEASE); //motor inicia apagado
  delay(1000);
}

void loop() 
{
//   lecturaI=digitalRead(sensorI);
//   lecturaD=digitalRead(sensorD);
//   
//   // impresion de sensores ir
//   Serial.print("Sensor Izquierdo: ");
//   Serial.print(lecturaI);
//   Serial.print("    Sensor Derecho:");
//   Serial.println(lecturaD);  
 ////////////////////////////////   1= NEGRO 0 = BLANCO
   if(digitalRead(A1) && digitalRead(A0))  //dos NEGRO  == 1   (1 == 1)  NEGRO
  {
   M3.setSpeed(100); //Escribe la velocidad
   M4.setSpeed(100); //Escribe la velocidad
   M3.run(BACKWARD);  //Gira hacia adelante
   M4.run(BACKWARD);  //Gira hacia adelante
    delay(100);
  a=0;
  }
 
  else if(!digitalRead(A1) && digitalRead(A0)) ( 1 , 0)
  {
    a=1;
     M3.setSpeed(150); //Escribe la velocidad
   M4.setSpeed(150); //Escribe la velocidad
    M3.run(BACKWARD);  //Gira hacia adelante
   M4.run(BACKWARD);  //Gira hacia adelante
    delay(20);
   M3.setSpeed(100); //Escribe la velocidad
   M4.setSpeed(100); //Escribe la velocidad
   M3.run(FORWARD);  //Gira hacia adelante
   M4.run(BACKWARD);  //Gira hacia adelante
    delay(50);
   M3.setSpeed(200); //Escribe la velocidad
   M4.setSpeed(200); //Escribe la velocidad
   M3.run(FORWARD);  //Gira hacia adelante
   M4.run(BACKWARD);  //Gira hacia adelante
    delay(50);
   M3.setSpeed(250); //Escribe la velocidad
   M4.setSpeed(250); //Escribe la velocidad
   M3.run(FORWARD);  //Gira hacia adelante
   M4.run(BACKWARD);  //Gira hacia adelante
    delay(70);
  }
  else if(digitalRead(A1) && !digitalRead(A0))
  {
   a=1;
    M3.setSpeed(150); //Escribe la velocidad
   M4.setSpeed(150); //Escribe la velocidad
    M3.run(BACKWARD);  //Gira hacia adelante
   M4.run(BACKWARD);  //Gira hacia adelante
    delay(20);
   M3.setSpeed(100); //Escribe la velocidad
   M4.setSpeed(100); //Escribe la velocidad
   M3.run(BACKWARD);  //Gira hacia adelante
   M4.run(FORWARD);  //Gira hacia adelante
    delay(50);
   M3.setSpeed(200); //Escribe la velocidad
   M4.setSpeed(200); //Escribe la velocidad
   M3.run(BACKWARD);  //Gira hacia adelante
   M4.run(FORWARD);  //Gira hacia adelante
    delay(50);
   M3.setSpeed(250); //Escribe la velocidad
   M4.setSpeed(250); //Escribe la velocidad
   M3.run(BACKWARD);  //Gira hacia adelante
   M4.run(FORWARD);  //Gira hacia adelante
    delay(70);
  }
   else     //dose negro
  {
   b=1;
  }
  if (a==1 && b==1)  //VUELTA SEGUIR DESPACIO
  {
     a=0; 
    b=0;
   M3.setSpeed(100); //Escribe la velocidad
   M4.setSpeed(100); //Escribe la velocidad
   M3.run(FORWARD);  //Gira hacia adelante
   M4.run(FORWARD);  //Gira hacia adelante
    delay(100);
    M3.setSpeed(100); //Escribe la velocidad
   M4.setSpeed(100); //Escribe la velocidad
   M3.run(RELEASE);  //Gira hacia adelante
   M4.run(RELEASE);  //Gira hacia adelante
    delay(10);
   }
if(b==1 && a==0)  //DERECHO RAPIDO 
{ 
  M3.setSpeed(110); //Escribe la velocidad
   M4.setSpeed(110); //Escribe la velocidad
   M3.run(FORWARD);  //Gira hacia adelante
   M4.run(FORWARD);  //Gira hacia adelante
    delay(20);
      M3.setSpeed(100); //Escribe la velocidad
   M4.setSpeed(100); //Escribe la velocidad
   M3.run(RELEASE);  //Gira hacia adelante
   M4.run(RELEASE);  //Gira hacia adelante
    delay(5);
}
}
