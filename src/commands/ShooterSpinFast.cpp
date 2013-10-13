#include "ShooterSpinFast.h"

ShooterSpinFast::ShooterSpinFast(): CommandBase("ShooterSpinFast")
{
Requires(shooter);
} // public ShooterSpinup()

void ShooterSpinFast::Initialize() {
    finnished = false;
}

void ShooterSpinFast::Execute()
{
    shooter->fast();
    finnished = true;
}

bool ShooterSpinFast::IsFinished()
{
    return finnished;
} // public boolean isFinished()

void ShooterSpinFast::End() {}

void ShooterSpinFast::Interrupted() {}
