#ifndef OpenBottomServo_h
#define OpenBottomServo_h

#include "CommandBase.h"

class OpenBottomServo: public CommandBase {
	public:
		OpenBottomServo();
		~OpenBottomServo();
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