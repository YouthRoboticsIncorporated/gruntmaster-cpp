#include "GruntMaster6000.h"


GruntMaster6000::GruntMaster6000(RobotMap* Robot_Map_);
	commands("GruntMaster6000"),
	super("GruntMaster6000"),
    requires(chassis),
{}

	void GruntMaster6000::robotInit() 
{
	CommandBase->init();
}

	void autonomousInit();
{}
	
	void autnomousPeriodic();
{}
	
	void teleopInit();
{}
	void teleopPeriodic();
{
	Scheduler.getInstance().run();
}

	void testPeriodic();
{
	LiveWindow.run();
}