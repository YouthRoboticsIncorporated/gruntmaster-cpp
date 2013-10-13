#ifndef BottomServo_h
#define BottomServo_h

#include <WPILib.h>

#include "../RobotMap.h"

class BottomServo: public Subsystem {
	public:
		BottomServo(RobotMap*); // Constructor
        ~BottomServo(); // Destructor
        // Methods
        void open() ;
        void close () ;
        void InitDefaultCommand() ;
        
    private:
		Servo* const m_hopperServoBottom;
		
};

#endif
        
