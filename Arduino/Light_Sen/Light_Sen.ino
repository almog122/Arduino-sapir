int sensorPin = A0; // select the input pin for LDR

int sensorValue = 0; // variable to store the value coming from the sensor

const int ledPinRed = 13;
void setup() {
  pinMode(ledPinRed, OUTPUT);
  Serial.begin(9600); //sets serial port for communication
}

void loop() {
  sensorValue = analogRead(sensorPin); // read the value from the sensor
  Serial.println(sensorValue); //prints the values coming from the sensor on the screen
  Serial.println("---------------");

  if(sensorValue < 500){
    digitalWrite(ledPinRed, HIGH);
  }

  else{
    digitalWrite(ledPinRed, LOW);
  }

  
  delay(1000);

}
