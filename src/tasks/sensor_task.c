#include "tasks.h"
#include "../pin_config.h"
#include <stdio.h>

void sensor_task(void *pvParameter)
{
    while(1) {
        // Read sensors (e.g., heart rate, accelerometer)
        printf("Reading sensors...\n");
        // Example: int heart_rate = read_heart_rate(HEART_RATE_PIN);
        vTaskDelay(5000 / portTICK_PERIOD_MS); // Read every 5 seconds
    }
}