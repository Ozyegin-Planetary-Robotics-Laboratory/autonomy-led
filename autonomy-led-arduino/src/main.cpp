#include <Arduino.h>

#define redPin 7
#define greenPin 6
#define bluePin 5
#define yellowPin 3 // Change the pin number to 4 for yellow

bool redState = false;
bool greenState = false;
bool blueState = false;
bool yellowState = false;

char command;

void setup() {
  pinMode(redPin, OUTPUT); // Set the redPin as an OUTPUT
  pinMode(greenPin, OUTPUT); // Set the greenPin as an OUTPUT
  pinMode(bluePin, OUTPUT); // Set the bluePin as an OUTPUT
  pinMode(yellowPin, OUTPUT); // Set the yellowPin as an OUTPUT

  digitalWrite(redPin, LOW); // Turn the redPin off
  digitalWrite(greenPin, LOW); // Turn the greenPin off
  digitalWrite(bluePin, LOW); // Turn the bluePin off
  digitalWrite(yellowPin, LOW); // Turn the yellowPin off

  Serial.begin(9600);
}

void loop() {
  while (Serial.available()) {
    command = Serial.read();
    if (command == '0') {
      redState = !redState;
      digitalWrite(redPin, redState);
    } else if (command == '1') {
      greenState = !greenState;
      digitalWrite(greenPin, greenState);
    } else if (command == '2') {
      blueState = !blueState;
      digitalWrite(bluePin, blueState);
    } else if (command == '3') { // Change the condition for yellow
      yellowState = !yellowState;
      digitalWrite(yellowPin, yellowState);
    }
  }
}
