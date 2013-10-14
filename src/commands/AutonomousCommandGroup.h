#ifndef AutonomousCommandGroup_h
#def AutnomousCommandGroup_h

#include <WPILib.h>

#include "../RobotMap.h"

class AutnomousCommandGroup:public commands {
	public:
		AutnomousCommandGroup(RobotMap*);
		~AutnomousCommandGroup();
		void initialize();
		void execute();
		bool isFinished();
		
	private:
		frisbeeCount* const;
		waitTime* const;
		
};

#endif
