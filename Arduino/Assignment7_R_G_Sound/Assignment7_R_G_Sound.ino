
// defining the pins
const int trigPin = 9;
const int echoPin = 10;

const int redPin = 6;
const int greenPin = 3;

// defining variables
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);

  Serial.begin(9600); // Starts the serial communication
}

void loop() {
// Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);

// Calculating the distance
  distance= duration*0.034/2;

  if(distance < 4){ //Red pin on if the distance is below 4 cm
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
  }
  
  if(distance > 200){ //Green pin on if the distance is above 200 cm
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
  }

  if(distance <= 200 && distance >= 4){
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, LOW);
  }

  
// Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
  
  delay(1000);
}
