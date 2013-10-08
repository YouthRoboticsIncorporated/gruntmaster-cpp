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
        Joystick* const joyDrv;
        Joystick* const joyOpr;
        
        // Joystick dead zones
        const double JOY_DRV_DEAD_X;
        const double JOY_DRV_DEAD_Y;
        const double JOY_OPR_DEAD_X;
        const double JOY_OPR_DEAD_Y;

        // Servo angles
        const double OPEN_SERVO_ANGLE;
        const double CLOSE_SERVO_ANGLE;
        const double FIRE_PIN_SPEED;
  
        // Button definitions
        Button* const fireButton;
        Button* const slowButton;
        Button* const fastButton;
        Button* const stopButton;
        Button* const topButton;
        Button* const bottomButton;

        // Actuator definitions
  
        // Shooter motors
        Victor* const firePinMotor;
        Victor* const shooterMotorFront;
        Victor* const shooterMotorBack;
  
        // Hopper servos
        Servo* const hopperServoTop;
        Servo* const hopperServoBottom;
  
        // Sensors
        // Firing pin limit switches
        DigitalInput* const firePinMax;
        DigitalInput* const firePinMin;
    
    private:
        // No private members    
};

#endif
