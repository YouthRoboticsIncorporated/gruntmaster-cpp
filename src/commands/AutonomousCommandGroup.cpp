#include "AutonomousCommandGroup.h"
#include "ShooterSpinFast.h"
#include "ShooterSpinSlow.h"
#include "ShooterSpinStop.h"
#include "ShooterFire.h"

AutonomousCommandGroup :: AutonomousCommandGroup(CommandBase* commandbase_)
{
	commandbase = commandbase_ ;
	Requires(commandbase->chassis);
	Requires(commandbase->shooter);
	Requires(commandbase->firingPin);
	frisbeeCount = Preferences :: GetInstance()->GetInt("AUTONOMOUS_FRISBEE_COUNT", 3);
    waitTime     = Preferences :: GetInstance()->GetDouble("AUTONOMOUS_WAIT_TIME", 0.5);
    
    // Spin up shooter
    AddSequential(new ShooterSpinFast());
    
    for(int i=1; i <= frisbeeCount; i++)
    {
      // wait the preset amount of time before firing
		AddSequential(new WaitCommand(waitTime));
		AddSequential(new ShooterFire());
    }
    
    // move to somewhere smart on the field
    
    // set our finished boolean to true...IsFinished = true;
}
  
  
bool AutonomousCommandGroup :: IsFinished() {
    return isFinished;
} // public boolean isFinished()
 // public class AutonomousCommandGroup extends CommandGroup
