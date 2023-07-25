# Deneyap 6 Dof IMU Arduino Library
[FOR TURKISH VERSION](docs/README_tr.md) ![trflag](https://github.com/deneyapkart/deneyapkart-arduino-core/blob/master/docs/tr.png)

***** Add photo ****

Arduino library for Deneyap 6 Dof IMU Sensor

## :mag_right:Specifications 
- `Product ID` **M02**, **mpv1.0**
- `MCU` LSM6DSM
- `Weight` 
- `Module Dimension`
- `I2C address` 0x6B, 0x6A

| Address |  | 
| :---      | :---     |
| 0x6B | default address |
| 0x6A | address when LSM_ADR pad is shorted |

## :closed_book:Documentation
[Deneyap 6 Dof IMU](https://docs.deneyapkart.org/en/content/contentDetail/deneyap-6-eksen-ataletsel-olcum-birimi-m02)

[Deneyap 6 Dof IMU Schematic](https://cdn.deneyapkart.org/media/upload/userFormUpload/ZodOFOwcCvlrXxKLKOxAyPc4BnMv7etf.pdf)

[Deneyap 6 Dof IMU Mechanical Drawing](https://cdn.deneyapkart.org/media/upload/userFormUpload/gCSVq11Qq5B9B7ZM52hnGlqtmenEfRwU.pdf)

[LSM6DSM-datasheet](https://www.st.com/resource/en/datasheet/lsm6dsm.pdf)

[How to install a Arduino Library](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries)

## :pushpin:Deneyap 6 Dof IMU LSM6DSM
This Arduino library allows you to use Deneyap 6 Dof IMU LSM6DSM with I2C peripheral. You can use this library in your projects with any Arduino compatible board with I2C peripheral.

## :globe_with_meridians:Repository Contents
- `/docs ` README_tr.md and product photos
- `/examples ` Examples with .ino extension sketches
- `/src ` Source files (.cpp .h)
- `keywords.txt ` Keywords from this library that will be highlighted in the Arduino IDE
- `library.properties ` General library properties for the Arduino package manager

## Version History
1.0.1 - library updated and added new a sketch

1.0.0 - initial release

## :rocket:Hardware Connections
- Deneyap 6 Dof IMU LSM6DSM and Board can be connected with I2C cable
- or 3V3, GND, SDA and SCL pins can be connected with jumper cables

|6 Dof IMU| Function | Board pins | 
|:--- |   :---  | :---|
|3.3V | Power   |3.3V |      
|GND  | Ground  | GND | 
|SDA  | I2C Data  | SDA pin |
|SCL  | I2C Clock | SCL pin |
|INT1| interrupt |any GPIO PİN|
|INT2| interrupt |any GPIO PİN|

## :bookmark_tabs:License Information
Please review the [LICENSE](https://github.com/deneyapkart/deneyap-6-eksen-ataletsel-olcum-birimi-arduino-library/blob/master/LICENSE) file for license information.
