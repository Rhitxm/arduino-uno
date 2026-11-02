//PIR sensor is motion sensor 
//PIR sensor is a motion sensor
//this is with LED and the LED turns on when the sensor detects any motion

/*
pin connections:
VCC: 5V
GND: ground
OUT: digital pin 2
*/

const int pirPin = 2;
const int ledPin = 13;

int motionState = 0;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  motionState = digitalRead(pirPin);

  if (motionState == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion Detected!");
  }
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("No Motion");
  }

  delay(200);
}


//if you want to do it without an LED
//test program
//run this test if you want a basic test whether your PIR sensor is working or not
const int pirPin = 2;

void setup() {
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(pirPin);

  if (motion == HIGH) {
    Serial.println("MOTION DETECTED!");
  }
  else {
    Serial.println("No Motion");
  }

  delay(500);
}

