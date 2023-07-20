# Tensorflow Lite Micro on ESP32 

Reference examples are available [here](https://github.com/espressif/tflite-micro-esp-examples). You have to download from github [esp-nn](https://github.com/espressif/esp-nn) and [esp32-camera](https://github.com/espressif/esp32-camera) and place them into the relative folders under components.

Then go to examples/hello_worlds and as usual idf.py build, idf.py flash and finally idf.py monitor.

A nice explanation on how the model is generated can be found on the book [TinyML by Pete Warden, Daniel Situnayake](https://www.oreilly.com/library/view/tinyml/9781492052036/ch04.html). The corresponding jupyter notebook is available [here](https://colab.research.google.com/github/goodboychan/goodboychan.github.io/blob/main/_notebooks/2020-09-24-01-Training-Hello-world-Model-for-Microcontroller.ipynb)

Some other useful resources are listed below:

* [First steps with ESP32 and TensorFlow Lite for Microcontrollers](https://medium.com/@dmytro.korablyov/first-steps-with-esp32-and-tensorflow-lite-for-microcontrollers-c2d8e238accf)
* [Get started with microcontrollers](https://www.tensorflow.org/lite/microcontrollers/get_started_low_level)