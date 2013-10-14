#ifndef CloseTopServo_h
#def CloseTopServo_h

#include <WPILib.h>

#include "../RobotMap.h"

class CloseTopServo:public commands {
	public:
		CloseTopServo(RobotMap*);
		~CloseTopServo();
		void initialize();
		void execute();
		bool isFinished();
		
	private:
		bool finished();	

	protected:
		void end();
		void interrupted();
			
};

#endif
