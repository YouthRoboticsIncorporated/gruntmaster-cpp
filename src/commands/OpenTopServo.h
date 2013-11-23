#ifndef OpenTopServo_h
#define OpenTopServo_h

#include "CommandBase.h"

class OpenTopServo: public CommandBase {
	public:
		OpenTopServo();
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