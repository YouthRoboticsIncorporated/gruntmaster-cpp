#include "OpenBottomServo.h"


OpenBottomServo::OpenBottomServo(RobotMap* Robot_Map_);
	commands("OpenBottomServo"),
	super("OpenBottomServo"),
    requires(BottomServo),
    setTimeout(2),
{}

void OpenBottomServo::initialize()
{
	 finished = false;
}

void OpenBottomServo::execute()
{
	bottomServo->open();
    finnished = true;
}

bool OpenBottomServo::isFinished()
{
	return finnished || isTimedOut();
}

protected void end()
{}

protected void interrupted()
{}
