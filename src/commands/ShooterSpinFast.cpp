#include "ShooterSpinFast.h"

ShooterSpinFast::ShooterSpinFast(): CommandBase("ShooterSpinFast")
{
Requires(shooter);
} // public ShooterSpinup()

void ShooterSpinFast::Initialize() {
    finished = false;
}

void ShooterSpinFast::Execute()
{
    shooter->fast();
    finished = true;
}

bool ShooterSpinFast::IsFinished()
{
    return finished;
} // public boolean isFinished()

void ShooterSpinFast::End() {}

void ShooterSpinFast::Interrupted() {}
