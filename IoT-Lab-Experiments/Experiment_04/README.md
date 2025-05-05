# Experiment 4: Configuration of XBee S2C and LoRa Devices

## Objective
To configure XBee and LoRa modules and establish a Wireless Sensor Network (WSN).

## Tools
- XCTU software (for XBee)
- Arduino with LoRa module

## Procedure
### A. XBee Configuration using XCTU
1. Set PAN ID, Destination Address High/Low (DH/DL).
2. Write settings to modules.
3. Connect two XBee modules in loopback for test.

### B. LoRa with Arduino
```cpp
#include <SPI.h>
#include <LoRa.h>

void setup() {
  Serial.begin(9600);
  while (!Serial);
  LoRa.begin(915E6);
}

void loop() {
  LoRa.beginPacket();
  LoRa.print("Sensor Data");
  LoRa.endPacket();
  delay(2000);
}
```

## Output
- XBee modules communicate using XCTU terminal.
- LoRa data is sent wirelessly.

## Conclusion
Successfully configured XBee and LoRa modules.
