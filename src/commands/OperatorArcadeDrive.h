#ifndef OperatorArcadeDrive_h
#define OperatorArcadeDrive_h

#include "CommandBase.h"
#include "../OI.h"

class OperatorArcadeDrive: public CommandBase
{
    public:
        OperatorArcadeDrive();
        void Execute();
        bool IsFinished();
        void Interrupted();
    private:
       static OI* oi; 
};

#endif
