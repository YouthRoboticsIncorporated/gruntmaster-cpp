#include "GruntMaster6000.h"

#include "commands/AutonomousCommandGroup.h"

GruntMaster6000::GruntMaster6000():
    IterativeRobot ()
{}

void GruntMaster6000::RobotInit()
{
    // Initialize all subsystems
    CommandBase::init();
    
    // Smart Dashboard
    SmartDashboard::PutData("SchedulerData",Scheduler::GetInstance());
    SmartDashboard::PutData(CommandBase::chassis);
    SmartDashboard::PutData(CommandBase::firingPin);
    SmartDashboard::PutData(CommandBase::shooter);
    
    // instantiate the command used for the autonomous period
    autonomousCommand = new AutonomousCommandGroup();
}
  
void GruntMaster6000::AutonomousInit()
{
    //autonomousCommand->Start();
}

void GruntMaster6000::AutonomousPeriodic()
{
    Scheduler::GetInstance()->Run();
}

void GruntMaster6000::TeleopInit()
{
    autonomousCommand->Cancel();
} // public void teleopInit()
  
void GruntMaster6000::TeleopPeriodic()
{
    Scheduler::GetInstance()->Run();
} // public void operatorControl() 

void GruntMaster6000::TestPeriodic()
{
    LiveWindow::GetInstance()->Run();
} // public void testPeriodic()

START_ROBOT_CLASS(GruntMaster6000);