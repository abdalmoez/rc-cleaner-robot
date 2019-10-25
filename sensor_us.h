#ifndef SENSOR_US
#define SENSOR_US

  void initSensorsUS();
  int readsensor_us(int Trig,int Echo);//distance cm
  bool readsensor_us(int Trig,int Echo,int disLimitDetect);
#endif

