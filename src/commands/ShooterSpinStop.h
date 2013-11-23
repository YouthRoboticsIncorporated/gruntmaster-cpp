#ifndef ShooterSpinStop_h
#define ShooterSpinStop_h

#include "CommandBase.h"

class ShooterSpinStop: public CommandBase {
	public:
		ShooterSpinStop();
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
	
