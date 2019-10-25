#ifndef SETTINGS
#define SETTINGS
    //Motors pwm
    #define motorRightPWM 255
    #define motorLeftPWM 210
    
    //Pin define
    #define Bluetooth_TX 0
    #define Bluetooth_RX 1
    
    
    #define motorRightBackward 8
    #define motorRightForward 9
    #define motorLeftBackward 10
    #define motorLeftForward 11
    
    #define SensorUSLeft_Trig 2
    #define SensorUSLeft_Echo 3
    #define SensorUSUp_Trig 4
    #define SensorUSUp_Echo 5
    #define SensorUSRight_Trig 6
    #define SensorUSRight_Echo 7
    #define SensorUSBottom_Trig 12
    #define SensorUSBottom_Echo 13


    //Bluetooth Command list
    #define BC_STOPMOTORS 20
    #define BC_FORWARD 1
    #define BC_BACKWORD 2
    #define BC_TURNLEFT 3
    #define BC_TURNRIGHT 4
    #define BC_AUTOMATIC_CLEAN 5
    #define BC_ROTATELEFT 7
    #define BC_ROTATERIGHT 8
    #define BC_STOP 6

    //csts
    #define minimalDistance 5
    #define rotate90timeRight 880
    #define rotate180timeRight 1500
    #define rotate90timeLeft 820
    #define rotate180timeLeft 1551
    #define forward25cmtime 1050
    #define SensorLeftLimitDetect 5
    #define SensorRightLimitDetect 5
    #define SensorBottomimitDetect 5
    #define SensorUpLimitDetect 5
    
#endif
