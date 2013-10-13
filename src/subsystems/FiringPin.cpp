#include "FiringPin.h"


FiringPin::FiringPin(RobotMap* Robot_Map_):
	Subsystem("FiringPin"),
	motor(Robot_Map_->firePinMotor),
	max(Robot_Map_->firePinMax),
	min(Robot_Map_->firePinMin),
	motorSpeed(Preferences::GetInstance()->GetDouble("firePinSpeed", RobotMap::FIRE_PIN_SPEED))
{
    motor->Disable();
    SmartDashboard::PutNumber("initialising firing pin", 42);
    SmartDashboard::PutNumber("initialised firing pin", 9001);
}

void FiringPin::fire()
{
	motor->Set(motorSpeed);
}
	
bool FiringPin::isFired()
{
	return max->Get();
}
	
bool FiringPin::isReset()
{
	return min->Get();
}

void FiringPin::Reset()
{
	motor->Set(0.15);
}

void FiringPin::Stop()
{
	motor->Disable();
}

void FiringPin::InitDefaultCommand()
{}
