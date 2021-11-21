#include <Servo.h>
#define Servo_PWM 6

Servo MG995_Servo;
//Servo servo
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

void piano() {
  servoindex.write(0);
  servomajeure.write(0);
  servoringfinger.write(0);
  servopinky.write(100);
  //delay(200);
  //servoringfinger.write(100);
  //delay(200);
  //servoringfinger.write(0);
 
}
