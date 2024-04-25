int REDLED_PIN = 12;
int YELLOWLED_PIN = 11;
int GREENLED_PIN = 10;

void setup()
{
  pinMode(REDLED_PIN, OUTPUT);
  pinMode(YELLOWLED_PIN, OUTPUT);
  pinMode(GREENLED_PIN, OUTPUT);

}

void loop()
{
	digitalWrite(REDLED_PIN, HIGH);
  	delay(1000);
	digitalWrite(REDLED_PIN, LOW);
  	delay(10);
  
  	digitalWrite(YELLOWLED_PIN, HIGH);
  	delay(1000);
	digitalWrite(YELLOWLED_PIN, LOW);
  	delay(10);
  
  	digitalWrite(GREENLED_PIN, HIGH);
  	delay(1000);
	digitalWrite(GREENLED_PIN, LOW);
  	delay(10);
}
