# TDTKeyboard
TDTKeyboard emulator with Arduino Pro Micro

## Getting Started

Ordering devices at home I found an old TDT with HDMI output, which had a broken remote control.
Looking, I saw that it had 2 USB ports and since it was a smart TDT, I started to investigate before throwing it away.

My desire to reuse things and a little ingenuity were enough to realize that TDT could be controlled through a keyboard or USB mouse, so the remote control was not 100% necessary if I used TDT in a place like kitchen where remote control can get stained or lost.

## Device
In my case, TDT can be controlled with a USB keyboard, or being a little more technical, with a HID device; such as an Arduino Pro Micro.

Carrying out a study of the keys that I really need to operate TDT and testing with a keyboard which virtual keys correspond to these controls, the key table would be as follows:

| REMOTE CONTROL | USB KEYBOARD | HID ARDUINO |
| ----- | ---- | ---- |
| MUTE | F2 | KEY_F2 |
| VOLUME UP | LEFT ARROW | KEY_LEFT_ARROW |
| VOLUME DOWN | RIGHT ARROW | KEY_RIGHT_ARROW |
| CHANNEL UP | UP ARROW | KEY_UP_ARROW |
| CHANNEL DOWN | DOWN ARROW | KEY_DOWN_ARROW |

## Hardware

Regarding the construction of the hardware, I wanted to minimize the use of resistors and exchange them with diodes, since I have more and the essence of this project is also to use reused electronic material.

The complete schematic of the system would be as follows:

![enter image description here](https://github.com/JoxuMac/TDTKeyboard/blob/master/images/schematic.PNG) 

## Contributing

Please read [CONTRIBUTING](https://github.com/JoxuMac/TDTKeyboard/graphs/contributors) to get details about the people who have contributed and what their development has been in the project.

## Versioning

For the versions available, see the [Realase](https://github.com/JoxuMac/TDTKeyboard/tree/master/realase). 
If you want to see the development process, access the [Commits](https://github.com/JoxuMac/TDTKeyboard/commits/master). 
## Authors

* **Josue Gutierrez** - *Initial work* - [Web Site](https://github.com/JoxuMac)
