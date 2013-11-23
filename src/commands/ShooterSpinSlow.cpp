#include "ShooterSpinSlow.h"

ShooterSpinSlow::ShooterSpinSlow(): CommandBase("ShooterSpinSlow")
{
	Requires(shooter);
}

void ShooterSpinSlow::Initialize()
{
    finished = false;
}

void ShooterSpinSlow::Execute()
{
    shooter->slow();
    finished = true;
}

bool ShooterSpinSlow::IsFinished()
{
    return finished;
} 

void ShooterSpinSlow::End()
{}

void ShooterSpinSlow::Interrupted()
{}
