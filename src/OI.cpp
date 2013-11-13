#include "OI.h"

#include "commands/ShooterSpinFast.h"
#include "commands/ShooterSpinSlow.h"
#include "commands/ShooterFire.h"
#include "commands/ShooterSpinStop.h"
#include "commands/OpenTopServo.h"
#include "commands/CloseTopServo.h"
#include "commands/OpenBottomServo.h"
#include "commands/CloseBottomServo.h"

OI::OI():
        joyDrv(RobotMap::joyDrv),
        joyOpr(RobotMap::joyOpr)
{
    RobotMap::fastButton->WhenPressed(new ShooterSpinFast());
    RobotMap::slowButton->WhenPressed(new ShooterSpinSlow());
    RobotMap::fireButton->WhenPressed(new ShooterFire());
    RobotMap::stopButton->WhenPressed(new ShooterSpinStop());
    RobotMap::topButton->WhenActive(new OpenTopServo());
    RobotMap::topButton->WhenInactive(new CloseTopServo());
    RobotMap::bottomButton->WhenActive(new OpenBottomServo());
    RobotMap::bottomButton->WhenInactive(new CloseBottomServo());
}

  /**
   * Get a Joystick object for Driver joystick.
   * @return Joystick
   */
Joystick* const OI::getJoyDrv()
  {
    return joyDrv;
  }
  
  /**
   * Get a Jostick object for Operator joystick
   * @return Joystick
   */
Joystick* const OI::getJoyOpr()
  {
    return joyOpr;
  }
  
  /**
   * Apply dead zone parameter to a given joystick value and return the value
   * xor zero.
   * @param joyVal value to test
   * @param deadVal dead zone constant from RobotMap
   * @return double
   */
double OI::applyDeadZone(double joyVal, double deadVal)
  {
    if( (joyVal <= -deadVal) || (joyVal >= deadVal) )
    {
      return joyVal;
    }
    
    return 0;
  }
  
  /**
   * Get X value of driver Joystick with applied dead zone.
   * @return double
   */
double OI::getJoyDrvX()
  {
    return applyDeadZone(joyDrv->GetX(), RobotMap::JOY_DRV_DEAD_X);
  }
  
  /**
   * Get Y value of driver Joystick with applied dead zone.
   * @return double
   */
double OI::getJoyDrvY()
  {
    return applyDeadZone(joyDrv->GetY(), RobotMap::JOY_DRV_DEAD_Y);
  }
  
  /**
   * Get throttle value of driver joystick.
   * @return double
   */
double OI::getJoyDrvThrottle()
  {
    return ( (1+joyDrv->GetRawAxis(3)) / 2 );
  }
  
  /**
   * Get X value of operator Joystick with applied dead zone.
   * @return double
   */
double OI::getJoyOprX()
  {
    return applyDeadZone(joyOpr->GetX(), RobotMap::JOY_DRV_DEAD_X);
  }
  
  /**
   * Get Y value of operator Joystick with applied dead zone.
   * @return double
   */
double OI::getJoyOprY()
  {
    return applyDeadZone(joyOpr->GetY(), RobotMap::JOY_OPR_DEAD_Y);
  }
  
  /**
   * Get throttle value of operator joystick.
   * @return double
   */
double OI::getJoyOprThrottle()
  {
    return ( (1+joyOpr->GetRawAxis(3)) / 2 );
  }
