#ifndef "OperatorArcadeDrive_h"
#def "OperatorArcadeDrive_h"

#include <WPILib_h>

#include "../RobotMap.h"

class OperatorArcadeDrive:public commands {
	public:
		OperatorArcadeDrive(RobotMap*);
		~OperatorArcadeDrive();
		void initialize();
		void execute();
		bool isFinished();
		void end();
		void interrupted();
			
};

#endif
