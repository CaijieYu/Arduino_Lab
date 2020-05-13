#include "Arduino.h" 
#include <Ultrasonic.h>
#define TRIGGER_PIN 17
#define ECHO_PIN 16
Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);
const int led = 7; // USR LED pin is P7 
const int usr_btn = 6; // USR BTN pin is P6 
int val = 0; // Variable that stores LED state. 


void pin_change() 
{ 
  float cmMsec;
  cmMsec = ultrasonic.read(CM); // 計算距離，單位: 公分
  Serial.print("CM: "); 
  Serial.println(cmMsec);
  
  //interrupts();
} 
 
void setup() { 
    attachInterrupt(usr_btn, pin_change,RISING); //RISING  //LOW  /FALLING //CHANGE
    Serial.begin(9600); 
} 
 
void loop() { 
  
    delay(1000); 
}
