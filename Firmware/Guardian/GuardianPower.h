#ifndef GuardianPower_h
#define GuardianPower_h


//Standard Arduino Libraries
#include <Arduino.h>

class GuardianPower
{
  private:

  public:
    bool isCharging();
    uint16_t getBatteryVoltage();
  
};

#endif
