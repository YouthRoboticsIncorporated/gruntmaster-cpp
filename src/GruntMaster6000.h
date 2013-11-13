#ifndef GruntMaster6000_h
#define GruntMaster6000_h

#include <WPILib.h>

#include "commands/CommandBase.h"

class GruntMaster6000 : public IterativeRobot {
	public:
		GruntMaster6000();
		~GruntMaster6000();
		void RobotInit();
		void AutonomousInit();
		void AutonomousPeriodic();
		void TeleopInit();
		void TeleopPeriodic();
		void TestPeriodic();
		
		Command* autonomousCommand;
	private:
};
		
#endif
