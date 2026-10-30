//program to blink two LED's simultaeously

int ledPin1 = 9;  // LED connected to digital pin 9
int ledPin2 = 11; //LED connected to digital pin 11
void setup() {
  // nothing happens in setup
}

void loop() {
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0; fadeValue <= 50; fadeValue += 5) {
    // sets the value (range from 0 to 50):
    analogWrite(ledPin1, fadeValue);
    // wait for 50 milliseconds to see the dimming effect
    delay(50);
  }
    for (int fadeValue = 0; fadeValue <= 50; fadeValue += 5) {
    // sets the value (range from 0 to 50):
    analogWrite(ledPin2, fadeValue);
    // wait for 50 milliseconds to see the dimming effect
    delay(50);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 50; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 50):
    analogWrite(ledPin1, fadeValue);
    // wait for 50 milliseconds to see the dimming effect
    delay(50);
  }
  for (int fadeValue = 50; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 50):
    analogWrite(ledPin2, fadeValue);
    // wait for 50 milliseconds to see the dimming effect
    delay(50);
  }
}


//to verify distance using ultrasonic sensor 

const int trigPin = 9;
const int echoPin = 10;

long duration;
float distance;

void setup() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);

    Serial.begin(9600);
}

void loop() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);

    distance = duration * 0.0343 / 2;

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    delay(500);
}
