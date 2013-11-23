#include "CloseTopServo.h"

CloseTopServo :: CloseTopServo() : CommandBase("CloseTopServo") {
	Requires(topServo);
}

void CloseTopServo :: Initialize() {
finished = false;
}

void CloseTopServo :: Execute() 
{
topServo->close (); 
finished = true;
}

bool CloseTopServo::IsFinished()
{
	return finished ;
}

void CloseTopServo::End()
{

}

void CloseTopServo::Interrupted()
{

}

	