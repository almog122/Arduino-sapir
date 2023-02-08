char inChar; // for incoming serial data

void setup() {
  pinMode(10,OUTPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  // send data only when you receive data:
  if (Serial.available()) {
    // read the incoming byte:
    inChar = Serial.read();
    
    if(inChar == 'R')
      digitalWrite(10,HIGH); //Led on Red

       if(inChar == 'G')
      digitalWrite(3,HIGH); //Led on Green

     if(inChar == 'r')
      digitalWrite(10,LOW); //Led off Red

      if(inChar == 'g')
      digitalWrite(3,LOW); //Led off Green
  }
}
