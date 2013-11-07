#ifndef AutonomousCommandGroup_h
#define AutonomousCommandGroup_h

#include <WPILib.h>

#include "CommandBase.h"

class AutonomousCommandGroup: public CommandGroup {
	public:
		AutonomousCommandGroup (CommandBase*);
		~AutonomousCommandGroup();
		
		void Initialize();
		void Execute();
		bool IsFinished();
		
	private:
		int frisbeeCount;
		double waitTime;
		bool isFinished = false;
		CommandBase *commandbase;
		
};

#endif
