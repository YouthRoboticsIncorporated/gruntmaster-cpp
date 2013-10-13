#include "BottomServo.h"

BottomServo::BottomServo(RobotMap* robot_map_):
	Subsystem("BottomServo"),
	m_hopperServoBottom(robot_map_->hopperServoBottom)
{close();}
	
    
    
    
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
