#ifndef BottomServo_h
#define BottomServo_h

#include <WPILib.h>

#include "../RobotMap.h"

class BottomServo: public Subsystem {
	public:
		BottomServo(); // Constructor
        // Methods
        void open();
        void close();
        void InitDefaultCommand();
        
    private:
		Servo* m_hopperServoBottom;
		
};

#endif
        
