#include <WiFi.h>
#include <HTTPClient.h>
#include <DHT11.h>

DHT11 dht11(18);

const char* wifiname = "IoT"; 
const char* password = "IoT@1234"; 

const char* serverName = "http://api.thingspeak.com/update"; 

String apiKey = "W24X4GJEFZHQLGJN";//your write API key

void setup() {

  Serial.begin(115200);
  WiFi.begin(wifiname, password);

  Serial.println("Connecting");

  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());
}

void loop() {

  if(WiFi.status()== WL_CONNECTED){
      WiFiClient client;
      HTTPClient http;
      delay(1000); // wait for 10 seconds

      int temperature = 0;
      int humidity = 0;
      int result = dht11.readTemperatureHumidity(temperature, humidity);

      if (result == 0) {
        Serial.print("Temperature: ");
        Serial.print(temperature);
        Serial.print(" °C\tHumidity: ");
        Serial.print(humidity);
        Serial.println(" %");
        delay(2000);
      } else {
          Serial.println(DHT11::getErrorString(result));
      }
      http.begin(client, serverName);
      http.addHeader("Content-Type", "application/x-www-form-urlencoded");
      String httpRequestData = "api_key=" + apiKey + "&field1=" + String(temperature);          
      int httpResponseCode = http.POST(httpRequestData);

      Serial.print("HTTP Response code: ");
      Serial.println(httpResponseCode);

      http.end();
    }
    else {
      Serial.println("WiFi Disconnected");
    }
}
