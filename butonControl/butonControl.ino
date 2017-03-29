const int led = 9;
const int button = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(button) == LOW){
      digitalWrite(led, HIGH);
    }else{
        digitalWrite(led, LOW);
      }
}
