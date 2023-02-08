char inChar; // for incoming serial data

void setup() {
  pinMode(10,OUTPUT);
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  // send data only when you receive data:
  if (Serial.available()) {
    // read the incoming byte:
    inChar = Serial.read();
    
    if(inChar == 'R')
      digitalWrite(10,HIGH); //Led on

     if(inChar == 'r')
      digitalWrite(10,LOW); //Led off
  }
}
