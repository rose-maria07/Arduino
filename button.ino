int led1=6;
int buttonpin=8;
int buttonstate=0;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(buttonpin,INPUT);
}

void loop()
{
  buttonstate=digitalRead(buttonpin);
  if(buttonstate==HIGH){
    digitalWrite(led1, HIGH);
  }
  else
  {
 	digitalWrite(led1, LOW);
  }
}