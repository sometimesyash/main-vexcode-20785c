// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Motor3               motor         3               
// Motor4               motor         4               
// Inertial20           inertial      20              
// intakeMotor1         motor         5               
// intakeMotor2         motor         6               
// roller1              motor         7               
// roller2              motor         8        
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Motor3               motor         3               
// Motor4               motor         4               
// Inertial20           inertial      20              
// intakeMotor1         motor         5               
// intakeMotor2         motor         6               
// roller1              motor         7               
// Motor8               motor         8               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Motor3               motor         3               
// Motor4               motor         4               
// Inertial20           inertial      20              
// intakeMotor1         motor         5               
// intakeMotor2         motor         6               
// roller1              motor         7               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Motor3               motor         3               
// Motor4               motor         4               
// Inertial20           inertial      20              
// intakeMotor1         motor         5               
// intakeMotor2         motor         6               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Motor3               motor         3               
// Motor4               motor         4               
// Inertial20           inertial      20              
// intakeMotor1         motor         5               
// intakeMotor2         motor         6               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Motor3               motor         3               
// Motor4               motor         4               
// Inertial20           inertial      20              
// intakeMotor1         motor         5               
// intakeMotor2         motor         6               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Motor3               motor         3               
// Motor4               motor         4               
// Inertial20           inertial      20              
// intakeMotor1         motor         5               
// intakeMotor2         motor         6               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Motor3               motor         3               
// Motor4               motor         4               
// Inertial20           inertial      20              
// intakeMotor1         motor         5               
// intakeMotor2         motor         6               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Motor3               motor         3               
// Motor4               motor         4               
// Inertial20           inertial      20              
// intakeMotor1         motor         5               
// intakeMotor2         motor         6               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Motor3               motor         3               
// Motor4               motor         4               
// Inertial20           inertial      20              
// intakeMotor1         motor         5               
// intakeMotor2         motor         6               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Motor3               motor         3               
// Motor4               motor         4               
// Inertial20           inertial      20              
// intakeMotor1         motor         5               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Motor3               motor         3               
// Motor4               motor         4               
// Inertial20           inertial      20              
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Motor3               motor         3               
// Motor4               motor         4               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Motor3               motor         3               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// ---- END VEXCODE CONFIGURED DEVICES ----
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\reply                                            */
/*    Created:      Mon Oct 26 2020                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

//Private GitHub changes and version control avaliabe

//Motor 1 and 2 are the RHS
//Motor 3 and 4 are the LHS

#include "vex.h"
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <fstream>
#include<sstream>

using namespace vex;

//Variable Declaration

bool leftSideSpin;
bool rightSideSpin;
std::ofstream ofs;

// MARK: Adding a library for ease-of-use

/*

A library drastically reduces the numbers of lines of code by creating a set of 'Void' function -
functions without a return value, that would be made to reduce repeating certain instructions.

*/

void driveForward(int rotations){ //gets the motors to drive forward for x rotations

  Motor1.spin(forward, rotations, rpm);
  Motor2.spin(forward, rotations, rpm);
  Motor3.spin(forward, rotations, rpm); /*No need to make it minus since the motors will be flipped in setup*/
  Motor4.spin(forward, rotations, rpm);
  
}

void driveBackward(int rotations){ //gets the motors to drive backwards for x rotations

  Motor1.spin(reverse, rotations, rpm);
  Motor2.spin(reverse, rotations, rpm);
  Motor3.spin(forward, rotations, rpm);
  Motor4.spin(forward, rotations, rpm);
  
}

void turnRight(int degreesIn, int speed) { //using the inertial sensor to turn 

  Motor1.spin(reverse);
  Motor2.spin(reverse);
  Motor3.spin(forward);
  Motor4.spin(forward);

  waitUntil((Inertial20.rotation(degrees) >= degreesIn)); //Wait until the degrees needed has been reached

  Motor1.stop();
  Motor2.stop();
  Motor3.stop();
  Motor4.stop();

}

void turnLeft(int degreesOut, int speed) { //using the inertial sensor to turn 

  Motor1.spin(forward);
  Motor2.spin(forward);
  Motor3.spin(reverse);
  Motor4.spin(reverse);

  waitUntil((Inertial20.rotation(degrees) >= degreesOut)); //Wait until the degrees needed has been reached

  Motor1.stop();
  Motor2.stop();
  Motor3.stop();
  Motor4.stop();

}

void intake(int speed){ //for the intake

  intakeMotor1.spin(forward, speed, rpm);
  intakeMotor2.spin(forward, speed, rpm);

}

void rollers(int speed){

  roller1.spin(forward, speed, rpm);
  roller2.spin(forward, speed, rpm);    

}


//MARK: The Analysis system

/*

This helps us calculate certain data that can be used to determine the efficency of the motors, the brain etc,
in order to determine whether our design and program is best optimised for the equipment we have. 

*/

bool areSpinning(){ //Checks if the system is spinning or not

  bool isWorking;

  if(Motor1.isSpinning() && Motor2.isSpinning()){

    if(Motor3.isSpinning() && Motor4.isSpinning()){

      rightSideSpin = true;

    }

    leftSideSpin = true;
    isWorking = true;

  } else if(Motor3.isSpinning() && Motor4.isSpinning()){

    rightSideSpin = true;
    isWorking = true;

  } else {
    isWorking = false;
  }


  //helps turn the boolean into a on/off like system that can help determine the state of motors at any given time

  return isWorking; 
  
}


class movement {
  public:

    std::stringstream battery;
    std::stringstream batteryChange;
    std::stringstream timeTaken;
    std::stringstream motor1Torque;
    std::stringstream motor2Torque;
    std::stringstream motor3Torque;
    std::stringstream motor4Torque;
    std::stringstream temperatureChange;

  /*A movement is the method that the system will store the data in*/

};

int calculateAverage(){
  int total = Motor1.temperature(percent) + Motor2.temperature(percent) + Motor3.temperature(percent) + Motor4.temperature(percent);
  int average = total / 4;

  return average;
}

int analyseActions(){

  //Calculate the data

  int battery = Brain.Battery.voltage();
  int batteryChange = 0;
  int timeTaken = 0;
  int motor1Torque = 0;
  int motor2Torque = 0;
  int motor3Torque = 0;
  int motor4Torque = 0;
  int startingTemperature = calculateAverage();
  int temperatureChange = 0;

  if(areSpinning()){

    if(rightSideSpin && leftSideSpin !=true){
      Brain.Timer.reset();
      while(Motor3.isDone() != true){
        motor3Torque = Motor3.torque();
        motor4Torque = Motor4.torque();
      }
      batteryChange = battery - Brain.Battery.current();
      timeTaken = Brain.Timer.value();
      int32_t finalTemp = calculateAverage();
      temperatureChange = startingTemperature - finalTemp;
      

    } else if(leftSideSpin &&  rightSideSpin !=true){
      Brain.Timer.reset();
      while(Motor2.isDone() != true){
        motor1Torque = Motor1.torque();
        motor2Torque = Motor2.torque();
      }
      batteryChange = battery - Brain.Battery.current();
      timeTaken = Brain.Timer.value();
      int32_t finalTemp = calculateAverage();
      temperatureChange = startingTemperature - finalTemp;
      

    } else if(leftSideSpin && rightSideSpin){
      Brain.Timer.reset();
      while(Motor2.isDone() != true){
        motor1Torque = Motor1.torque();
        motor2Torque = Motor2.torque();
      }

      batteryChange = battery - Brain.Battery.current();
      timeTaken = Brain.Timer.value();
      int32_t finalTemp = calculateAverage();
      temperatureChange = startingTemperature - finalTemp;

    }

    movement newMovement;
    newMovement.battery << battery;
    newMovement.batteryChange << batteryChange;
    newMovement.timeTaken << timeTaken; 
    newMovement.motor1Torque << motor1Torque;
    newMovement.motor2Torque << motor2Torque;
    newMovement.motor3Torque << motor3Torque;
    newMovement.motor4Torque << motor4Torque;
    newMovement.temperatureChange << temperatureChange;

    

    if(Brain.SDcard.isInserted()){

      std::string battery1;
      std::string batteryChange1;
      std::string timeTaken1;
      std::string motor1Torque1;
      std::string motor2Torque1;
      std::string motor3Torque1;
      std::string motor4Torque1;
      std::string temperatureChange1;



      ofs.open("analysis.txt", std::ofstream::out); //Making the filename

      //Adding the stringstream into a string

      newMovement.battery >> battery1;
      newMovement.batteryChange >> batteryChange1;
      newMovement.timeTaken >> timeTaken1;
      newMovement.motor1Torque >> motor1Torque1;
      newMovement.motor2Torque >> motor2Torque1;
      newMovement.motor3Torque >> motor3Torque1;
      newMovement.motor4Torque >> motor4Torque1;
      newMovement.temperatureChange >> temperatureChange1;

      ofs << battery1;
      ofs << batteryChange1;
      ofs << timeTaken1;
      ofs << motor1Torque1;
      ofs << motor2Torque1;
      ofs << motor3Torque1;
      ofs << motor4Torque1;
      ofs << temperatureChange1;

      ofs.close();
      

      Brain.Screen.printAt(10, 40, "done");

    } else {

      Brain.Screen.printAt(10, 40, "No SD Card");

    }

    //Upload the data onto the sd card.

  }


  return 0;
}


int analyse(){

  //Initialising the task3

  while(true){

    analyseActions();

  }
  
  return 0;
}






int main() {

  // Initializing Robot Configuration. DO NOT REMOVE!

  task analysis = task(analyse); //Using dual tasks for multitasking - the analysis runs seperately at all times.
  
  //MARK: Setup

  vexcodeInit();
  wait(200, msec);

  while(Inertial20.isCalibrating()) {
    wait(5, msec);
  }

  /*
  
  The autonomous period has been broken into phases, to ensure that collective error does not occur. Collective error 
  occurs when a small error early on can throw off the entire autonomous period.

  Phases also help with our AGILE Development method: allowing us to gradually deploy and push the code instead of the 'Waterfall method', where 
  everything is pushed at the end
  
  */


  //MARK: Phase 1
  


  
}
