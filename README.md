# Marlin 2.0 Printer Firmware For Longer LK4 Pro.


![GitHub](https://img.shields.io/github/license/marlinfirmware/marlin.svg)
![GitHub contributors](https://img.shields.io/github/contributors/marlinfirmware/marlin.svg)
![GitHub Release Date](https://img.shields.io/github/release-date/marlinfirmware/marlin.svg)
[![Build Status](https://github.com/MarlinFirmware/Marlin/workflows/CI/badge.svg?branch=bugfix-2.0.x)](https://github.com/MarlinFirmware/Marlin/actions)

<img align="right" width=175 src="buildroot/share/pixmaps/logo/marlin-250.png" />

Additional documentation can be found at the [Marlin Home Page](https://marlinfw.org/).
Please test this firmware and let us know if it misbehaves in any way. Volunteers are standing by!

## Modifications

This is based on the work from DaGr70 https://github.com/DaGr70/Marlin_Longer_LK4_pro and Desuuuu https://github.com/Desuuuu/Marlin.

I wanted more features and a more consistent look on the touchscreen. I made these modifications but more features will be added over time.
- Added advanced settings to allow changing Steps/mm, Acceleration and more from the touchscreen.
- Reworked some screens layout and navigation.
- Enabled the M600 command by default.
- Enabled power loss recovery by default.
- Works with non-BLtouch printers

You can see some screenshots here https://github.com/Guizz27/DWIN_LK4Pro/tree/main/Screenshots.

Integrated all changes from https://github.com/Desuuuu/Marlin and https://github.com/MarlinFirmware/Marlin to stay up to date with Marlin and the Reloaded screens updates.

Releases will contain the touchscreen firmware that matches. If you want the source of the screen firmware you can find it here https://github.com/Guizz27/DWIN_LK4Pro.

## Marlin 2.0

Marlin 2.0 takes this popular RepRap firmware to the next level by adding support for much faster 32-bit and ARM-based boards while improving support for 8-bit AVR boards. Read about Marlin's decision to use a "Hardware Abstraction Layer" below.

## Building Marlin 2.0

To build Marlin 2.0 you'll need [Arduino IDE 1.8.8 or newer](https://www.arduino.cc/en/main/software) or [PlatformIO](http://docs.platformio.org/en/latest/ide.html#platformio-ide). Detailed build and install instructions are posted at:

  - [Installing Marlin (Arduino)](http://marlinfw.org/docs/basics/install_arduino.html)
  - [Installing Marlin (VSCode)](http://marlinfw.org/docs/basics/install_platformio_vscode.html).

### Supported Platforms
  
  Platform|MCU|Example Boards
  --------|---|-------
  [Arduino AVR](https://www.arduino.cc/)|ATmega|RAMPS, Melzi, RAMBo

  Although this is based on the official Marlin software. The configuration files are specific to Longer/Alfawise "Pro" printers.
  It may or may not build for other platforms.

## Marlin Support

The Issue Queue is reserved for Bug Reports and Feature Requests. To get help with configuration and troubleshooting, please use the following resources:

- [Marlin Documentation](http://marlinfw.org) - Official Marlin documentation
- [Marlin Discord](https://discord.gg/n5NJ59y) - Discuss issues with Marlin users and developers
- Facebook Group ["Marlin Firmware"](https://www.facebook.com/groups/1049718498464482/)
- RepRap.org [Marlin Forum](http://forums.reprap.org/list.php?415)
- [Tom's 3D Forums](https://forum.toms3d.org/)
- Facebook Group ["Marlin Firmware for 3D Printers"](https://www.facebook.com/groups/3Dtechtalk/)
- [Marlin Configuration](https://www.youtube.com/results?search_query=marlin+configuration) on YouTube

## License

Marlin is published under the [GPL license](/LICENSE) because we believe in open development. The GPL comes with both rights and obligations. Whether you use Marlin firmware as the driver for your open or closed-source product, you must keep Marlin open, and you must provide your compatible Marlin source code to end users upon request. The most straightforward way to comply with the Marlin license is to make a fork of Marlin on Github, perform your modifications, and direct users to your modified fork.

While we can't prevent the use of this code in products (3D printers, CNC, etc.) that are closed source or crippled by a patent, we would prefer that you choose another firmware or, better yet, make your own.

## Disclaimer
Please note that you use this software at your own risks. I am not responsible for any damage it may cause.
