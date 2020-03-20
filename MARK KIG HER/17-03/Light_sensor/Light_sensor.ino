

const int lightSens1 = A0; //The light sensors analog pin 1
const int lightSens2 = A1; //The light sensors analog pin 2
const int lightSens3 = A2; //The light sensors analog pin 3
const int LED1 = 2; //The corresponding LED light pen for light 1
const int LED2 = 3; //The corresponding LED light pen for light 2
const int LED3 = 4; //The corresponding LED light pen for light 3

float lightVal1; //The float value of the lightsensor 1
float lightVal2; //The float value of the lightsensor 2
float lightVal3; //The float value of the lightsensor 3

int lightCri1; //The criteria for a lightsensor to activate 1
int lightCri2; //The criteria for a lightsensor to activate 2
int lightCri3; //The criteria for a lightsensor to activate 3

int startup = true; //Determines whether the program just startet

float lightStan1_1 = 0; //Startup calibration measurement 1
float lightStan1_2 = 0; //Startup calibration measurement 2
float lightStan1_3 = 0; //Startup calibration measurement 2

float lightStan2_1 = 0; //Startup calibration measurement 1
float lightStan2_2 = 0; //Startup calibration measurement 2
float lightStan2_3 = 0; //Startup calibration measurement 2

float lightStan3_1 = 0; //Startup calibration measurement 1
float lightStan3_2 = 0; //Startup calibration measurement 2
float lightStan3_3 = 0; //Startup calibration measurement 2

int CalVal = 400; //The amount of time between the startup data-measures

void setup() {
pinMode(lightSens1,INPUT);
pinMode(lightSens2,INPUT);
pinMode(lightSens3,INPUT);

pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
Serial.begin(9600);
}

void loop() {

if (startup == true) {
lightStan1_1 = analogRead(lightSens1);
lightStan2_1 = analogRead(lightSens2);
lightStan3_1 = analogRead(lightSens3);
Serial.println("IM HERE");
delay(CalVal);
lightStan1_2 = analogRead(lightSens1);
lightStan2_2 = analogRead(lightSens2);
lightStan3_2 = analogRead(lightSens3);
delay(CalVal);
lightStan1_3 = analogRead(lightSens1);
lightStan2_3 = analogRead(lightSens2);
lightStan3_3 = analogRead(lightSens3);
delay(CalVal);
lightCri1 = (lightStan1_1 + lightStan1_2 + lightStan1_3)/3 + 100;
lightCri2 = (lightStan2_1 + lightStan2_2 + lightStan2_3)/3 + 100;
lightCri3 = (lightStan3_1 + lightStan3_2 + lightStan3_3)/3 + 100;
startup = false;
  
} else {
  
  Serial.println(analogRead(lightSens1));
  lightVal1 = analogRead(lightSens1);
  lightVal2 = analogRead(lightSens2);
  lightVal3 = analogRead(lightSens3);
  if (lightVal1 >= lightCri1) {
    digitalWrite(LED1,HIGH);
  } else {
    digitalWrite(LED1,LOW);
  }

  if (lightVal2 >= lightCri2) {
    digitalWrite(LED2,HIGH);
  } else {
    digitalWrite(LED2,LOW);
  }

  if (lightVal3 >= lightCri3) {
    digitalWrite(LED3,HIGH);
  } else {
    digitalWrite(LED3,LOW);
  }
}
}
