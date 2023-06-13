# DAY 2

## The reference hardware: ESP32-WROOM-32

![](assets/images/2023-06-12-12-18-54.png)

## Let's start by simulating it

[Wokwi](https://docs.wokwi.com/) is an online Electronics simulator. You can use it to simulate Arduino, ESP32, STM32, and many other popular boards, parts and sensors.

* The simplest actuator, namely a [led](https://wokwi.com/projects/367336864678247425)
* The Simplest sensor, namely a [button](https://wokwi.com/projects/367336996835545089)
* A bit more interesting sensor, namely a [potentiometer](https://wokwi.com/projects/367338868313181185)
* A simple example with [SR04 Ultrasonic Sensor](https://wokwi.com/projects/367320442567677953)
* It's time to be connected by [MQTT](https://wokwi.com/projects/367405831605855233)

```
mosquitto_pub -h test.mosquitto.org -t "topicName/led" -m "on"
mosquitto_pub -h test.mosquitto.org -t "topicName/led" -m "off"
```

## It is time to Work with a real device

* Download the firmware from Wokwi. Press F1 on the code tab.
* Easy with [Arduino IDE](https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE) 