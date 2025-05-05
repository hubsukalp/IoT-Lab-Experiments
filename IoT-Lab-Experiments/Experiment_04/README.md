# Experiment 4: XBee & LoRa Configuration

## Objective
Create a WSN using XBee and LoRa.

## XBee Setup
Use XCTU to configure PAN ID, DH, DL.

## LoRa Arduino Example
```cpp
#include <SPI.h>
#include <LoRa.h>
void setup() {
  LoRa.begin(915E6);
}
void loop() {
  LoRa.beginPacket();
  LoRa.print("Hello LoRa");
  LoRa.endPacket();
  delay(2000);
}
```
