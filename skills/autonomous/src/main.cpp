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

using namespace vex;

// MARK: Adding a library for ease-of-use

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














int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  wait(200, msec);

  while(Inertial20.isCalibrating()) {
    wait(5, msec);
  }

  
  
  

  
}
