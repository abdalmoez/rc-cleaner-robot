#include "basic.h"
#include "settings.h"
#include "sensor_us.h"

bool circleRightLeft()
{
  forward();
  while(readsensor_us(SensorUSUp_Trig,SensorUSUp_Echo) > minimalDistance) { }
  stopMotors();
  rotateRight(rotate90timeRight);
  if (readsensor_us(SensorUSUp_Trig,SensorUSUp_Echo) <= minimalDistance)
      return false;
  forward(forward25cmtime);
  rotateRight(rotate90timeRight);

  forward();
  while(readsensor_us(SensorUSUp_Trig,SensorUSUp_Echo) > minimalDistance) { }
  stopMotors();

  rotateLeft(rotate90timeLeft);
  if (readsensor_us(SensorUSUp_Trig,SensorUSUp_Echo) <= minimalDistance)
      return false;
  forward(forward25cmtime);
  rotateLeft(rotate90timeLeft);
  return true;
}

bool circleLeftRight()
{
  forward();
  while(readsensor_us(SensorUSUp_Trig,SensorUSUp_Echo) > minimalDistance) { }
  stopMotors();
  
  rotateLeft(rotate90timeLeft);
  if (readsensor_us(SensorUSUp_Trig,SensorUSUp_Echo) <= minimalDistance)
      return false;
  forward(forward25cmtime);
  rotateLeft(rotate90timeLeft);

  forward();
  while(readsensor_us(SensorUSUp_Trig,SensorUSUp_Echo) > minimalDistance) { }
  stopMotors();

  rotateRight(rotate90timeRight);
  if (readsensor_us(SensorUSUp_Trig,SensorUSUp_Echo) <= minimalDistance)
      return false;
  forward(forward25cmtime);
  
  rotateRight(rotate90timeRight);
  
  return true;
}

void autoClean(int n)
{
  for(int i=0;i<n;i++)
  {
    if(readsensor_us(SensorUSLeft_Trig,SensorUSLeft_Echo) <= minimalDistance)
    {
        if(i!=0)
            rotateRight(2*rotate90timeRight);//180Â°
        while(circleLeftRight()){}
    }else{
        if(i!=0)
            rotateLeft(2*rotate90timeLeft);//180Â°
        while(circleRightLeft()){}
    }
  } 

}


