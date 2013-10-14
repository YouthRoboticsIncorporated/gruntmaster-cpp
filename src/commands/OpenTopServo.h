#ifndef OpenTopServo_h
#def OpenTopServo_h

#include <WPILib.h>

#include "../RobotMap.h"

class OpenTopServo:public commands {
	public:
		OpenTopServo(RobotMap*);
		~OpenTopServo();
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
