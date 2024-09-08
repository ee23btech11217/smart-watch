#include "tasks.h"
#include "../pin_config.h"
#include <stdio.h>

void display_task(void *pvParameter)
{
    while(1) {
        // Update display (e.g., time, notifications)
        printf("Updating display...\n");
        // Example: update_display(DISPLAY_SDA_PIN, DISPLAY_SCL_PIN);
        vTaskDelay(1000 / portTICK_PERIOD_MS); // Update every second
    }
}