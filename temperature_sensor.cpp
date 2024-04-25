int tmpPin = A0;

void setup()
{
  pinMode(tmpPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int reading = analogRead(tmpPin);
  float voltage = reading * 0.00488;
  voltage = (voltage - 0.5);
  
  float celsius = voltage / 0.01;
  
  Serial.print("Celsius: ");
  Serial.println(celsius);
  
  float fahrenheit = ((celsius * 9) / 5) + 32;
  
  Serial.print("Fahrenheit: ");
  Serial.println(fahrenheit);

  delay(1000);
}
