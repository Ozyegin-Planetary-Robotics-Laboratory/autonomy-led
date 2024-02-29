#include <Arduino.h>

#define redPin 5
#define greenPin 6
#define bluePin 7

bool redState = false;
bool greenState = false;
bool blueState = false;

char command;

void setup() {
  pinMode(redPin, OUTPUT); // Set the redPin as an OUTPUT
  pinMode(greenPin, OUTPUT); // Set the greenPin as an OUTPUT
  pinMode(bluePin, OUTPUT); // Set the bluePin as an OUTPUT

  digitalWrite(redPin, LOW); // Turn the redPin off
  digitalWrite(greenPin, LOW); // Turn the greenPin off
  digitalWrite(bluePin, LOW); // Turn the bluePin off

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
    }
  }
}
