#define BLYNK_TEMPLATE_ID "TMPL3UxG1AArf"
#define BLYNK_TEMPLATE_NAME "app"
#define BLYNK_AUTH_TOKEN "eNEd_mTthuSVpjRlzbI59j50qu35hIse"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Suraj";          // Wi-Fi name
char pass[] = "surajveer";      // Wi-Fi password

#define LED_PIN 2  // GPIO for built-in LED (can change to any other pin)

BLYNK_WRITE(V0)  // Virtual pin V0 from Blynk app
{
  int ledState = param.asInt(); // Read button value
  digitalWrite(LED_PIN, ledState);  // Control LED
}

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);  // Connect to Wi-Fi and Blynk
}

void loop() {
  Blynk.run();  // Run Blynk
}
