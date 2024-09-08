#include "tasks.h"
#include "../pin_config.h"
#include <stdio.h>

void button_task(void *pvParameter)
{
    while(1) {
        // Check for button presses
        printf("Checking buttons...\n");
        // Example: check_button_state(BUTTON1_PIN, BUTTON2_PIN);
        vTaskDelay(100 / portTICK_PERIOD_MS); // Check every 100ms
    }
}