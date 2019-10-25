
#include <NewPing.h>
#include "settings.h"
#include "basic.h"
#include "sensor_us.h"
#include "automatic.h"

NewPing sonar(SensorUSUp_Trig, SensorUSUp_Echo, 40);

void setup() {
  Serial.begin(9600);
  //initSensorsUS();
  init_motors();

}
void autoControl()
{
  forward(2500);
  rotateLeft(1000);
  forward(1000);
  rotateLeft(1000);
  forward(2000);
  rotateRight(1000);
  forward(1000);
  rotateRight(1000);
  forward(2500);
}
void manualControl(byte cmd)
{
  switch(cmd)
  {
    case BC_FORWARD:forward();break;
    case BC_BACKWORD:backward();break;
    case BC_TURNLEFT:turnLeft();break;
    case BC_TURNRIGHT:turnRight();break;
    case BC_ROTATELEFT:rotateLeft();break;
    case BC_ROTATERIGHT:rotateRight();break;
    case BC_STOPMOTORS:stopMotors();break;
  }
}

void loop() {
  
 if (Serial.available()>0)
  {
    byte b=Serial.read();
    switch(b)
    {
      case BC_AUTOMATIC_CLEAN:
          autoControl();
          break;
      case BC_STOP:
          break;
      default:
          manualControl(b);
    }
  }
}
