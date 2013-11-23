#ifndef OpenBottomServo_h
#define OpenBottomServo_h

#include "CommandBase.h"

class OpenBottomServo: public CommandBase {
	public:
		OpenBottomServo();
	protected:
		void Initialize();
		void Execute();        
		bool IsFinished();        
		void End();        
		void Interrupted();
	private:
		bool finished;
};

#endif