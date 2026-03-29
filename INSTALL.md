# Installation Guide for Bell Sekolah Terprogram Via Web dengan ESP32

This guide provides step-by-step instructions for installing and setting up the Bell Sekolah Terprogram project using ESP32.

## Prerequisites

- An ESP32 development board
- A USB cable for connecting the ESP32 to your computer
- A computer with the Arduino IDE installed
- Basic knowledge of Arduino programming

## Steps to Install

1. **Clone the Repository**  
   Open your terminal or command prompt and run the following command:

   ```bash
   git clone https://github.com/spektrakomunikasi/Bell_Sekolah_Terprogram_Via_Web_dengan-_ESP32.git
   ```

2. **Open in Arduino IDE**  
   Launch the Arduino IDE and open the cloned project file by navigating to `File > Open` and selecting the project folder.

3. **Install Required Libraries**  
   Ensure you have all necessary libraries installed. In the Arduino IDE, go to `Sketch > Include Library > Manage Libraries...` and search for the following libraries:
   - WiFi
   - ESPAsyncWebServer

   Install the required versions.

4. **Configure WiFi Settings**  
   Open the `config.h` file in the project directory and edit the following lines to configure your WiFi settings:

   ```cpp
   const char* ssid = "YOUR_SSID";
   const char* password = "YOUR_PASSWORD";
   ```

5. **Select the Correct Board**  
   In the Arduino IDE, go to `Tools > Board` and select your ESP32 board model.

6. **Upload the Code**  
   Connect your ESP32 to your computer using the USB cable, then click the right arrow button in the Arduino IDE to upload the code to your board.

7. **Open Serial Monitor**  
   After uploading, open the Serial Monitor from `Tools > Serial Monitor` to view connection status and any debug messages.

8. **Access the Web Interface**  
   Once the ESP32 connects to your WiFi, you can access the web interface by entering the ESP32's IP address in your web browser.

Congratulations! You have successfully installed the Bell Sekolah Terprogram project. If you encounter any issues, please refer to the documentation or open an issue in the repository.