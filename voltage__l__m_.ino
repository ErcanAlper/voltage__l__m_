void setup() {
  Serial.begin(9600);
pinMode(4,OUTPUT);
}

void loop() {
  int sensor=analogRead(A0);
  float voltage=((float)5/1023)*sensor;
  Serial.print("voltage degeri :");
  Serial.println(voltage);
  delay(100);
  if(voltage>=3){
    
  
    digitalWrite(4,HIGH);
  }
    else{
    digitalWrite(4,LOW);
    }
}
