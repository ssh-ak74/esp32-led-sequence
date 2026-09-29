#include <Arduino.h>

#define GREEN_LED 25
#define BLUE_LED 26
#define RED_LED 27

void setup() {
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
}

void loop() {
  digitalWrite(GREEN_LED, HIGH);
  delay(5000); //5s
  digitalWrite(GREEN_LED, LOW);

  digitalWrite(BLUE_LED, HIGH);
  delay(2000); //2s
  digitalWrite(BLUE_LED, LOW);

  digitalWrite(RED_LED, HIGH);
  delay(5000); //5s
  digitalWrite(RED_LED, LOW);

  digitalWrite(BLUE_LED, HIGH);
  delay(2000); //2s
  digitalWrite(BLUE_LED, LOW);
}
