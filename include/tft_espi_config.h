#ifndef TFT_ESPI_CONFIG_H
#define TFT_ESPI_CONFIG_H

#define USER_SETUP_LOADED 1

// Define your TFT display driver chip
#define ILI9341_DRIVER

// Define TFT display width and height
#define TFT_WIDTH  240
#define TFT_HEIGHT 320

// Define ESP32 pins used for TFT display
#define TFT_MOSI 23
#define TFT_SCLK 18
#define TFT_CS   5
#define TFT_DC   2
#define TFT_RST  4

// Load the required fonts
#define LOAD_GLCD   1
#define LOAD_FONT2  1
#define LOAD_FONT4  1
#define LOAD_FONT6  1
#define LOAD_FONT7  1
#define LOAD_FONT8  1
#define LOAD_GFXFF  1

#define SMOOTH_FONT 1

// Set to 0 if you do not want to use DMA
#define DMA_CHANNEL 1

// Define SPI clock frequency
#define SPI_FREQUENCY  27000000

#endif // TFT_ESPI_CONFIG_H