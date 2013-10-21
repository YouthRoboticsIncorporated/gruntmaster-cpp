#ifndef OpenTopServo_h
#define OpenTopServo_h

#include "CommandBase.h"

class OpenTopServo: public CommandBase {
	public:
		OpenTopServo();
		~OpenTopServo();
		void Initialize();
		void Execute();        
		bool isFinished();        
	protected:
		void End();        
		void Interrupted();
	private:
		bool finished;
};

#endif