#include <iostream>

#include "OpenTopServo.h"

OpenTopServo :: OpenTopServo() : CommandBase("OpenTopServo") {
	Requires(topServo);
}

void OpenTopServo :: Initialize() {
finished = false;
}

void OpenTopServo :: Execute() 
{
topServo->open (); 
finished = true;
}

bool OpenTopServo::isFinished()
{
	return finished ;
}

void OpenTopServo::End()
{

}

void OpenTopServo::Interrupted()
{

}