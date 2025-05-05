# Experiment 5: MQTT Communication with Mosquitto

## Objective
To establish real-time communication using the MQTT protocol and Mosquitto broker.

## Components
- Raspberry Pi / PC with MQTT client tools

## Procedure
1. Install Mosquitto and clients:
```bash
sudo apt install mosquitto mosquitto-clients
```

2. Start the Mosquitto broker:
```bash
mosquitto -v
```

3. In separate terminals, run:
```bash
mosquitto_sub -t "iot/test"
mosquitto_pub -t "iot/test" -m "Hello MQTT"
```

## Output
- Message appears on the subscriber terminal.

## Conclusion
Successfully demonstrated real-time MQTT communication.
