#include "Arduino.h"

//1: toggle mode, 2: follow mode
#define LED_MODE   1

const int ledPin1 = 8;      // the number of the LED pin, D3
const int buttonPin1 = 9;    // the number of the pushbutton pin, D4

const int ledPin2 = 5;
const int buttonPin2 = 6;

const int LEDFINAL = 2;

int a = 0;
void setup() {
  pinMode(buttonPin1, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(LEDFINAL,OUTPUT);
  Serial.begin(9600);
}

void loop() {
Serial.println(digitalRead(buttonPin1));
 if (digitalRead(buttonPin1)==LOW) {
  digitalWrite(ledPin2, HIGH);
 } else {
  digitalWrite(ledPin2,LOW);
 }


  if (digitalRead(buttonPin2)==LOW) {
  digitalWrite(ledPin1, HIGH);
 } else {
  digitalWrite(ledPin1,LOW);
 }


 if ((digitalRead(buttonPin2) + digitalRead(buttonPin1))==LOW) {
  digitalWrite(LEDFINAL,HIGH);
  a = 1;
 } else if (a == 1){
  a = 0;
   digitalWrite(LEDFINAL,LOW);
 }
}
