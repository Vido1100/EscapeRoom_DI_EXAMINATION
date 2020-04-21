#include <Adafruit_Thermal.h>
#include "incologo.h"

#include "Arduino.h"


//PRINTER /////////////////////////////////////////////////////////////////////////////////

#include "SoftwareSerial.h"
#define TX_PIN 6 // Arduino transmit  YELLOW WIRE  labeled RX on printer
#define RX_PIN 5 // Arduino receive   GREEN WIRE   labeled TX on printer

SoftwareSerial mySerial(RX_PIN, TX_PIN); // Declare SoftwareSerial obj first
Adafruit_Thermal printer(&mySerial);     // Pass addr to printer constructor
// Then see setup() function regarding serial & printer begin() calls.
/////////////////////////////////////////////////////////////////////////////////


//1: toggle mode, 2: follow mode
#define LED_MODE   1

const int ledPin1 = 7;      // the number of the LED pin, D3
const int buttonPin1 = 8;    // the number of the pushbutton pin, D4

const int ledPin2 = 2;
const int buttonPin2 = 3;


const int reset = A1;

int a = 0;
int win = false;





void setup() {

pinMode(7, OUTPUT); digitalWrite(7, LOW);


  
  pinMode(buttonPin1, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(reset, INPUT);
  mySerial.begin(19200);
  printer.begin();




  
}

void loop() {
if (win == false) {
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
  printer.printBitmap(incologo_width, incologo_height, incologo_data);
  printer.println(F("\n"));
  printer.justify('C');
  printer.setSize('M');
  printer.println(F("Password:\n"));
  printer.underlineOn();
  printer.setSize('L');
  printer.println(F("bacon"));
  printer.underlineOff();
  printer.setLineHeight(50);
  
  printer.println(F("\n\n\n"));
  
  printer.sleep();      // Tell printer to sleep
  delay(3000L);         // Sleep for 3 seconds
  printer.wake();       // MUST wake() before printing again, even if reset
  printer.setDefault(); // Restore printer to defaults
  
  win = true;
  a = 1;
 } else if (a == 1){
  a = 0;
   
 }
} else {
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,LOW);
  if (digitalRead(reset)==LOW) {
  win = false;
  }
  }
}
