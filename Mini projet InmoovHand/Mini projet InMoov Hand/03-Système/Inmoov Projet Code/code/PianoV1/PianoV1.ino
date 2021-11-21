#include <Servo.h>
#define Servo_PWM 6

Servo MG995_Servo;
Servo servoindex;          // Define index servo
Servo servomajeure;
Servo servoringfinger;
Servo servopinky;


void setup() {
  servoindex.attach(3);
  servomajeure.attach(4); 
  servoringfinger.attach(5);
  servopinky.attach(6);
  

} 

void loop() {            // Loop through motion tests
  piano();            // Uncomment to use this
  

}
void Fermer() {
  servoindex.write(0);
  servomajeure.write(0);
 servoringfinger.write(0);
 servopinky.write(0);
  
}
void LeverIndex(){
  servoindex.write(100);
  delay(200);
}
void LeverMajeur(){
  servomajeure.write(50);
  delay(200);
}
void LeverRingFinger(){
  servoringfinger.write(100);
  delay(200);
}

void LeverPinky(){
  servopinky.write(100);
  delay(200);
}
void piano() {
  LeverRingFinger();
  Fermer();
  LeverIndex();
  Fermer();
  LeverIndex();
  Fermer();
  LeverIndex();
  Fermer();
  LeverMajeur();
  Fermer();
  LeverRingFinger();
  Fermer();
  LeverMajeur();
  Fermer();
  LeverIndex();
  Fermer();
  LeverRingFinger();
  Fermer();
  LeverMajeur();
  Fermer();
  LeverMajeur();
  Fermer();
  LeverIndex();
  Fermer();
  
  /*servoindex.write(0);
  servomajeure.write(0);
  servoringfinger.write(0);
  servopinky.write(0);
  delay(500);
  servoindex.write(100);
  delay(500);
  servoindex.write(0);
  servoindex.write(100);
  delay(500);
  servoindex.write(0);
  servoindex.write(100);
  delay(500);
  servoindex.write(0);
  servomajeure.write(50);
  delay(500);
  servomajeure.write(0);
  servoringfinger.write(100);
  delay(500);
  servoringfinger.write(0);
  servomajeure.write(50);
  delay(500);
  servomajeure.write(0);
  servoindex.write(100);
  delay(500);
  servoindex.write(0);
  servoringfinger.write(100);
  delay(500);
  servoringfinger.write(0);
  servomajeure.write(50);
  delay(500);
  servomajeure.write(0);
  servomajeure.write(50);
  delay(500);
  servomajeure.write(0);
  servoindex.write(100);
  delay(500);
  servoindex.write(0);*/
}
