#include <iostream>

#include "OperatorArcadeDrive.h"

OperatorArcadeDrive::OperatorArcadeDrive()
{
    Requires(chassis);
    oi = new OI(robotMap);
}

void OperatorArcadeDrive::Execute()
{
    std::cout << "Drive " << oi->getJoyDrvX() << "," << oi->getJoyDrvY() << "," << oi->getJoyDrvThrottle();
    chassis->drive(oi->getJoyDrvX(), oi->getJoyDrvY(), 0, oi->getJoyDrvThrottle() );
}

bool OperatorArcadeDrive::IsFinished()
{
    return false;
}

void OperatorArcadeDrive::Interrupted()
{
    End();
}
