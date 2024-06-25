int led=8;
int temp=A0;
int threshold=100;
float tempstate=0.0;
float Ctemp=0.0;
int buzzer=2;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(temp, INPUT);
  pinMode(buzzer,OUTPUT);
}

void loop()
{
  tempstate=analogRead(temp);
  Ctemp=tempstate*(5.0/1023.0)*100.0;
  if(Ctemp>threshold){
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);
  }
  else
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
}