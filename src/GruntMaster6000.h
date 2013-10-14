#ifndef "GruntMaster6000_h"
#def "GruntMaster6000_h"

#include <WPILib_h>

#include "../RobotMap.h"

class GruntMaster6000:public src {
	public:
		GruntMaster6000(RobotMap*);
		~GruntMaster6000();
		void robotInit();
		void autonomousInit();
		void autnomousPeriodic();
		void teleopInit();
		void teleopPeriodic();
		void testPeriodic();
};

#endif
