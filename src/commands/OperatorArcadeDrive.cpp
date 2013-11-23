#include "OperatorArcadeDrive.h"

OperatorArcadeDrive::OperatorArcadeDrive()
{
    Requires(chassis);
}

void OperatorArcadeDrive::Execute()
{
    chassis->drive(oi->getJoyDrvX(), oi->getJoyDrvY(), 0, oi->getJoyDrvThrottle() );
}

bool OperatorArcadeDrive::IsFinished()
{
    return false;
}

void OperatorArcadeDrive::Initialize()
{}

void OperatorArcadeDrive::End()
{}

void OperatorArcadeDrive::Interrupted()
{
    End();
}
