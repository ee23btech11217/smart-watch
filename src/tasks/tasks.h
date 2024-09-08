#ifndef TASKS_H
#define TASKS_H

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void init_task(void *pvParameter);
void display_task(void *pvParameter);
void sensor_task(void *pvParameter);
void button_task(void *pvParameter);

#endif // TASKS_H