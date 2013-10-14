#include "AutonomousCommandGroup.h"


AutonomousCommandGroup::AutonomousCommandGroup(RobotMap* Robot_Map_);
	commands("AutonomousCommandGroup"),
	requires(CommandBase->chassis);
    requires(CommandBase->shooter);
    requires(CommandBase->firingPin);
    frisbeeCount = Preferences.getInstance().getInt("AUTONOMOUS_FRISBEE_COUNT", 3);
    waitTime = Preferences.getInstance().getDouble("AUTONOMOUS_WAIT_TIME", 0.5);
{}

void AutonomousCommandGroup::initialize()
{
	addSequential(new ShooterSpinFast());
    
    for(int i=1; i <= frisbeeCount; i++)
}

void AutonomousCommandGroup::fire()
{
	addSequential(new WaitCommand(waitTime));
    addSequential(new ShooterFire());
}

bool AutonomousCommandGroup::isFinished()
{
	isFinished = true;
}

{
	return isFinished;
}