const int led = 9;
const int button = 2;
boolean lastButton = LOW;
boolean currentButton = LOW;
boolean ledOn = false; 
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}
boolean debounce(boolean last){
    boolean current = digitalRead(button);//get the current boolean value of button
    if(last != current){
        delay(5);
        current = digitalRead(button);
      }
      return current;
  }

void loop() {
  // put your main code here, to run repeatedly:
  currentButton = debounce(lastButton);
  if(lastButton == LOW && currentButton == HIGH){
      ledOn = !ledOn;
    }
    lastButton = currentButton;
    digitalWrite(led, ledOn);
}
