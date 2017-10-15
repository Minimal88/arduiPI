//int DO = 2; //Pin for Digital Output - DO

int audio = 1; // Pin for Analog Input Audio - A1 
int POTcalibrate = 0; //Pin for Analog Input calibrate - A0

int threshold = 20; //Set minimum threshold for LED lit
int threshold1 = 0; //Set minimum threshold for LED lit
int sensorvalue = 0;


void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13,OUTPUT);
  
}
 
void loop() {
  threshold=analogRead(POTcalibrate);  
  sensorvalue = analogRead(audio);  //Read the analog value

  //threshold = (threshold1 + sensorvalue)/2;
  //threshold1 = sensorvalue;
  
  
  Serial.print("Analog: ");
  Serial.print(sensorvalue);  //Print the analog value
  //Serial.print("/n");
  //Serial.print("Digital: ");
  //Serial.println(digitalRead(DO));  //Print the digital value
  
  Serial.print("POT: ");
  Serial.println(threshold);  //Print the digital value*/
  

  if (sensorvalue >= threshold) { //Compare analog value with threshold
    digitalWrite(2, HIGH); 
    //digitalWrite(4, HIGH);
    //digitalWrite(5, HIGH);
    //digitalWrite(9, HIGH);
    //digitalWrite(10, HIGH);
    //digitalWrite(11, HIGH);
    //digitalWrite(13, HIGH);
    //Serial.print("OUT: ");
    //Serial.println(HIGH);  //Print the digital value*/
      
 
  }
  else {
    digitalWrite(2, LOW);
    //digitalWrite(4, LOW);
    //digitalWrite(5, LOW);
    //digitalWrite(9, LOW);
    //digitalWrite(10, LOW);
    //digitalWrite(11, LOW);
    //digitalWrite(13, LOW);
    
    
  }
  
 
}
