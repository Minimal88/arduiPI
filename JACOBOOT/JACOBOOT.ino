/*

  This example code is in the public domain.
in1 in2
0  0      Motor apagado
0  1      Adelante
1  0      Atras
1  1      Motor Apagado 

*/

#include <SoftwareSerial.h>

#define BLUETOOTH_SPEED 38400

SoftwareSerial mySerial(2,3); // RX, TX



//motor 1
int pin1_M1=4;//in1 
int pin2_M1=5;//in2 
int pin3_M1=6;//control

//

//motor2
int pin1_M2=7;//in3 
int pin2_M2=8;//in4
int pin3_M2=9;//control

 
// config de motores, bluetooth y sensor
void setup() {
  //Configura seriales
  Serial.begin(BLUETOOTH_SPEED);
  mySerial.begin(BLUETOOTH_SPEED);
  
  // asigna modo digital para el driver de motor
  pinMode(pin1_M1, OUTPUT);
  pinMode(pin2_M1, OUTPUT);
  pinMode(pin3_M1, OUTPUT);
  
  pinMode(pin1_M2, OUTPUT);
  pinMode(pin2_M2, OUTPUT);
  pinMode(pin3_M2, OUTPUT);

  //Activa los motores
  digitalWrite(pin3_M1, HIGH);   
  digitalWrite(pin3_M2, HIGH);   
  
    
}

void waitForResponse() {    
    while (mySerial.available()) {
      Serial.write(mySerial.read());
    }
    Serial.write("\n");
}

// the loop function runs over and over again forever
void loop() {

  
  
  int dataIN= mySerial.read();

  Serial.println(dataIN);

  if (dataIN==103){
    //Serial.write("go");   //ADELANTE
    digitalWrite(pin1_M2, HIGH);   
    digitalWrite(pin2_M2, LOW); 

    digitalWrite(pin1_M1, HIGH);   
    digitalWrite(pin2_M1, LOW); 
    
  }
  else if (dataIN==98){ //ATRAS    
    digitalWrite(pin1_M1, LOW);   
    digitalWrite(pin2_M1, HIGH);   

    digitalWrite(pin1_M2, LOW);   
    digitalWrite(pin2_M2, HIGH); 
  }

  else if (dataIN==115){ //STOP
    digitalWrite(pin1_M1, LOW);   
    digitalWrite(pin2_M1, LOW);   

    digitalWrite(pin1_M2, LOW);   
    digitalWrite(pin2_M2, LOW); 
  }

  
  else if (dataIN==108){ //LEFT
    digitalWrite(pin1_M1, HIGH);   
    digitalWrite(pin2_M1, LOW);   

    digitalWrite(pin1_M2, LOW);   
    digitalWrite(pin2_M2, LOW); 
  }

  else if (dataIN==114){ //RIGHT
    digitalWrite(pin1_M1, LOW);   
    digitalWrite(pin2_M1, LOW);   

    digitalWrite(pin1_M2, HIGH);   
    digitalWrite(pin2_M2, LOW); 
  }
  
  
  
  //delay(500);

  
  // MOTOR 1 VA PARA ADELANTE 2 SEGUNDOS
//  digitalWrite(pin1_M1, LOW);   
//  digitalWrite(pin2_M1, HIGH);   
//  delay(2000);       


   // MOTOR 2 VA PARA ATRAS 2 SEGUNDOS
//  digitalWrite(pin1_M2, LOW);   
//  digitalWrite(pin2_M2, HIGH);   
//  delay(2000);       
  
 
}
