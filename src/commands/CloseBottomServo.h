#ifndef CloseBottomServo_h
#def CloseBottomServo_h

#include <WPILib.h>

#include "../RobotMap.h"

class CloseBottomServo:public commands {
	public:
		CloseBottomServo(RobotMap*);
		~CloseBottomServo();
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
