#include <iostream>

#include "ShooterFire.h"

ShooterFire::ShooterFire(): CommandBase() {
    Requires(firingPin);
    isfiring = false;
    isreseting = false;
}

void ShooterFire::Initialize() {
    std::cout << "ShooterFire:Initiliaze" <<
          " isFired = " << firingPin->isFired() <<
          ", isReset = " << firingPin->isReset() << "\n";
    isfiring = true;
    isreseting = false;
    SetTimeout(5);
}

void ShooterFire::Execute()
{
    std::cout << "ShooterFire:Execute" <<
        " isFired = " << firingPin->isFired() <<
        ", isReset = " << firingPin->isReset() << "\n";
    if (isfiring){
        if (firingPin->isFired()){
            std::cout << "ShooterFire:Reset\n";
            isfiring = false;
            isreseting = true;
        } else {
            firingPin->fire();          
        }
    } else if (isreseting){
        if (firingPin->isReset()){
            std::cout << "ShooterFire:Done\n";
            isreseting = false;
        } else {
            firingPin->Reset();
        }
    }
}

bool ShooterFire::IsFinished()
{
    bool finished = ((isfiring == false) && (isreseting == false)) || IsTimedOut();
    return finished;
}

void ShooterFire::End()
{
    std::cout << "ShooterFire:End timeout=" << IsTimedOut() << "\n";
    firingPin->Stop();
}

void ShooterFire::Interrupted()
{
    std::cout << "ShooterFire:Interrupted\n";
    firingPin->Stop();
}
