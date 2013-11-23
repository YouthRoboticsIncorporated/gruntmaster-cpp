#ifndef Shooter_h
#define Shooter_h

#include <WPILib.h>

#include "../RobotMap.h"

class Shooter:public Subsystem {
    public:
        Shooter(); // Constructor
        // Methods
        void stop();
        void slow();
        void fast();
        void InitDefaultCommand();
    
    private:
        // Motor controllers
        SpeedController* m_Front;
        SpeedController* m_Back;

};

#endif