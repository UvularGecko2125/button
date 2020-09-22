void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT);
pinMode(3,OUTPUT);
digitalWrite(3,HIGH);
}


void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(2)==0)
  digitalWrite(3,LOW);

}
