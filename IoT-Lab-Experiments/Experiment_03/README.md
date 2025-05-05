# Experiment 3: IoT Protocol Libraries

## Objective
To study the use of IoT libraries for communication protocols like Wi-Fi, Bluetooth, ZigBee, and LoRa.

## Components
- Raspberry Pi / PC with Python
- Wi-Fi, Bluetooth, XBee, LoRa modules

## Procedure
### A. Wi-Fi
Use socket module for network communication.

### B. Bluetooth
Use PyBluez library for Bluetooth communication.

### C. ZigBee
Use XBee Python Library for serial communication.

### D. LoRa (pyLoRa)
Use LoRa Python libraries or Arduino libraries.

## Code Snippet (Bluetooth Scan)
```python
import bluetooth
devices = bluetooth.discover_devices()
for d in devices:
    print(bluetooth.lookup_name(d), d)
```

## Output
- List of nearby Bluetooth devices.

## Conclusion
Explored IoT protocol libraries for device communication.
