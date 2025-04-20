## Dev Notes

```txt
// spoof hardware id on Pro Micro
// Path (MacOS)
// ~/Library/Arduino15/packages/arduino/hardware/avr/[version]/boards.txt
// change it to this
eonardo.build.mcu=atmega32u4
leonardo.build.f_cpu=16000000L
leonardo.build.vid=0x045E
leonardo.build.pid=0x0039
leonardo.build.usb_product="IntelliMouse Optical"
leonardo.build.usb_manufacturer="Microsoft"
leonardo.build.board=AVR_LEONARDO
leonardo.build.core=arduino
leonardo.build.variant=leonardo
leonardo.build.extra_flags={build.usb_flags}
```
