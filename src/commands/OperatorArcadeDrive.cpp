#include "OperatorArcadeDrive.h"


OperatorArcadeDrive::OperatorArcadeDrive(RobotMap* Robot_Map_);
	commands("OperatorArcadeDrive"),
	super("OperatorArcadeDrive"),
    requires(chassis),
{}

  void OperatorArcadeDrive::initialize() 
{}

  void OperatorArcadeDrive::execute()
  {
    System.out.println("Drive " + oi.getJoyDrvX() + "," + oi.getJoyDrvY() + "," + oi.getJoyDrvThrottle());
    chassis.drive(oi.getJoyDrvX(), oi.getJoyDrvY(), 0, oi.getJoyDrvThrottle() );
}
  
  bool OperatorArcadeDrive::isFinished()
  {
    return false;
}

  void OperatorArcadeDrive::end()
  {}

  void OperatorArcadeDrive::interrupted()
  {
    end();
  }
  