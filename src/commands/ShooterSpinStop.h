#ifndef ShooterSpinStop_h
#define ShooterSpinStop_h

#include "CommandBase.h"

class ShooterSpinStop: public CommandBase {
	public:
		ShooterSpinStop();
		~ShooterSpinStop();
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
	
