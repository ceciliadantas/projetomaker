void setup() {
  // put your setup code here, to run once:


void loop() {
  // put your main code here, to run repeatedly:
/*
*/

const int buttonPin = 2;     
const int ledPin =  13;      

// variables will change:
int buttonState = 0;        

void setup() {

  pinMode(ledPin, OUTPUT);

  pinMode(buttonPin, INPUT);
}

void loop() {

  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
}
