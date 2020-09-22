int i = 1;
int button;
void setup() {
  // put your setup code here, to run once:

pinMode(2,INPUT);
pinMode(3,OUTPUT);
digitalWrite(3,HIGH);
}


void loop() {
  // put your main code here, to run repeatedly:
  button=digitalRead(2);
  
  if(i>0){
   if(button == 1){
     digitalWrite(3,LOW);
     i=i*-1;
  }
   else{
     digitalWrite(3,HIGH);
   }
  }
   if(i <0 ){
     if(button == 1){
     digitalWrite(3,i);
     i=i*-1;
    }
  }
   else{
     digitalWrite(3,-i);
  }
  
 

}
