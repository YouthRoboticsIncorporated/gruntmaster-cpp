#ifndef ShooterSpinSlow_h
#define ShooterSpinSlow_h

#include "CommandBase.h"

class ShooterSpinSlow: public CommandBase {
	public:
		ShooterSpinSlow();
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
	
