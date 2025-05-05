# Experiment 5: MQTT with Mosquitto

## Objective
Use Mosquitto broker for real-time communication.

## Commands
```bash
mosquitto -v
mosquitto_pub -t "iot/topic" -m "data"
mosquitto_sub -t "iot/topic"
```
