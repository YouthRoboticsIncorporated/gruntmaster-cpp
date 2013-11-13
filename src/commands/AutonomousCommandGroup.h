#ifndef AutonomousCommandGroup_h
#define AutonomousCommandGroup_h

#include <WPILib.h>

#include "CommandBase.h"

class AutonomousCommandGroup: public CommandGroup {
	public:
		AutonomousCommandGroup ();
		~AutonomousCommandGroup();
		
		void Initialize();
		void Execute();
		bool IsFinished();
		
	private:
		int frisbeeCount;
		double waitTime;
		bool isFinished;
		
};

#endif
