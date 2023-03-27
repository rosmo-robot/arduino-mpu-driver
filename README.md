# Arduino MPU Driver
This is an Arduino library for interfacing with MPU sensors. It supports 

MPU CHIP MODEL

 #define CONFIG_MPU6000
 
 #define CONFIG_MPU6050
 
 #define CONFIG_MPU6500
 
 #define CONFIG_MPU6555
 
 #define CONFIG_MPU9150
 
 #define CONFIG_MPU9250
 
 #define CONFIG_MPU9255

Installation
To use this library, download the source code and add it to your Arduino libraries directory. You can do this by either cloning the repository into your libraries directory or by downloading a ZIP file of the repository and extracting it into your libraries directory.

After installing the library, you can include it in your Arduino sketches using the following code:

C++
Copy code
#include <MPU6050.h>
or

C++
Copy code
#include <MPU6500.h>
depending on which sensor you are using.
