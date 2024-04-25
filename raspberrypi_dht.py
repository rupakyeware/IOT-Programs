import board
import adafruit_dht as af
import time

dht_device = af.DHT22(board.D4);

while True:
	try:
		temperature_c = dht_device.temperature
		temperature_f = ((temperature_c * 9) / 5) + 32
		humidity = dht_device.humidity
		print(f"Temperature in Celsius: {temperature_c}\nTemperature in Fahrenheit: {temperature_f}\nHumidity: {humidity}\n")
	except:
		print("Some error occured!")
	time.sleep(2.0)
		
