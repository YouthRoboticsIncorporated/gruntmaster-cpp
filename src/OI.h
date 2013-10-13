#ifndef OI_h
#define OI_h

#include <WPILib.h>

#include "RobotMap.h"

class OI {
    public:
        OI(RobotMap*);
        ~OI();
        Joystick* const getJoyDrv();
        Joystick* const getJoyOpr();
        
        double getJoyDrvX();
        double getJoyDrvY();
        double getJoyDrvThrottle();
        double getJoyOprX();
        double getJoyOprY();
        double getJoyOprThrottle();
        
        
    private:
        double applyDeadZone(double, double);
        
        Joystick* const joyDrv;
        Joystick* const joyOpr;
};

#endif
