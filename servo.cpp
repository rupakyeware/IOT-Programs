#include<Servo.h>

Servo servo;

void setup()
{
  servo.attach(A0);
  servo.write(0);
}

void loop()
{
  for (int i = 0; i < 180; i++)
  {
    servo.write(i);
    delay(10);  
  }
  
  for (int i = 180; i > 0; i--)
  {
    servo.write(i);
    delay(10);  
  }
}
