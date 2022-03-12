# FLSUN-QQ-Robin-Nano-v3-Marlin-2.0.X
## Marlin 2.0.X firmware for use on a MKS Robin Nano v3 board in an FLSUN QQ 3d printer

The compiled released firmware is for using TMC2209 drivers in UART Mode

This firmware is currently based on Marlin bugfix-2.0.x Mar 10, 2022 nightly

Built using Classic UI for the MKS TS35 V2 screen

Auto Leveling works using the conductive nozzel as a ZMIN stop.  You will need to provide a conductive surface that is grounded such as the leveling plate that plugs in to the USB port.  You will need to adjust the Probe Z offset to account for your print surface and desired first layer height

##### Known issuses:

- Feedrate for loading needs to be increased (takes a long time to load bowden tube)
- Filliment feedrate durring prints has not be calibrated and I think it might be slightly too high
- Encoder is a little squirelly
  
  
##### Not Tested:

- MKS Wifi Module


