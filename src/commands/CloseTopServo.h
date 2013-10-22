#ifndef CloseTopServo_h
#define CloseTopServo_h

#include "CommandBase.h"

class CloseTopServo: public CommandBase {
	public:
		CloseTopServo();
		~CloseTopServo();
		void Initialize();
		void Execute();        
		bool IsFinished();        
	protected:
		void End();        
		void Interrupted();
	private:
		bool finished;
};

#endif
