/*
  Bbb
  
  bb  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  link
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO 
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino model, check
  the Technical Specs of your board  at https://www.arduino.cc/en/Main/Products
  
  This example code is in the public domain.
in1 in2
0  0      Motor apagado
0  1      Adelante
1  0      Atras
1  1      Motor Apagado 



*/

//motor 1
int pinin1=5; 
int pinin2=6;

//motor2
int pinin3=9; 
int pinin4=10;
 
// config de puertos
void setup() {
  // asigna modo digital alos puertos escogidos
  pinMode(pinin1, OUTPUT);
  pinMode(pinin2, OUTPUT);

  pinMode(pinin3, OUTPUT);
  pinMode(pinin4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  // MOTOR 1 VA PARA ADELANTE 2 SEGUNDOS
  digitalWrite(pinin1, LOW);   
  digitalWrite(pinin2, HIGH);   
  delay(2000);       


   // MOTOR 2 VA PARA ADELANTE 2 SEGUNDOS
  digitalWrite(pinin3, LOW);   
  digitalWrite(pinin4, HIGH);   
  delay(2000);       
  
 
}
