int led1 = 9;
int led2 = 10;
int led3 = 11;
int brightness1 = 0;
int fadeAmount1 = 30;
int brightness2 = 255;
int fadeAmount2 = -30;
int brightness3 = 0;
int fadeAmount3 = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led1,brightness1);
    brightness1 += fadeAmount1;
    if(brightness1 <= 0 || brightness1 >= 255){
        fadeAmount1 = -fadeAmount1;
        
      }
      delay(300);

      analogWrite(led2,brightness2);
    brightness2 += fadeAmount2;
    if(brightness2 <= 0 || brightness2 >= 255){
        fadeAmount2 = -fadeAmount2;
        
      }
      delay(300);
//     if(brightness1 >=255){
//          analogWrite(led2, brightness2);
//          brightness2 += fadeAmount2;
//          if(brightness2 <=0 || brightness2 >= 255){
//              fadeAmount2 = -fadeAmount2;
//            }
//        }
//     delay(30);   
      
}
