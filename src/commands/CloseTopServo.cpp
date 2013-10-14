#include "CloseTopServo.h"


CloseTopServo::CloseTopServo(RobotMap* Robot_Map_);
	commands("CloseTopServo"),
	super("CloseBottomServo"),
    requires(TopServo),
    setTimeout(2),
{}

void CloseTopServo::initialize()
{
	 finished = false;
}

void CloseTopServo::execute()
{
	topServo->close();
    finnished = true;
}

bool CloseTopServo::isFinished()
{
	return finnished || isTimedOut();
}

protected void end()
{}

protected void interrupted()
{}
