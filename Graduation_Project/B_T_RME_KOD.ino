//Project-1: //ARDUINO LINE FOLLOWING CAR - QUAD Robotics - A unit of Quad Store//
//www.quadstore.in

// YOU HAVE TO INSTALL THE AFMOTOR LIBRARY BEFORE UPLOAD THE CODE//
// GO TO SKETCH >> INCLUDE LIBRARY >> ADD .ZIP LIBRARY >> SELECT AF MOTOR ZIP FILE //


//including the libraries
#include <AFMotor.h>

//defining pins and variables
#define ir1 A0
#define ir2 A1
#define ir3 A2
#define ir4 A3
#define ir5 A4

//defining motors
AF_DCMotor motor1(1, MOTOR12_1KHZ); 
AF_DCMotor motor2(2, MOTOR12_1KHZ);
AF_DCMotor motor3(3, MOTOR34_1KHZ);
AF_DCMotor motor4(4, MOTOR34_1KHZ);



void setup() {
  //Setting the motor speed

  //Declaring PIN input types
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  pinMode(ir3,INPUT);
  pinMode(ir4,INPUT);
  pinMode(ir5,INPUT);
  //Begin serial communication
  Serial.begin(9600);
  
}

void loop(){
  //Printing values of the sensors to the serial monitor
  int a = Serial.println(analogRead(ir1));
  int b = Serial.println(analogRead(ir2));
  int c = Serial.println(analogRead(ir3));
  int d = Serial.println(analogRead(ir4));
  int e = Serial.println(analogRead(ir5));
  int s1 = analogRead(ir1);
  int s2 = analogRead(ir2);
  int s3 = analogRead(ir3);
  int s4 = analogRead(ir4);
  int s5 = analogRead(ir5);
  //line detected by both
  if( (s1>=900) && (s2>=900) && (s3<=900) && (s4>=900) && (s5>=900)){
    //Forward
    motor1.setSpeed(200);
    motor2.setSpeed(200);
    motor3.setSpeed(200);
    motor4.setSpeed(200);
    motor1.run(FORWARD);
    motor2.run(FORWARD);
    motor3.run(FORWARD);
    motor4.run(FORWARD);
  }
  //line detected by left sensor
  else if((s1>=900) && (s2<=900) && (s3>=900) && (s4>=900) && (s5>=900)){
    //turn right
    motor1.setSpeed(200);
    motor2.setSpeed(200);
    motor3.setSpeed(200);
    motor4.setSpeed(200);
    motor1.run(FORWARD);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(FORWARD);
    
  }
  else if((s1<=900) && (s2>=900) && (s3>=900) && (s4>=900) && (s5>=900)){
    //turn right
    motor1.setSpeed(200);
    motor2.setSpeed(200);
    motor3.setSpeed(200);
    motor4.setSpeed(200);
    motor1.run(FORWARD);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(FORWARD);
    
  }
  //line detected by right sensor
  else if((s1>=900) && (s2>=900) && (s3>=900) && (s4<=900) && (s5>=900)){
    //turn left
    motor1.setSpeed(200);
    motor2.setSpeed(200);
    motor3.setSpeed(200);
    motor4.setSpeed(200);
    motor1.run(RELEASE);
    motor2.run(FORWARD);
    motor3.run(FORWARD);
    motor4.run(RELEASE);
   
  }
  else if((s1>=900) && (s2>=900) && (s3>=900) && (s4>=900) && (s5<=900)){
    //turn rig
    motor1.setSpeed(200);
    motor2.setSpeed(200);
    motor3.setSpeed(200);
    motor4.setSpeed(200);
    motor1.run(RELEASE);
    motor2.run(FORWARD);
    motor3.run(FORWARD);
    motor4.run(RELEASE);
   
  }
   else if((s1>=900) && (s2>=900) && (s3<=900) && (s4<=900) && (s5>=900)){
    //turn rig
    motor1.setSpeed(200);
    motor2.setSpeed(200);
    motor3.setSpeed(200);
    motor4.setSpeed(200);
    motor1.run(RELEASE);
    motor2.run(FORWARD);
    motor3.run(FORWARD);
    motor4.run(RELEASE);
   
  }
  else if((s1>=900) && (s2<=900) && (s3<=900) && (s4>=900) && (s5>=900)){
    //turn right
    motor1.setSpeed(200);
    motor2.setSpeed(200);
    motor3.setSpeed(200);
    motor4.setSpeed(200);
    motor1.run(FORWARD);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(FORWARD);
    
  }
  else if((s1<=900) && (s2<=900) && (s3<=900) && (s4>=900) && (s5>=900)){
    //turn right
    motor1.setSpeed(200);
    motor2.setSpeed(200);
    motor3.setSpeed(200);
    motor4.setSpeed(200);
    motor1.run(FORWARD);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(FORWARD);
    
  }
    else if((s1>=900) && (s2>=900) && (s3<=900) && (s4<=900) && (s5<=900)){
    //turn rig1
    motor1.setSpeed(200);
    motor2.setSpeed(200);
    motor3.setSpeed(200);
    motor4.setSpeed(200);
    motor1.run(RELEASE);
    motor2.run(FORWARD);
    motor3.run(FORWARD);
    motor4.run(RELEASE);
   
  }
 
    else if((s1>=900) && (s2>=900) && (s3>=900) && (s4>=900) && (s5>=900)){
    //turn rig
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(RELEASE);
   
  }
  
}
