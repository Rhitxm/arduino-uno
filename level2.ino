//blink the led when distance is less than 20 cms

const int trigPin = 9;
const int echoPin = 10;
const int threshold1= 20;
const int ledPin1=12;

long duration;
float distance;

void setup() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    pinMode(ledPin1, OUTPUT); //set LED pin 12 as output
    pinMode(ledPin2, OUTPUT); //set LED pin 13 as output
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
   
    if (distance<threshold1){
      digitalWrite(ledPin1, HIGH);
    }
    else{
      digitalWrite(ledPin1, LOW);
    }
    
    
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println("cm");

    delay(500);
}
