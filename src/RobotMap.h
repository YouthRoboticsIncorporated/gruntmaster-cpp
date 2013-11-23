/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

#ifndef RobotMap_h
#define RobotMap_h

#include <WPILib.h>

class RobotMap {
    public:
        // Methods
        RobotMap(); // Constructor
        ~RobotMap(); // Destructor
        // Members
        // Joysticks
        static Joystick* joyDrv;
        static Joystick* joyOpr;
        
        // Joystick dead zones
        static double JOY_DRV_DEAD_X;
        static double JOY_DRV_DEAD_Y;
        static double JOY_OPR_DEAD_X;
        static double JOY_OPR_DEAD_Y;

        // Servo angles
        static double OPEN_SERVO_ANGLE;
        static double CLOSE_SERVO_ANGLE;
        static double FIRE_PIN_SPEED;
  
        // Button definitions
        static Button* fireButton;
        static Button* slowButton;
        static Button* fastButton;
        static Button* stopButton;
        static Button* topButton;
        static Button* bottomButton;

        // Actuator definitions
  
        // Shooter motors
        static Victor* firePinMotor;
        static Victor* shooterMotorFront;
        static Victor* shooterMotorBack;
        // Drive motors
        static Victor* driveMotorA;
        static Victor* driveMotorB;
        static Victor* driveMotorC;
  
        // Hopper servos
        static Servo* hopperServoTop;
        static Servo* hopperServoBottom;
  
        // Sensors
        // Firing pin limit switches
        static DigitalInput* firePinMax;
        static DigitalInput* firePinMin;
    
    private:
        // No private members    
};

#endif
