// https://esp32tutorials.com/esp32-esp-idf-freertos-tutorial-create-tasks/

#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

TaskHandle_t myTaskHandle = NULL;
TaskHandle_t myTaskHandle2 = NULL;

//constants used
const char *pcTextForTask2 = "Task 2\n";


void Demo_Task(void *arg)
{
    while(1){
        printf("Demo_Task printing..\n");
        vTaskDelay(1000/ portTICK_PERIOD_MS);
    }
}

void Demo_Task2(void *arg)
{

    char *pcTaskName;
    pcTaskName = (char *)arg;

    while(1){
        printf("Demo_Task2 printing..\n");
        printf("Parameter: %s", pcTaskName);
        vTaskDelay(1000/ portTICK_PERIOD_MS);
    }
}

void app_main(void)
{
   // /name of the function, name, stack size, parameter, priority, handle which is used to change the function of the task eg. suspend, delete, resume, get or set a config of task)
   xTaskCreate(Demo_Task, "Demo_Task", 4096, NULL, 10, &myTaskHandle);
   //  the last extra argument allows the user to select which ESP32 core (core 0 or core 1) will run the particular task.
   xTaskCreatePinnedToCore(Demo_Task2, "Demo_Task2", 4096, (void *)pcTextForTask2,10, &myTaskHandle2, 1);
 }
