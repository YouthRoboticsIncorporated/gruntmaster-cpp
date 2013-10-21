#include <iostream>

#include "OpenBottomServo.h"

OpenBottomServo :: OpenBottomServo() : CommandBase("OpenBottomServo") {
	Requires(bottomServo);
}

void OpenBottomServo :: Initialize() {
finished = false;
}

void OpenBottomServo :: Execute() 
{
bottomServo->open (); 
finished = true;
}

bool OpenBottomServo::isFinished()
{
	return finished ;
}

void OpenBottomServo::End()
{

}

void OpenBottomServo::Interrupted()
{

}