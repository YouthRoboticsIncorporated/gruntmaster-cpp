/**
 * Utility class for handling Robot drive based Kiwi Drive. Motor channel
 * numbers are passed supplied on creation of the class. Those are used for
 * either the drive function (intended for hand created drive code, such as
 * autonomous) or with the Tank/Arcade functions intended to be used for
 * Operator Control driving.
 * 
 */

#ifndef Chassis_h
#define Chassis_h

#include <math.h>
#include <WPILib.h>

class Chassis:public Subsystem {
    public:
        Chassis(); // Constructor
        // Methods
        void InitDefaultCommand();
        void drive(double vX, double vY, double vR, double throttle);
    
    private:
        // Mathematical transformations
        static double limit(double num);
        // Drive motors
        Victor* driveMotorA;
        Victor* driveMotorB;
        Victor* driveMotorC;
};


#endif