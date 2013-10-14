#include "OpenTopServo.h"


OpenTopServo::OpenTopServo(RobotMap* Robot_Map_);
	commands("OpenTopServo"),
	super("OpenTopServo"),
    requires(TopServo),
    setTimeout(2),
{}

void OpenTopServo::initialize()
{
	 finished = false;
}

void OpenTopServo::execute()
{
	bottomServo->open();
    finnished = true;
}

bool OpenTopServo::isFinished()
{
	return finnished || isTimedOut();
}

protected void end()
{}

protected void interrupted()
{}
