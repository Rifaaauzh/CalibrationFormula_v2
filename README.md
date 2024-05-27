## Calibration Formula

This repository contains the source code for Calibration Formula with the resistance of 100K.

## Introduction

Calibration is the process of adjusting the output or measurement of an instrument to align with a known standard.

## Formula

**🗒Formula 1 : Rdut Formula**

$\{Rdut} = {R2*(Vin - Vref)/(Vref - Vout)} \$

Where:
- **Rdut**: The calibrated resistance of the device under test.
- **R2**: A known reference resistor.
- **Vin**: Input voltage.
- **Vref**: Reference voltage.
- **Vout**: Output voltage.

Parameters:
- **R2**: 100K ohms
- **Vin**: 12.0 volts
- **Vref**: 3.0 volts

**🗒Formula 2 : Adjusting Measured Voltage**

This formula is to adjusting voltage measured by device to be close with the value that was calculated using Formula 1.

$\ y = 0.9531x + 0.1642 \$
 
Where:
- **y**: Calculated Value
- **x**: Measured Value
