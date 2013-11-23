#include "TopServo.h"

TopServo::TopServo():
	Subsystem("TopServo")
{
	m_hopperServoTop = RobotMap::hopperServoTop;
    close();
}
    
void TopServo::open()
{
	m_hopperServoTop->SetAngle(RobotMap::OPEN_SERVO_ANGLE);
}

void TopServo::close()
{
	m_hopperServoTop->SetAngle(RobotMap::CLOSE_SERVO_ANGLE);
}

void TopServo::InitDefaultCommand()
{

}
