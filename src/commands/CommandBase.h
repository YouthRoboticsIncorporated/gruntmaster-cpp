#ifndef CommandBase_h
#define CommandBase_h

#include <WPILib.h>

#include "../OI.h"
#include "../subsystems/BottomServo.h"
#include "../subsystems/Chassis.h"
#include "../subsystems/FiringPin.h"
#include "../subsystems/Shooter.h"
#include "../subsystems/TopServo.h"

class CommandBase: public Command {
    public:
        // Constructors and destructors
        CommandBase();
        CommandBase(const char *name);
        ~CommandBase();
        
        // Methods
        void Initialize();
        
        // Members
        static RobotMap* robotMap;
        // Subsystems
        static BottomServo* bottomServo;
        static Chassis* chassis;
        static FiringPin* firingPin;
        static Shooter* shooter;
        static TopServo* topServo;
        
    private:
        void setup();
};

#endif
