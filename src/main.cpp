#include <Arduino.h>
#include "logger.h"

LoggingUtils::Logger logger(LoggingUtils::DEBUG);
void setup() {
    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
    logger.log("");
    logger.log("----------");
    logger.log("Booting...");
    logger.log("Finished!");
    logger.log("");

    logger.info("Configured ESP8266 LED Output");
}

void loop() {
    digitalWrite(LED_BUILTIN, LOW); // Turn the LED on by making the voltage LOW
    logger.debug("Turned LED on");
    delay(1000);
    digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
    logger.debug("Turned LED off");
    delay(2000);
}