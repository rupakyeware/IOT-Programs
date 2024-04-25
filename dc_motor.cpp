int motorPin = 7;

void setup()
{
  pinMode(motorPin, OUTPUT);
}

void loop()
{
	analogWrite(motorPin, 256);
  	delay(500);
  	analogWrite(motorPin, 0);
  	delay(500);
}
