/**
 * Shooter subsystem consisting of two wheels, front and back
 * which are in open-loop mode.
*/

#include "Shooter.h"

Shooter::Shooter(RobotMap* robot_map_):
    Subsystem("Shooter"),
    m_Front(robot_map_->shooterMotorFront),
    m_Back(robot_map_->shooterMotorBack)
{}

void Shooter::stop()
{
    m_Front->Set(0.0);
    m_Back->Set(0.0);
    //m_Front->Disable();
    //m_Back->Disable();
}
  
void Shooter::slow()
{
    m_Front->Set(-0.1);
    m_Back->Set(-0.1);
}
  
void Shooter::fast()
{
    m_Front->Set(-0.4);
    m_Back->Set(-0.4);
}

void Shooter::initDefaultCommand()
{}
