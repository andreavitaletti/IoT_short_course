# DAY 3

First of all, why do we need an [Operating System on IoT devices](https://www.freertos.org/about-RTOS.html). [Here](https://www.freertos.org/implementation/a00002.html) there is a nice explanation of the main features provided by FreeRTOS, namely 

* Multitasking
* Scheduling
* Context Switching
* Real Time Applications
* Real Time Scheduling

Finally a nice [example](https://www.freertos.org/tutorial/index.html) of the design of a real-time application 

A [book](https://freertos.org/Documentation/161204_Mastering_the_FreeRTOS_Real_Time_Kernel-A_Hands-On_Tutorial_Guide.pdf) on FreeRTOS.

The reference code is available 

## Development environment

To develop our solution on our ESP32, we need to setup the environment as described [here](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/). A very convenient way is to use docker as explained [here](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-guides/tools/idf-docker-image.html). 

To further simplify the development process, a multi-platform Virtualbox image is available [here](https://drive.google.com/file/d/1qxabmuQreTZzNscvmijvNzvl9Oa0GSGS/view?usp=drive_link). **Next we will focus on this method.** Credentials to work with the virtual machine are root/root and devel/devel and we will connect in ssh as explained below. 

The reference folder for the code and the examples is [https://github.com/espressif/esp-idf.git](https://github.com/espressif/esp-idf.git) which is already available on the virtual machine on 

1. ``` ssh devel@localhost -p 2222 ``` ... the password is devel
2. ``` get_idf ``` ... we set up the development environment
3. ``` cd ~/esp ```
4. ``` cp -r ./esp-idf/examples/get-started/hello_world/ ./workshop/ ``` ... make a copy of a dir in the example in the workshop dir 
5. ``` cd ./workshop/hello_world/ ```
6. ``` idf.py build ``` ... i t takes some time
7. ``` idf.py flash ``` ... be sure the ESP32 is connected to \dev\ttyUSB0 and check it is visible in the virtual machine
8. ``` idf.py monitor ``` ... to exit from the monitor ctrl+T ctrl+X

## The examples of DAY2 on FreeRTOS

In this section we will implement the reference examples developed in day2 into FreeRTOS. The idea is to take inspiration from the examples available at [https://github.com/espressif/esp-idf/tree/master/examples](https://github.com/espressif/esp-idf/tree/master/examples) and modify them to get the same behavior of the ones developed in DAY2

* The simplest actuator, namely a [led](https://github.com/espressif/esp-idf/tree/master/examples/get-started/blink)
* The Simplest sensor, namely a [button](https://github.com/espressif/esp-idf/tree/master/examples/peripherals/gpio/generic_gpio)
* A bit more interesting sensor, namely a [potentiometer](https://github.com/espressif/esp-idf/tree/master/examples/peripherals/adc)
* A simple example with [SR04 Ultrasonic Sensor](https://github.com/espressif/esp-idf/tree/master/examples/peripherals/mcpwm/mcpwm_capture_hc_sr04)
* It's time to be connected by [MQTT](https://github.com/espressif/esp-idf/tree/master/examples/protocols/mqtt)

