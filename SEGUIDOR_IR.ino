int sensorD=A0; //sensor ir en A0
int lecturaD=0; //lectura del sensor trasero

int sensorI=A1; //sensor ir en A1
int lecturaI=0; //lectura del sensor trasero

void setup() 
{
  Serial.begin(9600);    // set up Serial library at 9600 bps
  delay(100);          //Tiempo de seguridad
}

void loop() 
{
   //lectura de sensores ir
   lecturaD=digitalRead(sensorD);
   lecturaI=digitalRead(sensorI);
   
   // impresion de sensores ir
   Serial.print("Sensor IZQUIERDO : ");
   Serial.print(lecturaD);
   Serial.print("    Sensor DERECHO:");
   Serial.println(lecturaI);
   delay(50);
}
