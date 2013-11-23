#include "CommandBase.h"

CommandBase::CommandBase()
{
    setup();
}

CommandBase::CommandBase(const char *name): Command(name)
{
    setup();
}

void CommandBase::init() {
    oi = new OI;
    SmartDashboard::PutData("SchedulerData",Scheduler::GetInstance());
    
    SmartDashboard::PutData(chassis);
    SmartDashboard::PutData(firingPin);
    SmartDashboard::PutData(shooter);
}

void CommandBase::setup() {
    robotMap = new RobotMap();
    chassis = new Chassis();
    firingPin = new FiringPin(robotMap);
    shooter = new Shooter(robotMap);
    topServo = new TopServo(robotMap);
    bottomServo = new BottomServo();
}