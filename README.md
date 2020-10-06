功能:當按鈕按下時 LED亮起<>
輸入腳:2  輸出腳:3 
```c++
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
```
