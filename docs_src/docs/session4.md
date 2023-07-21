# SESSION 4

**GOAL:** Scale-up in a realistic environment.

<iframe src="https://docs.google.com/presentation/d/e/2PACX-1vTdjWAh8Dm64rvoRK495iKx9mEy5vzzfqW9GGkNSl52pZBVC7xWf9y4OH5mMw_izKv9a8Uwsd8nj7PJ/embed?start=false&loop=false&delayms=3000" frameborder="0" width="1058" height="624" allowfullscreen="true" mozallowfullscreen="true" webkitallowfullscreen="true"></iframe>

<iframe src="https://docs.google.com/presentation/d/e/2PACX-1vS0gHE83u26mOIK1G9pPBi6r8Kbf-rV47VQ9u5f4BZ5AZ1z4sWMNZQBjDUTnNEvdyYJjmLtVZn5UJ9Q/embed?start=false&loop=false&delayms=3000" frameborder="0" width="1058" height="624" allowfullscreen="true" mozallowfullscreen="true" webkitallowfullscreen="true"></iframe>

[IoT-LAB](https://www.iot-lab.info/) provides a very large scale infrastructure suitable for testing small wireless sensor devices and heterogeneous communicating objects.

Even if the ESP32 is not currently among the [supported hardware](https://www.iot-lab.info/legacy/hardware/index.html), IoT-LAB [supports FreeRTOS](https://www.iot-lab.info/legacy/operating-systems/index.html).

* Once you have setup a user connect to a lab by ssh, as an example
  
```
ssh vitalett@grenoble.iot-lab.info
```

* Follow the instructions [here](https://iot-lab.github.io/docs/os/freertos/) to run FreeRTOS on IoT-LAB
* The reference code is available on [https://github.com/iot-lab/openlab](https://github.com/iot-lab/openlab) and in particular we are inetrested in the [tutorial](https://github.com/iot-lab/openlab/tree/master/appli/iotlab_examples/tutorial)
* Once the code has been compiled, it can run into an experiment as explained [here](https://www.iot-lab.info/legacy/tutorials/getting-started-tutorial/index.html)
* A quite unique feature, is the ability to perform consuption monitoring as explained [here](https://iot-lab.github.io/docs/tools/consumption-monitoring/). To plot the graphs, download the oml files and use the following [tools](https://github.com/iot-lab/oml-plot-tools/tree/master)