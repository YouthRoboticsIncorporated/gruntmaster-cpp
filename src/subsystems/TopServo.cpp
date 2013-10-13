#include "TopServo.h"

TopServo::TopServo(RobotMap* robot_map_):
	Subsystem("TopServo"),
	m_hopperServoTop(robot_map_->hopperServoTop)
{close();}
	
    
    
    
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
