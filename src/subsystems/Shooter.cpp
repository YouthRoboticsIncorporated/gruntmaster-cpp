/**
 * Shooter subsystem consisting of two wheels, front and back
 * which are in open-loop mode.
*/

#include "Shooter.h"

Shooter::Shooter():
    Subsystem("Shooter")
{
    m_Front = RobotMap::shooterMotorFront;
    m_Back = RobotMap::shooterMotorBack;
}

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

void Shooter::InitDefaultCommand()
{}
