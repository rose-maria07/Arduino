int led=5;
int ldrin=3;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(ldrin,INPUT);// put your setup code here, to run once:

}

void loop() {
  int ldr=digitalRead(ldrin);
  if(ldr==HIGH){
    digitalWrite(led,HIGH);
    }// put your main code here, to run repeatedly:
  else{
    digitalWrite(led,LOW);
  }
} 