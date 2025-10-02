
// Define Pins
#define BLUE 2
#define GREEN 4
#define RED 7
#define REDBUTTON 9
#define GREENBUTTON 10
#define BLUEBUTTON 11

//define global vars
bool g = false;
bool r = false;
bool b = false;

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
  g = false;
  r = false;
  b = false;
  if(digitalRead(REDBUTTON) == LOW){
    r = true;
  }
  if(digitalRead(GREENBUTTON) == LOW){
    g = true;
  }
  if(digitalRead(BLUEBUTTON) == LOW){
    b = true;
  }
  
  if(r){
    digitalWrite(RED, HIGH);
  }
  else{
    digitalWrite(RED, LOW);
  }
  if(g){
    digitalWrite(GREEN, HIGH);
  }
  else{
    digitalWrite(GREEN, LOW);
  }
  if(b){
    digitalWrite(BLUE, HIGH);
  }
  else{
    digitalWrite(BLUE, LOW);
  }
}
