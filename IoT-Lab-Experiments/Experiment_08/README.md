# Experiment 8: IoT Data Upload using ESP32 and ThingSpeak

## Objective
To measure temperature and humidity using DHT11 and ESP32 and upload to ThingSpeak.

## Components
- ESP32, DHT11 Sensor
- WiFi, ThingSpeak account

## Circuit
- DHT11 → Data pin to GPIO4 of ESP32

## Arduino Code:
```cpp
#include "DHT.h"
#include <WiFi.h>
#include "ThingSpeak.h"

char ssid[] = "yourSSID";
char pass[] = "yourPASS";
WiFiClient client;

unsigned long channelID = YOUR_CHANNEL_ID;
const char *writeAPIKey = "YOUR_API_KEY";
DHT dht(4, DHT11);

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, pass);
  ThingSpeak.begin(client);
  dht.begin();
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  ThingSpeak.setField(1, t);
  ThingSpeak.setField(2, h);
  ThingSpeak.writeFields(channelID, writeAPIKey);

  delay(15000);
}
```

## Output
- Real-time data shown on ThingSpeak channel.

## Conclusion
Successfully uploaded sensor data from ESP32 to cloud.
