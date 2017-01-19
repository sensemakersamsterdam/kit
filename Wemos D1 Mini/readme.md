#Wemos D1 Mini
##Description
Compact development board for the ESP8266ex SoC (System on a Chip).

##Specifications
    Microcontroller     ESP-8266EX
    Power               3.3V
    Digital I/O Pins    11
    Analog input Pin    1 (Max input: 3.2V)
    Clock speed         80MHz/160MHz
    Flash               4M bytes
    Length              34.2mm
    Width               25.6mm
    Weight              10g

##Datasheet
* [http://espressif.com/sites/default/files/documentation/0a-esp8266ex_datasheet_en.pdf](http://espressif.com/sites/default/files/documentation/0a-esp8266ex_datasheet_en.pdf)

##Pins
    Pin   Function                       ESP-8266 Pin
    TX    TXD                            TXD
    RX    RXD                            RXD
    A0    Analog input, max 3.3V         A0
    D0    IO                             GPIO16
    D1    IO, SCL                        GPIO5
    D2    IO, SDA                        GPIO4
    D3    IO, 10k Pull-up                GPIO0
    D4    IO, 10k Pull-up, BUILTIN_LED   GPIO2
    D5    IO, SCK                        GPIO14
    D6    IO, MISO                       GPIO12
    D7    IO, MOSI                       GPIO13
    D8    IO, 10k Pull-down, SS          GPIO15
    G     Ground                         GND
    5V    5V                             N.C.
    3V3   3.3V                           3.3V
    RST   Reset                          RST
>All IO pins support interrupt / PWM / I2C / one-wire, except D0
>All IO pins are running on 3.3V.

##Example code
file: Wemos D1 Mini.ino
