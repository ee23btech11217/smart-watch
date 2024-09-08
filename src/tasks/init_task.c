#include "tasks.h"
#include "../pin_config.h"
#include <stdio.h>

void init_task(void *pvParameter)
{
    // Initialize hardware and peripherals
    printf("Initializing smartwatch...\n");
    
    // Initialize display
    // Example: init_display(DISPLAY_SDA_PIN, DISPLAY_SCL_PIN);
    
    // Initialize sensors
    // Example: init_heart_rate_sensor(HEART_RATE_PIN);
    
    // Initialize buttons
    // Example: init_buttons(BUTTON1_PIN, BUTTON2_PIN);
    
    vTaskDelete(NULL); // Delete this task after initialization
}