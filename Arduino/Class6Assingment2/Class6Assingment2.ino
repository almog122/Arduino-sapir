// constants won't change. They're used here to set pin numbers:
const int buttonPin = 7;     // the number of the pushbutton pin
const int ledPin =  4;      // the number of the LED pin

// variables will change:
boolean buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // read the state of the pushbutton value:

  delay(1000);
  
  if(digitalRead(buttonPin) == HIGH)
    buttonState = !buttonState;

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:

  if (buttonState == HIGH) {
    // turn LED on:
    //Serial.println(buttonState);
    digitalWrite(ledPin, HIGH);
  } 
  
  else {
    // turn LED off:
    //Serial.println(buttonState);
    digitalWrite(ledPin, LOW);
  }
}
