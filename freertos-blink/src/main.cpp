#include <Arduino.h>
#include <FreeRTOS.h>
#include <task.h>

#define SECOND 1000

void ledBuiltinBlinkTask(void* pvParams) {
  pinMode(LED_BUILTIN, OUTPUT);

  while (true) {
    digitalWrite(LED_BUILTIN, HIGH);
    vTaskDelay(SECOND / portTICK_PERIOD_MS);
    digitalWrite(LED_BUILTIN, LOW);
    vTaskDelay(SECOND / portTICK_PERIOD_MS);
  }
}

void setup() {
  xTaskCreate(ledBuiltinBlinkTask, "Builtin Led Task", 128, nullptr, 1,
              nullptr);

  vTaskStartScheduler();
}

void loop() {
  vTaskDelete(nullptr);
}