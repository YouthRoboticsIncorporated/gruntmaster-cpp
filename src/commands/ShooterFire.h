#ifndef ShooterFire_h
#define ShooterFire_h

#include "CommandBase.h"

class ShooterFire: public CommandBase {
    public:
        ShooterFire();
    protected:
        void Initialize();
        void Execute();
        bool IsFinished();
        void End();
        void Interrupted();
    private:
        bool isfiring;
        bool isreseting;
};

#endif
