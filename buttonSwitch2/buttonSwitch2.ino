const int led = 9;
const int button = 2;
boolean currentButton = LOW;
boolean lastButton = LOW; 
boolean ledOn = false;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}
boolean debounce(boolean last){//return current button state
  boolean  current = digitalRead(button);
  if(current != last){
      delay(5);
      current = digitalRead(button);
    }
    return current;
  }
void loop() {
  // put your main code here, to run repeatedly:
  currentButton = debounce(lastButton);// call the debounce funtion
  if(currentButton == HIGH && lastButton == LOW){//if current button high and last button low then led on otherwise led off
      ledOn = !ledOn;
    }
    lastButton = currentButton;//change current button to last button
    digitalWrite(led, ledOn);  
      
    
}
