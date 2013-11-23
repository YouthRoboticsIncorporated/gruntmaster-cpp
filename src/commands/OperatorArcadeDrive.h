#ifndef OperatorArcadeDrive_h
#define OperatorArcadeDrive_h

#include "CommandBase.h"
#include "../OI.h"

class OperatorArcadeDrive: public CommandBase
{
    public:
        OperatorArcadeDrive();
	protected:
		void Initialize();
		void Execute();        
		bool IsFinished();        
		void End();        
		void Interrupted();
    private:
};

#endif
