#include "ECE140_WIFI.h"
#include "ECE140_MQTT.h"

// MQTT client - using descriptive client ID and topic
#define CLIENT_ID "esp32-sensors"
#define TOPIC_PREFIX "gurnoor/ece140/sensors"

ECE140_MQTT mqtt(CLIENT_ID, TOPIC_PREFIX);
ECE140_WIFI wifi;

// WiFi credentials
const char* ucsdUsername = UCSD_USERNAME;
const char* ucsdPassword = UCSD_PASSWORD;
const char* wifiSsid = WIFI_SSID;
const char* nonEnterpriseWifiPassword = NON_ENTERPRISE_WIFI_PASSWORD;

unsigned long lsatPublish = 0;

void setup() {
    Serial.begin(115200);
    delay(1000);
    Serial.println("Starting ESP32 sensor node...")
}

void loop() {

}