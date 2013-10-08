#ifndef Shooter_h
#define Shooter_h

#include <WPILib.h>

#include "../RobotMap.h"

class Shooter:public Subsystem {
    public:
        Shooter(RobotMap*); // Constructor
        ~Shooter(); // Destructor
        // Methods
        void stop();
        void slow();
        void fast();
        void InitDefaultCommand();
    
    private:
        // Motor controllers
        SpeedController* const m_Front;
        SpeedController* const m_Back;

};

#endif