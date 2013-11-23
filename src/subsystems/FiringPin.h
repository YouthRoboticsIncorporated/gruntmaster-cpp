#ifndef FiringPin_h
#define FiringPin_h

#include <WPILib.h>

#include "../RobotMap.h"

class FiringPin:public Subsystem {
	public:
		FiringPin();
		void fire();
		bool isFired();
		bool isReset();
		void Reset();
		void Stop();
		void InitDefaultCommand();
		
	private:
		Victor* motor;
		DigitalInput* max;
		DigitalInput* min;
		double motorSpeed;

};

#endif