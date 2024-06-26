int led1=10;
int led2=9;
int led3=8;
float temp=A0;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(temp,INPUT);
  Serial.begin(9600);
}

void loop()
{
  float tempstate=analogRead(temp);
  float Ctemp=tempstate*(3.0/1023.0)*10.0;
  Serial.print("Temperature:");
  Serial.println(Ctemp);
  if(Ctemp>2&&Ctemp<4){
    digitalWrite(led1, HIGH);
  	delay(1000);
    digitalWrite(led1,LOW);
  	delay(1000);
  }
  else if(Ctemp>4&&Ctemp<7){
    digitalWrite(led2,HIGH);
  	delay(1000);
    digitalWrite(led2,LOW);
  	delay(1000);
  }
 
  else{
    digitalWrite(led3,HIGH);
  	delay(1000);
    digitalWrite(led3,LOW);
  	delay(1000);
  }
  
}