int trigger = 4;
int echo = 3;
int buzzer = 10;

void setup()
{
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigger, HIGH);
  delay(10);
  digitalWrite(trigger, LOW);
  
  int time = pulseIn(echo, HIGH);
  float distance = (time * 0.034) / 2;

  if (distance <= 100) {
  
  	Serial.println(distance);
    digitalWrite(buzzer, HIGH);
    delay(100);
  }
  else {
  	digitalWrite(buzzer, LOW);
  }
}
