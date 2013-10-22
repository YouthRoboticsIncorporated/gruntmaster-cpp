#include <iostream>

#include "ShooterSpinStop.h"

ShooterSpinStop :: ShooterSpinStop() : CommandBase("ShooterSpinStop") {
	Requires(shooter);
}
void ShooterSpinStop::Initialize() {
    finished = false;
}

void ShooterSpinStop::Execute()
{
    shooter->stop();
    finished = true;
}

bool ShooterSpinStop::IsFinished()
{
    return finished;
} 

void ShooterSpinStop::End() {

}

void ShooterSpinStop::Interrupted() {

}
