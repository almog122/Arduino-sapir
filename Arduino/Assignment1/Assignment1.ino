int ledPins[3] = {2 ,3, 4};

void setup() {
  
   for (int i = 0; i < 3; i++) {
     pinMode (ledPins[i], OUTPUT);
  }

}

void loop() {
  for(int i = 0; i < 3; i++){
    digitalWrite(ledPins[i],HIGH);
    delay(100);
    digitalWrite(ledPins[i],LOW);
    delay(50);
  } 
}
