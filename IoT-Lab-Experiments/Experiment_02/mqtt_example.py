import paho.mqtt.client as mqtt

client = mqtt.Client()
client.connect('test.mosquitto.org', 1883, 60)
client.publish('iot/test', 'Hello MQTT')
client.disconnect()