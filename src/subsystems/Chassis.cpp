/**
 * Utility class for handling Robot drive based Kiwi Drive. Motor channel
 * numbers are passed supplied on creation of the class. Those are used for
 * either the drive function (intended for hand created drive code, such as
 * autonomous) or with the Tank/Arcade functions intended to be used for
 * Operator Control driving.
 * 
 */

#include "Chassis.h"
#include "../commands/OperatorArcadeDrive.h"

Chassis::Chassis():Subsystem("Chassis"),
    driveMotorA(new Victor(1)),
    driveMotorB(new Victor(2)),
    driveMotorC(new Victor(3))
{}

Chassis::~Chassis() {
    delete driveMotorA;
    delete driveMotorB;
    delete driveMotorC;
}

void Chassis::InitDefaultCommand() {
    // TODO - This was ported from the Java version.
    // Is it actually necessary? - JRW
    //SetDefaultCommand(new OperatorArcadeDrive());
}
  
/**
* Drive the motors at "speed" and "curve".
*
* The speed and curve are -1.0 to +1.0 values where 0.0 represents stopped
* and not turning. The algorithm for adding in the direction attempts to
* provide a constant turn radius for differing speeds.
*
* This function will most likely be used in an autonomous routine.
* 
* @param vX vector of x-axis
* @param vY vector of y-axis
* @param vR vector of rotation
* @param throttle throttle speed
*/
void Chassis::drive(double vX, double vY, double vR, double throttle) {
    double vA, vB, vC;
    
    vA = vX;
    vB = (-vX / 2) - (sqrt(3) / 2 * vY);
    vC = (-vX / 2) + (sqrt(3) / 2 * vY);
    
    vR = limit(vR);
    throttle = limit(throttle);
    
    vA = limit( (vR + vA) * throttle);
    vB = limit( (vR + vB) * throttle);
    vC = limit( (vR + vC) * throttle);
    
    driveMotorA->Set(vA);
    driveMotorB->Set(-vB);
    driveMotorC->Set(-vC);
}

/**
* Limit motor values to the -1.0 to +1.0 range.
*/
double limit(double num) {
    if (num > 1.0)
    {
      return 1.0;
    }
    if (num < -1.0)
    {
      return -1.0;
    }
    return num;
}
