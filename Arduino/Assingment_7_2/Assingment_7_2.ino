 
const int sensorPin = A0; 
float sensorValue;
float voltageOut;

float temperatureC;
float temperatureF;

const int ledPinGreen = 10;
const int ledPinRed = 12;

void setup() {
  pinMode(ledPinGreen, OUTPUT);
  pinMode(ledPinRed, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  voltageOut = (sensorValue * 5000) / 1024;
  
  // calculate temperature for LM35 (LM35DZ)
  temperatureC = voltageOut / 10;
  temperatureF = (temperatureC * 1.8) + 32;

  Serial.print("Temperature(ºC): ");
  Serial.print(temperatureC);
  Serial.print("  Temperature(ºF): ");
  Serial.print(temperatureF);
  Serial.print("  Voltage(mV): ");
  Serial.println(voltageOut);

  if(temperatureC > 26){
     digitalWrite(ledPinRed, HIGH);
     digitalWrite(ledPinGreen, LOW);
  }

  if(temperatureC < 22){
     digitalWrite(ledPinGreen, HIGH);
     digitalWrite(ledPinRed, LOW);
  }

  delay(1000);
}
