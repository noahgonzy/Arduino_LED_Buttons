
// Define Pins
#define BLUE 3
#define GREEN 5
#define RED 6
#define REDBUTTON 9
#define GREENBUTTON 10
#define BLUEBUTTON 11

void setup()
{
pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT);
digitalWrite(RED, LOW);
digitalWrite(GREEN, LOW);
digitalWrite(BLUE, LOW);

pinMode(REDBUTTON, INPUT_PULLUP);
pinMode(GREENBUTTON, INPUT_PULLUP);
pinMode(BLUEBUTTON, INPUT_PULLUP);

pinMode(LED_BUILTIN, OUTPUT);
digitalWrite(LED_BUILTIN, LOW);
}

// main loop
void loop(){
  if(digitalRead(REDBUTTON) == LOW){
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
  }
  if(digitalRead(GREENBUTTON) == LOW){
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, HIGH);
    digitalWrite(BLUE, LOW);
  }
  if(digitalRead(BLUEBUTTON) == LOW){
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, HIGH);
  }


  /*
  for(int i = 0; i < 255; i += 1){
    greenValue += 1;
    analogWrite(GREEN, greenValue);
    delay(delayTime);
  }

  for(int i = 0; i < 255; i += 1) // fades out green bring blue full when i=255
  {
    greenValue -= 1;
    blueValue += 1;
    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    delay(delayTime);
    }
  */
}
