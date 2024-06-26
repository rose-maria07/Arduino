int echo=9;
int trig=10;
int duration;
int dist;
void setup()
{
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2); // Wait for 1000 millisecond(s)
  digitalWrite(trig,HIGH);
  delayMicroseconds(2);
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  duration=pulseIn(echo,HIGH);
  dist=duration*(0.034/2);
  Serial.print("distance:");
  Serial.println(dist);
  delay(1000);
}