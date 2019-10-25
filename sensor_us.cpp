#include <Arduino.h>
#include "settings.h"

void initSensorsUS()
{
      pinMode(  SensorUSLeft_Trig ,OUTPUT);
      pinMode(  SensorUSLeft_Echo ,INPUT);
      pinMode(  SensorUSRight_Trig ,OUTPUT);
      pinMode(  SensorUSRight_Echo ,INPUT);
      pinMode(  SensorUSBottom_Trig ,OUTPUT);
      pinMode(  SensorUSBottom_Echo ,INPUT);
      pinMode(  SensorUSUp_Trig ,OUTPUT);
      pinMode(  SensorUSUp_Echo ,INPUT);
}

int readus(int Trig,int Echo)
{

 digitalWrite(Trig,HIGH);
 delayMicroseconds(10);
 digitalWrite(Trig,LOW);
 return (pulseIn(Echo,HIGH)/58);
}
int readsensor_us(int Trig,int Echo)
{
  int a=readus(Trig,Echo),b=readus(Trig,Echo),c=readus(Trig,Echo);
  int d1=abs(a-b),d2=abs(a-c),d3=abs(b-c);
  if((d1<d2)&&(d1<d3))
    return (a<b)?a:b;
  else if((d2<d1)&&(d2<d3))
    return (a<c)?a:c;
  else return (b<c)?b:c;
}

bool readsensor_us(int Trig,int Echo,int disLimitDetect)
{
 return (readsensor_us(Trig,Echo)<=disLimitDetect);
}

