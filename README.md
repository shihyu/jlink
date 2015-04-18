### The Jlinkv9  test for TQ210

### is working test Jlink?
- PS 有時候要重插 Jlink USB 重新偵測一次

```
cd JLink_Linux_V498b_x86_64
sudo cp 99-jlink.rules /etc/udev/rules.d/
sudo service udev restart
```
- ./JLinkExe
```
SEGGER J-Link Commander V4.98b ('?' for help)
Compiled Apr 10 2015 20:27:38
DLL version V4.98b, compiled Apr 10 2015 20:27:35
Firmware: J-Link V9 compiled Apr 10 2015 10:51:08
Hardware: V9.20
S/N: -1 
Feature(s): GDB, RDI, FlashBP, FlashDL, JFlash 
VTarget = 3.280V
Info: TotalIRLen = ?, IRPrint = 0x..000000000000000000000000
Info: TotalIRLen = ?, IRPrint = 0x..000000000000000000000000
No devices found on JTAG chain. Trying to find device on SWD.
No device found on SWD.
Trying to find device on FINE interface.
No device found on FINE interface.
Did not find any core.
Failed to identify target. Trying again with slow (4 kHz) speed.
No devices found on JTAG chain. Trying to find device on SWD.
No device found on SWD.
Trying to find device on FINE interface.
No device found on FINE interface.
Did not find any core.
No device found at all. Selecting JTAG as default target interface.

```

### 使用GDB

- 必須Jlink 先連接TQ210 , 如 IMAG0809.jpg

![](IMAG0809.jpg) 


- sudo ./JLinkGDBServer

```
SEGGER J-Link GDB Server V4.98b Command Line Version

JLinkARM.dll V4.98b (DLL compiled Apr 10 2015 20:27:35)

-----GDB Server start settings-----
GDBInit file:                  none
GDB Server Listening port:     2331
SWO raw output listening port: 2332
Terminal I/O port:             2333
Accept remote connection:      yes
Generate logfile:              off
Verify download:               off
Init regs on start:            off
Silent mode:                   off
Single run mode:               off
Target connection timeout:     0 ms
------J-Link related settings------
J-Link Host interface:         USB
J-Link script:                 none
J-Link settings file:          none
------Target related settings------
Target device:                 unspecified
Target interface:              JTAG
Target interface speed:        1000kHz
Target endian:                 little

Connecting to J-Link...
J-Link is connected.
Firmware: J-Link V9 compiled Apr 10 2015 10:51:08
Hardware: V9.20
Feature(s): GDB, RDI, FlashBP, FlashDL, JFlash
Checking target voltage...
Target voltage: 3.28 V
Listening on TCP/IP port 2331
Connecting to target...
J-Link found 1 JTAG device, Total IRLen = 4
JTAG ID: 0x1BA00477 (Cortex-A8)
Connected to target
Waiting for GDB connection...
```
- 顯示 Waiting for GDB connection...
