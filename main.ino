#include <arduino.h>
#include "CytronMotorDriver.h"

#define lineSensor A0

CytronMD motor(PWM_DIR, 3, 4);
int targetValue = 0;
int difference = 0;
int multiplier = 0;

void lineTrace()
{
  difference = targetValue - analogRead(lineSensor);
  if (difference == 0)
  {
    motor.setSpeed(100);
  }
  else if (difference < 0)
  {
  }
  else if (difference > 0)
  {
  }
}

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Hello");
}
