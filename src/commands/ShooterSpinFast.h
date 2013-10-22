#ifndef ShooterSpinFast_h
#define ShooterSpinFast_h

#include "CommandBase.h"

class ShooterSpinFast: public CommandBase {
    public:
        ShooterSpinFast();
        ~ShooterSpinFast();
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
