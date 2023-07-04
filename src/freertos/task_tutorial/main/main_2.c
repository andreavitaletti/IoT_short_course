#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

TaskHandle_t myTaskHandle = NULL;
TaskHandle_t myTaskHandle2 = NULL;

void Demo_Task(void *arg)
{
    int count = 0;
    while(1){
        count++;
        printf("Demo_Task printing..\n");
        vTaskDelay(1000/ portTICK_PERIOD_MS);
        if (count == 5)
        {
          vTaskSuspend(myTaskHandle2);
          printf("Demo_Task2 is suspended!\n");
        }
        if (count == 8)
        {
          vTaskResume(myTaskHandle2);
          printf("Demo_Task2 is resumed!\n");
        }
        if (count == 10)
        {
          vTaskDelete(myTaskHandle2);
          printf("Demo_Task2 is deleted!\n");
        }
    }
}

void Demo_Task2(void *arg)
{
    for(int i=0;i<10;i++){
        printf("Demo_Task2 printing..\n");
        vTaskDelay(1000/ portTICK_PERIOD_MS);
    }
}

void app_main(void)
{
   xTaskCreate(Demo_Task, "Demo_Task", 4096, NULL, 10, &myTaskHandle);
   xTaskCreatePinnedToCore(Demo_Task2, "Demo_Task2", 4096, NULL,10, &myTaskHandle2, 1);
 }
