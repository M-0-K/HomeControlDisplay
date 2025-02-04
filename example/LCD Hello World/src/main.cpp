#include <Arduino.h>

void setup() {
    Serial.begin(115200);  // Serielle Kommunikation starten
    Serial.println("ESP32 bereit! Gebe einen Befehl ein:");
}

void loop() {
    if (Serial.available() > 0) {
        String input = Serial.readStringUntil('\n');  // Eingabe lesen
        input.trim();  // Entfernt Leerzeichen oder Zeilenumbrüche

        if (input == "PING") {
            Serial.println("PONG");
        } 
        else if (input == "INFO") {
            Serial.println("ESP32 Serielles Interface v1.0");
        } 
        else if (input == "REBOOT") {
            Serial.println("Neustart...");
            delay(1000);
            ESP.restart();
        } 
        else {
            Serial.println("Unbekannter Befehl!");
        }
    }
}
