#ifndef TopServo_h
#define TopServo_h

#include <WPILib.h>

#include "../RobotMap.h"

class TopServo: public Subsystem {
	public:
		TopServo(RobotMap*); // Constructor
        ~TopServo(); // Destructor
        // Methods
        void open() ;
        void close () ;
        void InitDefaultCommand() ;
        
    private:
		Servo* const m_hopperServoTop;
		
};

#endif
