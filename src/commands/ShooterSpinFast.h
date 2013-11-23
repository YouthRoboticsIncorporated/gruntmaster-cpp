#ifndef ShooterSpinFast_h
#define ShooterSpinFast_h

#include "CommandBase.h"

class ShooterSpinFast: public CommandBase {
    public:
        ShooterSpinFast();
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
