#include "BottomServo.h"

BottomServo::BottomServo():
	Subsystem("BottomServo")
{
 	m_hopperServoBottom = RobotMap::hopperServoBottom;
    close();
}
    
void BottomServo::open()
{
	m_hopperServoBottom->SetAngle(RobotMap::OPEN_SERVO_ANGLE);
}

void BottomServo::close()
{
	m_hopperServoBottom->SetAngle(RobotMap::CLOSE_SERVO_ANGLE);
}

void BottomServo::InitDefaultCommand()
{
   
}
