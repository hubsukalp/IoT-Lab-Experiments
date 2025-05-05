# Experiment 2: Basics of Network and Cloud Communication

## Objective
To learn the basics of CoAP, MQTT, and interfacing with ThingSpeak cloud platform.

## Components Required
- Raspberry Pi or PC with Python
- Internet connection

## Procedure
### A. MQTT with Mosquitto Test Server
1. Install Mosquitto (if needed): `sudo apt install mosquitto-clients`
2. Publish and Subscribe to topic:

```bash
mosquitto_pub -h test.mosquitto.org -t "iot/topic" -m "Hello from IoT"
mosquitto_sub -h test.mosquitto.org -t "iot/topic"
```

### B. ThingSpeak Python Upload
1. Get your API Key from ThingSpeak.
2. Use the following Python code:

```python
import requests

API_KEY = 'YOUR_API_KEY'
data = {'field1': 25}
url = f'https://api.thingspeak.com/update?api_key={API_KEY}'
response = requests.post(url, data=data)
print("Status:", response.status_code)
```

## Output
- MQTT messages published and subscribed.
- Data uploaded to ThingSpeak successfully.

## Conclusion
Successfully tested MQTT and cloud communication with ThingSpeak.
