#include "CommandBase.h"

CommandBase::CommandBase(): Command()
{}

CommandBase::CommandBase(const char *name): Command(name)
{}

void CommandBase::init() {
    RobotMap::init();
    oi = new OI();
    
    chassis = new Chassis();
    firingPin = new FiringPin();
    shooter = new Shooter();
    topServo = new TopServo();
    bottomServo = new BottomServo();
}