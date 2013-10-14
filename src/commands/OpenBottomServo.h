#ifndef OpenBottomServo_h
#def OpenBottomServo_h

#include <WPILib.h>

#include "../RobotMap.h"

class OpenBottomServo:public commands {
	public:
		OpenBottomServo(RobotMap*);
		~OpenBottomServo();
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
