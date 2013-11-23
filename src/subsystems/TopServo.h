#ifndef TopServo_h
#define TopServo_h

#include <WPILib.h>

#include "../RobotMap.h"

class TopServo: public Subsystem {
	public:
		TopServo(); // Constructor
        // Methods
        void open() ;
        void close () ;
        void InitDefaultCommand() ;
        
    private:
		Servo* m_hopperServoTop;
		
};

#endif
