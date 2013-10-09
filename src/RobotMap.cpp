/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

#include "RobotMap.h"

// Initialise all of the peripherals
RobotMap::RobotMap() {
    // Joysticks
    joyDrv = new Joystick(1);
    joyOpr = new Joystick(2);
    // Joystick dead zones. Default 0.05
    JOY_DRV_DEAD_X = 0.05;
    JOY_DRV_DEAD_Y = 0.05;
    JOY_OPR_DEAD_X = 0.05;
    JOY_OPR_DEAD_Y = 0.05;
    // Servo angles
    OPEN_SERVO_ANGLE = 30.0;
    CLOSE_SERVO_ANGLE = 0.0;
    FIRE_PIN_SPEED = -0.5;
    // Joystick buttons
    fireButton = new JoystickButton(joyOpr, 6);
    slowButton = new JoystickButton(joyOpr, 7);
    fastButton = new JoystickButton(joyOpr, 8);
    stopButton = new JoystickButton(joyOpr, 1);
    topButton = new JoystickButton(joyOpr, 4);
    bottomButton = new JoystickButton(joyOpr, 2);
    // Shooter motors
    firePinMotor = new Victor(5);
    shooterMotorFront = new Victor(4);
    shooterMotorBack = new Victor(6);

    // Hopper servos
    hopperServoTop = new Servo(8);
    hopperServoBottom = new Servo(7);

    // Sensors
    // Firing pin limit switches
    firePinMax = new DigitalInput(8);
    firePinMin = new DigitalInput(7);

}

RobotMap::~RobotMap() {
    // Delete all of the instances of our peripherals
    delete joyDrv;
    delete joyOpr;
    delete fireButton;
    delete slowButton;
    delete fastButton;
    delete stopButton;
    delete topButton;
    delete bottomButton;
    delete firePinMotor;
    delete shooterMotorFront;
    delete shooterMotorBack;
    delete hopperServoTop;
    delete hopperServoBottom;
    delete firePinMax;
    delete firePinMin;
}
