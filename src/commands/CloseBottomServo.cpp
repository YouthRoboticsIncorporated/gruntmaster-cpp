#include <iostream>

#include "CloseBottomServo.h"

CloseBottomServo :: CloseBottomServo() : CommandBase("CloseBottomServo") {
	Requires(bottomServo);
	SetTimeout (2);
}

void CloseBottomServo :: Initialize() {
finished = false;
}

void CloseBottomServo :: Execute() 
{
bottomServo->close (); 
finished = true;
}

bool CloseBottomServo::isFinished()
{
	return finished || IsTimedOut() ;
}

void CloseBottomServo::End()
{

}

void CloseBottomServo::Interrupted()
{

}


	