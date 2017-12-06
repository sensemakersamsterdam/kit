# Installation of the Wemos D1 Mini
## Download & Install required Serial drivers
Download one of the drivers for your platform from: [https://wiki.wemos.cc/downloads](https://wiki.wemos.cc/downloads)

### Windows
Install the driver and restart the computer.

### Mac
If you have problems with the above drivers on your Mac, you can also download and try the drivers from this location: [https://github.com/adrianmihalko/ch340g-ch34g-ch34x-mac-os-x-driver](https://github.com/adrianmihalko/ch340g-ch34g-ch34x-mac-os-x-driver). This driver will also work on OS X Yosemite (10.10) and El Capitan (10.11).

Restart your computer after the installation.

### Linux
For Linux, you don't need to install a driver, the board will automatically detect the board when you connect it to an USB port. The first time you connect the board, you need to give the user who is running the Arduino IDE Access to the serial port. For that you need to go to the terminal and enter: 'sudo usermod -aG dialout <username>'
Where <username> is the name of the user you are logged in as.

## Download & Install the Arduino IDE
Choose the download for your platform from: [https://www.arduino.cc/en/Main/Software](https://www.arduino.cc/en/Main/Software).
After downloading, install the application.

### Configure the Arduino IDE for the Wemos
1. Start the Arduino IDE and go to the preferences window.
1. At the bottom part of the window, you will find a textbox labelled 'Additional Boards Manager URLs'.
1. Add the following URL: http://arduino.esp8266.com/stable/package_esp8266com_index.json

#### Update the boards
1. Now go to: Menu -> Tools -> Board -> Boards Manager...
1. Type at Filter your search...: esp8266<enter>
1. Select the esp8266 box and choose the highest version in the Select version pull down menu.
1. Click on Install and the requirements for your board will be installed.

When you plug anything onto the Wemos board (and you are not experienced with electronics), you first need to disconnect the Wemos from your computer and/or an attached powersource. After placement of the board, you can reconnect the board to your computer and powersource.

## Example Code
Example code for the Arduino IDE and the Wemos board and shield can be found and downloaded from their Github repository: https://github.com/wemos/D1_mini_Examples
