#include <WiFi.h>

const char* ssid = "ИМЯ_ВАШЕЙ_СЕТИ";
const char* password = "ПАРОЛЬ_WIFI";

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);

  Serial.println("Подключение к Wi-Fi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("Wi-Fi подключен!");
  Serial.print("IP адрес: ");
  Serial.println(WiFi.localIP());
}

void loop() {
}
