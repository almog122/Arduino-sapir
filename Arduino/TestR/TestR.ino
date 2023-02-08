char inChar; // for incoming serial data
const int buttonPin = 8;

int buttonState = 0; 
void setup() {
  pinMode(13,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  // send data only when you receive data:
  //if (Serial.available()) {
    // read the incoming byte:
    inChar = Serial.read();
    buttonState = digitalRead(buttonPin);
    
    if(inChar == 'R')
      digitalWrite(10,HIGH); //Led on

     if(inChar == 'r')
      digitalWrite(10,LOW); //Led off

  for(int i =0; i < 10; i++){
    digitalWrite(13,HIGH);
    delay(50);
    digitalWrite(13,LOW);
    delay(50);
  }

if (buttonState == HIGH) {
  for(int i =0; i < 30; i++){
    digitalWrite(8,HIGH);
    delay(50);
    digitalWrite(8,LOW);
    delay(50);
   }
}
  

  for(int i =0; i < 50; i++){
    digitalWrite(3,HIGH);
    delay(50);
    digitalWrite(3,LOW);
    delay(50);
  }

  
    delay(1000);
 // }
}
