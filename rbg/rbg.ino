// This program builds a circuit that acts like a mood light.  
// It uses an RGB LED to create a series of different color lights 
// that can change every time you push a button.

//For this project you need: 1 RGB LED, pushbutton, 10k ohm resistor, three 220 ohm resistors

const int BlueLED = 9;
const int GreenLED = 10;
const int RedLED = 11;
const int BUTTON = 2;

boolean lastButton = LOW;   // boolean variables have only two states, on/off or 
boolean currentButton = LOW;    // true/false
int ledMode = 0;

void setup() 
{ //start of the block of code that gets executed once at the start of the sketch
  pinMode (BlueLED, OUTPUT);  //pin 9
  pinMode (GreenLED, OUTPUT); //pin 10
  pinMode (RedLED, OUTPUT); //pin 11
  pinMode (BUTTON, INPUT);
} //end

//debouncing function - same as previous activity
boolean debounce(boolean last)
{
  boolean current = digitalRead(BUTTON);
  if(last != current)
  {
    delay(5);
    current = digitalRead(BUTTON);
  }
  return current;
}

void setMode(int mode)
{
  if(mode == 1)   //only blue
  {
    analogWrite(BlueLED, 255);
    analogWrite(GreenLED, 0);
    analogWrite(RedLED, 0);    
  }
  else if(mode == 2)  //only green
  {
    analogWrite(BlueLED, 0);
    analogWrite(GreenLED, 255);
    analogWrite(RedLED, 0);
  }
  else if(mode == 3)  //only red
  {
    analogWrite(BlueLED, 0);
    analogWrite(GreenLED, 0);
    analogWrite(RedLED, 255);
  }
  else if(mode == 4)  //mix of green and blue
  {
    analogWrite(BlueLED, 127);
    analogWrite(GreenLED, 127);
    analogWrite(RedLED, 0);
  }
  else if(mode == 5)  //mix of blue and red
  {
    analogWrite(BlueLED, 127);
    analogWrite(GreenLED, 0);
    analogWrite(RedLED, 127);
  }
  else if(mode == 6)  //mix of green and red
  {
    analogWrite(BlueLED, 0);
    analogWrite(GreenLED, 127);
    analogWrite(RedLED, 127);
  }
  else if(mode == 7)  //mixes all three colors
  {
    analogWrite(BlueLED, 85);
    analogWrite(GreenLED, 85);
    analogWrite(RedLED, 85);
  }
  else  //turns all colors off
  {
    analogWrite(BlueLED, 0);
    analogWrite(GreenLED, 0);
    analogWrite(RedLED, 0);
  }
}

void loop()
{
  currentButton = debounce(lastButton);
  if(lastButton == LOW && currentButton == HIGH)  //test if the button is pressed
  {
    ledMode++;
  }
  lastButton = currentButton;
  if(ledMode == 8) {
    ledMode = 0;
  }
  setMode(ledMode);
}

