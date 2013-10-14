#include "CloseBottomServo.h"


CloseBottomServo::CloseBottomServo(RobotMap* Robot_Map_);
	commands("CloseBottomServo"),
	super("CloseBottomServo"),
    requires(BottomServo),
    setTimeout(2),
{}

void CloseBottomServo::initialize()
{
	 finished = false;
}

void CloseBottomServo::execute()
{
	bottomServo->close();
    finnished = true;
}

bool CloseBottomServo::isFinished()
{
	return finnished || isTimedOut();
}

protected void end()
{}

protected void interrupted()
{}
