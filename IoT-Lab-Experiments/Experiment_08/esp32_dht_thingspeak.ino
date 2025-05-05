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
  delay(20000);
}