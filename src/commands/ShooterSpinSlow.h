#ifndef ShooterSpinSlow_h
#define ShooterSpinSlow_h

#include "CommandBase.h"

class ShooterSpinSlow: public CommandBase {
	public:
		ShooterSpinSlow();
		~ShooterSpinSlow();
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
	
