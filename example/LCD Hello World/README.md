# Test Example
Das Beispiel wurde mit SquareLine Studio generiert. Anschließend wurde das generierte Arduino-IDE-Programm für die Nutzung mit PlatformIO angepasst.

- [Test Example](#test-example)
  - [Test mit der Arduino IDE (untested)](#test-mit-der-arduino-ide-untested)
  - [Test with PlattformIO (not working/ untested)](#test-with-plattformio-not-working-untested)
- [Automatisch generiert von SquareLineStudio:](#automatisch-generiert-von-squarelinestudio)
  - [Arduino project for SquareLine Studio with TFT\_eSPI](#arduino-project-for-squareline-studio-with-tft_espi)
  - [Get started](#get-started)
- [LCD:](#lcd)
- [TOUCH:](#touch)


## Test mit der Arduino IDE (untested)

1. **Öffnen der Datei**: Im Ordner `ui` befindet sich eine Datei namens `ui.ino`. Öffne diese Datei mit der Arduino IDE.

2. **Installieren der ESP32-Treiber**: Stelle sicher, dass die Boardtreiber für ESP32 in der Arduino IDE installiert sind. Diese können über den Boardverwalter der Arduino IDE hinzugefügt werden.

3. **Bibliotheken einrichten**:  
   a. Kopiere die Bibliotheken aus dem `Libraries`-Ordner des Projekts in den `Libraries`-Ordner der Arduino IDE.  
   b. Alternativ kannst du den `Libraries`-Ordner der Arduino IDE so konfigurieren, dass er direkt auf den `Libraries`-Ordner des Projekts verweist.  

4. **Board-Einstellungen konfigurieren**: Wähle das ESP32-Board und stelle folgende Parameter in der Arduino IDE ein:  
   - **Board**: ESP32C3 Dev Module  
   - **USB CDC On Boot**: Disabled  
   - **CPU Frequency**: 160 MHz (WiFi)  
   - **Core Debug Level**: None  
   - **Erase Flash Before Sketch Upload**: Disabled  
   - **Flash Frequency**: 80 MHz  
   - **Flash Mode**: QIO  
   - **Flash Size**: 4MB (32Mb)  
   - **JTAG Adapter**: Integrated USB JTAG  
   - **Partition Scheme**: Default 4MB with spiffs (1.2MB APP/1.5MB SPIFFS)  
   - **Upload Speed**: 921600  

5. **Upload des Sketches**: Lade das Programm mit den oben genannten Einstellungen auf den ESP32 hoch (Flashing).

## Test with PlattformIO (not working/ untested)


---
# Automatisch generiert von SquareLineStudio:
---
## Arduino project for SquareLine Studio with TFT_eSPI

## Get started

1. Open the `.ino` file in Arduino
2. Go to File/Preferences and set Sketchbook location to the path of your UI project (where this README is located)
3. Go to `libraries/TFT_eSPI` and open `User_Setup.h` or `User_Setup_Select.h` with a text editor to configure pins for your display.
4. Select your board (install if needed)
5. Build the project

Note that this project doesn't contain touch pad driver. You can use an other Arudino library for your touchpad controller.

This is a comparison-table between main driver libraries according to what devices they support (wath in monospace-fontset):
(This list is about half a year old, created first for Raspberry Pi Pico board-template, supported devices might have changed meanwhile.)

LCD:
====

| Model    |lvgl_esp32_drivers|  TFT_eSPI   |    lv_drivers   |   Arduino-GFX       |
|------    |----------------- | ----------- | --------------- | ------------------- |
| (drm         |              |             |        *)       |                     |
| (fbdev       |              |             |        *)       |                     |
| (RGB-Display |              |             |                 |     *)              |
| FT81x        |  *           |             |                 |                     |
| GC9106       |              |             |                 |     *               |
| GC9107       |              |             |                 |     *               |
| GC9A01       |  *           |     *       |        *        |     *               |
| HX8347(C,D)  |              |             |                 |     *               |
| HX8352(C)    |              |             |                 |     *               |
| hx8357       |  *           |             |                 |     *(A)            |
| hx8357b/c/d  |  ?           |     *       |                 |     *(B)            |
| HX8369A      |              |             |                 |     *               |
| il3820       |  *           |             |                 |                     |
| ili9163c     |  *           |     *(-c?)  |                 |                     |
| ili9225      |              |     *       |                 |     *               |
| ILI9331      |              |             |                 |     *               |
| ili9341      |  *           |     *       |       *         |     *               |
| ILI9342      |              |             |                 |     *               |
| ili9481      |  *           |     *       |                 |     *(18bit)        |
| ili9486      |  *           |     *       |                 |     *(normal,18bit) |
| ili9488      |  *           |     *       |                 |     *(normal,18bit) |
| ILI9806      |              |             |                 |     *               |
| JBT6K71      |              |             |                 |     *               |
| jd79653a     |  *           |             |                 |                     |
| NT35310      |              |             |                 |     *               |
| NT35510      |              |             |                 |     *               |
| NT39125      |              |             |                 |     *               |
| NV3041A      |              |             |                 |     *               |
| OTM8009A     |              |             |                 |     *               |
| pcd8544      |  *           |             |                 |                     |
| R61529       |              |             |                 |     *               |
| R61581       |              |     *       |       *         |                     |
| ra8875       |  *           |             |                 |                     |
| RM67162      |              |             |                 |     *               |
| RM68120      |              |     *       |                 |                     |
| RM68140      |              |     *       |                 |                     |
| S6D02A1      |              |     *       |                 |                     |
| SEPS525      |              |             |                 |     *               |
| sh1107       |  *           |             |                 |                     |
| SHARP_MIP    |              |             |       *         |                     |
| SSD1283A     |              |             |                 |     *               |
| ssd1306      |  *           |             |                 |                     |
| SSD1331      |              |             |                 |     *               |
| SSD1351      |              |     *       |                 |     *               |
| SSD1963      |              |     *       |       *         |                     |
| ST7565       |              |             |       *         |                     |
| st7735s      |  *           |     *(-s?)  |                 |     *(-s?)          |
| st7789       |  *           |     *(_2?)  |                 |     *               |
| st7796s      |  *           |     *(-s?)  |                 |     *               |
| UC1610       |              |             |       *         |                     |
| uc8151d      |  *           |             |                 |                     |

TOUCH:
======

| Model        |lvgl_esp32_drivers|  TFT_eSPI   |    lv_drivers  |
| -----        |------------------| ----------- | -------------- |
| adcraw/AD_touch |      *        |             |        *       |
| ft6x6           |      *        |             |                |
| FT6x36?         |               |             |                |
| FT5406EE8       |               |             |        *       |
| FT81x           |      *        |             |                |
| gt911           |      *        |             |                |
| ra8875          |      *        |             |                |
| stmpe610        |      *        |             |                |
| xpt2046         |      *        |      *      |        *       |
| (evdev          |               |             |        *)      |
| (libinput       |               |             |        *)      |
| (xkb            |               |             |        *)      |

