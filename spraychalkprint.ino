//get inputted text from Serial monitor
//array of symbols linked to servo and motor directions
//iterate over textual input

#include <Stepper.h>

//create servo objects
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;
Servo myservo7;

const int stepsPerRev = 200;

//create stepper objects
Stepper myStepper1(stepsPerRev, pin_coil_1, pin_coil_2, pin_coil_3, pin_coil_4);
Stepper myStepper2(stepsPerRev, pin_coil_1, pin_coil_2, pin_coil_3, pin_coil_4);

//connect pins to servos
const int servo1Pin = _;
const int servo2Pin = _;
const int servo3Pin = _;
const int servo4Pin = _;
const int servo5Pin = _;
const int servo6Pin = _;
const int servo7Pin = _;

/*//connect pins to motors -- might not happen like this
const int motor1Pin = _;
const int motor2Pin = _;*/

void setup(){
  //attach servo objects to their pins
  myservo1.attach(servo1Pin);
  myservo2.attach(servo2Pin);
  myservo3.attach(servo3Pin);
  myservo4.attach(servo4Pin);
  myservo5.attach(servo5Pin);
  myservo6.attach(servo6Pin);
  myservo7.attach(servo7Pin);

  /*//initialize motor pins as output
  pinMode(motor1Pin, OUTPUT);
  pinMode(motor2Pin, OUTPUT);*/

  myStepper1.setSpeed(30);
  myStepper2.setSpeed(30);

  // Set up serial communication
  Serial.begin(9600);
}

void loop(){
  array input;
  if(Serial.available() > 0){
    input = Serial.read();
    for(symbol in input){
      //alphabet logic
      if (symbol=="A"){
        //servo(s) trigger: 3,4,5,6,7
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,4
        myservo2.write(130);
        myservo4.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4
        myservo1.write(130);
        myservo4.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,4
        myservo2.write(130);
        myservo4.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 3,4,5,6,7
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor twice
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="B"){
        //servo(s) trigger: 1,2,3,4,5,6,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,3,5,6
        myservo2.write(130);
        myservo3.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor twice
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="C"){
        //servo(s) trigger: 2,3,4,5,6
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,7
        myservo1.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,7
        myservo1.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,7
        myservo1.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,6
        myservo2.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="D"){
        //servo(s) trigger: 1,2,3,4,5,6,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,7
        myservo1.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,7
        myservo1.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,7
        myservo1.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,3,4,5,6
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="E"){
        //servo(s) trigger: 1,2,3,4,5,6,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,7
        myservo1.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="F"){
        //servo(s) trigger: 1,2,3,4,5,6,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4
        myservo1.write(130);
        myservo4.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4
        myservo1.write(130);
        myservo4.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4
        myservo1.write(130);
        myservo4.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1
        myservo1.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="G"){
        //servo(s) trigger: 2,3,4,5,6
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,7
        myservo1.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,4,5,6
        myservo2.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="H"){
        //servo(s) trigger: 1,2,3,4,5,6,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 4
        myservo4.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 4
        myservo4.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 4
        myservo4.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,2,3,4,5,6,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="I"){
        //servo(s) trigger: 1,7
        myservo1.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,7
        myservo1.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,2,3,4,5,6,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,7
        myservo1.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,7
        myservo1.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="J"){
        //servo(s) trigger: 4,5,6
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 7
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 7
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 7
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,2,3,4,5,6
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="K"){
        //servo(s) trigger: 1,2,3,4,5,6,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 4
        myservo4.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 3,5
        myservo3.write(130);
        myservo5.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,6
        myservo2.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,7
        myservo1.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="L"){
        //servo(s) trigger: 1,2,3,4,5,6,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 7
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 7
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 7
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 7
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="M"){
        //servo(s) trigger: 1,2,3,4,5,6,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2
        myservo2.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 3,4
        myservo3.write(130);
        myservo4.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2
        myservo2.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,2,3,4,5,6,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="N"){
        //servo(s) trigger: 1,2,3,4,5,6,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2
        myservo2.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 3,4,5
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 6
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,2,3,4,5,6,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="O"){
        //servo(s) trigger: 2,3,4,5,6
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,7
        myservo1.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,7
        myservo1.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,7
        myservo1.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,3,4,5,6
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="P"){
        //servo(s) trigger: 1,2,3,4,5,6,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4
        myservo1.write(130);
        myservo4.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4
        myservo1.write(130);
        myservo4.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4
        myservo1.write(130);
        myservo4.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,3
        myservo2.write(130);
        myservo3.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="Q"){
        //servo(s) trigger: 2,3,4,5,6
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,7
        myservo1.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,5,7
        myservo1.write(130);
        myservo5.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,6
        myservo1.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,3,4,5,7
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="R"){
        //servo(s) trigger: 1,2,3,4,5,6,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4
        myservo1.write(130);
        myservo4.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,5
        myservo1.write(130);
        myservo4.write(130);
        myservo5.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,6
        myservo1.write(130);
        myservo4.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,3,7
        myservo2.write(130);
        myservo3.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="S"){
        //servo(s) trigger: 2,3,6
        myservo2.write(130);
        myservo3.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,5,6
        myservo2.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="T"){
        //servo(s) trigger: 1
        myservo1.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1
        myservo1.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,2,3,4,5,6,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1
        myservo1.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1
        myservo1.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="U"){
        //servo(s) trigger: 1,2,3,4,5,6
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 7
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 7
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 7
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,2,3,4,5,6
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="V"){
        //servo(s) trigger: 1,2,3
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 4,5
        myservo4.write(130);
        myservo5.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 6,7
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 4,5
        myservo4.write(130);
        myservo5.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,2,3
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="W"){
        //servo(s) trigger: 1,2,3,4,5,6,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 6
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 4,5
        myservo4.write(130);
        myservo5.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 6
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,2,3,4,5,6,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="X"){
        //servo(s) trigger: 1,7
        myservo1.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,3,5,6
        myservo2.write(130);
        myservo3.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 4
        myservo4.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,3,5,6
        myservo2.write(130);
        myservo3.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,7
        myservo1.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="Y"){
        //servo(s) trigger: 1,2
        myservo1.write(130);
        myservo2.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 3,4
        myservo3.write(130);
        myservo4.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 5,6,7
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 3,4
        myservo3.write(130);
        myservo4.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,2
        myservo1.write(130);
        myservo2.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="Z"){
        //servo(s) trigger: 1,6,7
        myservo1.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,5,7
        myservo1.write(130);
        myservo5.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,3,7
        myservo1.write(130);
        myservo3.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,2,7
        myservo1.write(130);
        myservo2.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol==" "){
        myStepper1.step(4*stepsPerRev);
        myStepper2.step(4*stepsPerRev);
      }
      else if(symbol=="."){
        //servo(s) trigger: 7
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor*2
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="!"){
        //servo(s) trigger: 1,2,3,4,5,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="?"){
        //servo(s) trigger: 2,3
        myservo2.write(130);
        myservo3.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1
        myservo1.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,5,7
        myservo1.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,3
        myservo1.write(130);
        myservo3.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2
        myservo2.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="1"){
        //servo(s) trigger: 2,7
        myservo2.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,2,3,4,5,6,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 7
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="2"){
        //servo(s) trigger: 2,3,6,7
        myservo2.write(130);
        myservo3.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,5,7
        myservo1.write(130);
        myservo5.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,3,7
        myservo1.write(130);
        myservo3.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,7
        myservo2.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="3"){
        //servo(s) trigger: 2,6
        myservo2.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,3,5,6
        myservo2.write(130);
        myservo3.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="4"){
        //servo(s) trigger: 4,5
        myservo4.write(130);
        myservo5.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 3,5
        myservo3.write(130);
        myservo5.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,5
        myservo2.write(130);
        myservo5.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,2,3,4,5,6,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 5
        myservo5.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="5"){
        //servo(s) trigger: 1,2,3,4,6
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,5,6
        myservo1.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="6"){
        //servo(s) trigger: 2,3,4,5,6
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,5,6
        myservo2.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="7"){
        //servo(s) trigger: 1
        myservo1.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1
        myservo1.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,5,6,7
        myservo1.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,3
        myservo1.write(130);
        myservo3.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,2
        myservo1.write(130);
        myservo2.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="8"){
        //servo(s) trigger: 2,3,5,6
        myservo2.write(130);
        myservo3.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,3,5,6
        myservo2.write(130);
        myservo3.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="9"){
        //servo(s) trigger: 2,3,6
        myservo2.write(130);
        myservo3.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,3,4,5,6
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else if(symbol=="0"){
        //servo(s) trigger: 2,3,4,5,6
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor trigger
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,5,6,7
        myservo1.write(130);
        myservo5.write(130);
        myservo6.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,4,7
        myservo1.write(130);
        myservo4.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 1,2,3,7
        myservo1.write(130);
        myservo2.write(130);
        myservo3.write(130);
        myservo7.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        myStepper1.step(stepsPerRev);
        myStepper2.step(stepsPerRev);
        //servo(s) trigger: 2,3,4,5,6
        myservo2.write(130);
        myservo3.write(130);
        myservo4.write(130);
        myservo5.write(130);
        myservo6.write(130);
        delay(1000);
        myservo1.write(0);
        myservo2.write(0);
        myservo3.write(0);
        myservo4.write(0);
        myservo5.write(0);
        myservo6.write(0);
        myservo7.write(0);
        //motor
        //motor
        myStepper1.step(2*stepsPerRev);
        myStepper2.step(2*stepsPerRev);
      }
      else(){}
    }
  }
}
