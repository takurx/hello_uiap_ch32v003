# hello_uiap_ch32v003 - PlatformIO Blink Example (Arduino Framework)

This project demonstrates a simple LED blinking program for the CH32V003 microcontroller using PlatformIO and the Arduino framework.

## Project Overview

This is a basic "Hello World" equivalent for embedded systems, where an LED connected to a specific pin on the CH32V003 development board will blink on and off at a one-second interval.

## Features

*   **Microcontroller:** CH32V003F4P6
*   **Development Platform:** PlatformIO
*   **Framework:** Arduino
*   **Functionality:** LED blink (1 second ON, 1 second OFF)
*   **LED Pin:** Digital Pin 2 (likely corresponds to PC1 on the CH32V003)

## Getting Started

### Prerequisites

Before you begin, ensure you have the following installed:

*   **PlatformIO Core:** Follow the installation instructions on the [PlatformIO website](https://platformio.org/install).
*   **PlatformIO IDE (Optional but Recommended):** Install the PlatformIO extension for VS Code or your preferred IDE.
*   **CH32V Platform:** PlatformIO will automatically install the necessary CH32V platform and toolchains when you build the project for the first time.
*   **MiniCHLink Programmer:** This project uses `minichlink` for uploading firmware. Ensure your `minichlink` programmer is correctly set up and connected to your CH32V003 board.

### Building the Project

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/takurx/hello_uaip_ch32v003.git
    cd hello_uaip_ch32v003/pio_Blink_arduino
    ```

2.  **Build the project:**
    ```bash
    pio run
    ```
    This command compiles the source code and generates the firmware binary.

### Uploading the Firmware

1.  **Connect your CH32V003 board:** Ensure your CH32V003 development board is connected to your computer via the `minichlink` programmer.

2.  **Upload the firmware:**
    ```bash
    pio run --target upload
    ```
    This command flashes the compiled firmware onto your CH32V003 board.

## Code Structure

*   **`platformio.ini`:** PlatformIO project configuration file, defining the board, framework, and upload settings.
*   **`src/main.cpp`:** The main source file containing the Arduino sketch for LED blinking.

## References

This project was inspired by and adapted from the following resources:

*   [ch32fun/examples/blink/blink.c at custom/main · YuukiUmeta-UIAP/ch32fun](https://github.com/YuukiUmeta-UIAP/ch32fun/blob/custom/main/examples/blink/blink.c)
*   [platform-ch32v/examples/blinky-arduino-ch32v003/src/main.cpp at develop · Community-PIO-CH32V/platform-ch32v](https://github.com/Community-PIO-CH32V/platform-ch32v/blob/develop/examples/blinky-arduino-ch32v003/src/main.cpp)
*   [platform-ch32v/examples/ch32fun-blink at develop · Community-PIO-CH32V/platform-ch32v](https://github.com/Community-PIO-CH32V/platform-ch32v/tree/develop/examples/ch32fun-blink)
