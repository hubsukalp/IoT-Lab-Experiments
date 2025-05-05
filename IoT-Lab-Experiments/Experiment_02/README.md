# Experiment 2: Basics of Network and Cloud

## Objective
Understand CoAP, MQTT, and ThingSpeak basics.

## MQTT Example
```bash
mosquitto_pub -h test.mosquitto.org -t "iot/test" -m "Hello MQTT"
```

## ThingSpeak Python Example
```python
import requests
API_KEY = 'YOUR_API_KEY'
data = {'field1': 25}
requests.post(f'https://api.thingspeak.com/update?api_key={API_KEY}', data=data)
```
