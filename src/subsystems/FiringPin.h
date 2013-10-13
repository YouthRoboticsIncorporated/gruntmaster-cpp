#ifndef FiringPin_h
#define FiringPin_h

#include <WPILib.h>

#include "../RobotMap.h"

class FiringPin:public Subsystem {
	public:
		FiringPin(RobotMap*);
		~FiringPin();
		void fire();
		bool isFired();
		bool isReset();
		void Reset();
		void Stop();
		void InitDefaultCommand();
		
	private:
		Victor* const motor;
		DigitalInput* const max;
		DigitalInput* const min;
		double motorSpeed;

};

#endif