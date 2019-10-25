#include <Arduino.h>
#include "settings.h"

void init_motors()
{
  pinMode(motorRightForward,OUTPUT);
  pinMode(motorRightBackward,OUTPUT);
  pinMode(motorLeftForward,OUTPUT);
  pinMode(motorLeftBackward,OUTPUT);
}

void stopMotors()
{
  analogWrite(motorRightForward,0);
  analogWrite(motorRightBackward,0);
  analogWrite(motorLeftForward,0);
  analogWrite(motorLeftBackward,0);
}

void forward()
{
  analogWrite(motorRightForward,motorRightPWM);
  analogWrite(motorRightBackward,0);
  analogWrite(motorLeftForward,motorLeftPWM);
  analogWrite(motorLeftBackward,0);
}
void forward(int ms)
{
  forward();
  delay(ms);
  stopMotors();
}

void backward()
{
  analogWrite(motorRightForward,0);
  analogWrite(motorRightBackward,motorRightPWM);
  analogWrite(motorLeftForward,0);
  analogWrite(motorLeftBackward,motorLeftPWM);
}
void backward(int ms)
{
  backward();
  delay(ms);
  stopMotors();
}

void turnLeft()
{
  analogWrite(motorRightForward,motorRightPWM);
  analogWrite(motorRightBackward,0);
  analogWrite(motorLeftForward,0);
  analogWrite(motorLeftBackward,0);
}
void turnLeft(int ms)
{
  turnLeft();
  delay(ms);
  stopMotors();
}

void turnRight()
{
  analogWrite(motorRightForward,0);
  analogWrite(motorRightBackward,0);
  analogWrite(motorLeftForward,motorLeftPWM);
  analogWrite(motorLeftBackward,0);
}
void turnRight(int ms)
{
  turnRight();
  delay(ms);
  stopMotors();
}

void rotateLeft()
{
  analogWrite(motorRightForward,motorRightPWM);
  analogWrite(motorRightBackward,0);
  analogWrite(motorLeftForward,0);
  analogWrite(motorLeftBackward,motorLeftPWM);
}
void rotateLeft(int ms)
{
  rotateLeft();
  delay(ms);
  stopMotors();
}

void rotateRight()
{
  analogWrite(motorRightForward,0);
  analogWrite(motorRightBackward,motorRightPWM);
  analogWrite(motorLeftForward,motorLeftPWM);
  analogWrite(motorLeftBackward,0);
}
void rotateRight(int ms)
{
  rotateRight();
  delay(ms);
  stopMotors();
}




