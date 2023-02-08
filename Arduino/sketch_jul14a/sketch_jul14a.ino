
//Almog Fadida Id: 315544437, Moran Arzi Id: 200244945

// 6 Leds total = 3 for distance and 3 for temperature

//3 leds for distance (L-large distance. M-medium distance. S-small distance).

int ledRed1_Ldis = 8;            //or maybe all leds as const?
int ledYellow1_Mdis = 9;
int ledGreen1_Sdis = 10;

//3 leds for temperature (H-high temperature. M-medium temperature. L-low temperature).

int ledRed2_Htemp = 11;
int ledYellow2_Mtemp = 12;
int ledGreen2_Ltemp = 13;

//for distance
const int trigPin = 6;
const int echoPin = 7;

long duration;
int distance;

//for temperature

const int sensorPin = A0; 
float sensorValue;
float voltageOut;
float temperatureC;


void setup() {

 pinMode(ledRed1_Ldis, OUTPUT);
 pinMode(ledYellow1_Mdis, OUTPUT);
 pinMode(ledGreen1_Sdis, OUTPUT);
 pinMode(ledRed2_Htemp, OUTPUT);
 pinMode(ledYellow2_Mtemp, OUTPUT);
 pinMode(ledGreen2_Ltemp, OUTPUT);

//for distance
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input


//for temperature
pinMode(sensorPin, INPUT);
  

  
Serial.begin(9600); // Starts the serial communication

}



void loop() {


//from distance ex

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
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);

 
 
    digitalWrite(ledRed1_Ldis, HIGH);
    
    digitalWrite(ledYellow1_Mdis, HIGH);
    digitalWrite(ledGreen1_Sdis, HIGH);
   
    
 

                           //high temperature  - led Red2 On
    
    digitalWrite(ledRed2_Htemp, HIGH);

    digitalWrite(ledYellow2_Mtemp, HIGH);
    digitalWrite(ledGreen2_Ltemp, HIGH);
  
  
}

 
