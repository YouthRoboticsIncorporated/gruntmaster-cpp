#ifndef CloseBottomServo_h
#define CloseBottomServo_h

#include "CommandBase.h"

class CloseBottomServo: public CommandBase {
	public:
		CloseBottomServo();
		~CloseBottomServo();
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