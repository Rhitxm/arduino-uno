//blink program
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // change state of the LED by setting the pin to the HIGH voltage level
  delay(2000);                      // wait for a second time in ms, light stays on for 2 seconds
  digitalWrite(LED_BUILTIN, LOW);   // change state of the LED by setting the pin to the LOW voltage level
  delay(500);                      // wait for a second time in ms, light stays off for half a second
}




//blibk two LED's simultaneously
//one pin connected to 8 and other to 12
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(8, HIGH);
  digitalWrite(12, HIGH);  // change state of the LED by setting the pin to the HIGH voltage level
  delay(1000); 
  digitalWrite(8, LOW);            
  digitalWrite(12, LOW);   // change state of the LED by setting the pin to the LOW voltage level
  delay(1000);                      // wait for a second time in ms
}



//blink two LED's vice-versa

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(8, HIGH);
  digitalWrite(12,LOW);  // change state of the LED by setting the pin to the HIGH voltage level
  delay(1000); 
  digitalWrite(8, LOW);                     // wait for a second time in ms
  digitalWrite(12, HIGH);   // change state of the LED by setting the pin to the LOW voltage level
  delay(1000);                      // wait for a second time in ms
}


//turn on LED only while pressing button

void setup()
{
  pinMode(12, OUTPUT);
  pinMode(2, INPUT);
}
void loop()
{
  //button is connected to pin 2
  if(digitalRead(2)==HIGH){ //if the button is pressed turn the LED on
    digitalWrite(12, HIGH);	
  }
  else{ //if the button is not pressed, tuen the LED off
    digitalWrite(12, LOW);
  }
}


