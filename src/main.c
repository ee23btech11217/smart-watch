#include <stdio.h>
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "tasks/tasks.h"

void app_main()
{
    // Create tasks
    xTaskCreate(&init_task, "init_task", 2048, NULL, 5, NULL);
    xTaskCreate(&display_task, "display_task", 2048, NULL, 3, NULL);
    xTaskCreate(&sensor_task, "sensor_task", 2048, NULL, 2, NULL);
    xTaskCreate(&button_task, "button_task", 2048, NULL, 4, NULL);
}