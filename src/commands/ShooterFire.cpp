#include "ShooterFire.h"

ShooterFire::ShooterFire(): CommandBase()
{
    Requires(firingPin);
    isfiring = false;
    isreseting = false;
}

void ShooterFire::Initialize() {
    isfiring = true;
    isreseting = false;
    SetTimeout(5);
}

void ShooterFire::Execute()
{
    if (isfiring){
        if (firingPin->isFired()){
            isfiring = false;
            isreseting = true;
        } else {
            firingPin->fire();          
        }
    } else if (isreseting){
        if (firingPin->isReset()){
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
    firingPin->Stop();
}

void ShooterFire::Interrupted()
{
    firingPin->Stop();
}
