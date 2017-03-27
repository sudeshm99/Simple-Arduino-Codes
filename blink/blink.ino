int led1 = 13;
int led2 = 12;
int led3 = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  //pinMode()
}

void loop() {
  // put your main code here, to run repeatedly:
 
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  
  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
 
  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led3, LOW);

//  digitalWrite(led3, HIGH);
//  delay(300);
//  digitalWrite(led3, LOW);
  
  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
 
//  digitalWrite(led1, HIGH);
//  delay(300);
//  digitalWrite(led1, LOW);

 
}
