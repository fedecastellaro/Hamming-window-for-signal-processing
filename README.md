# Hamming window for signal processing
Hamming window algorithm for the Arduino environment or any microcontroller. Specially usefull in signal processing.

## Window Function:
Windows are mathematical functions frequently used in analysis and signal processing to avoid discontinuities at the beginning and end of analyzed blocks.

In signal processing, a window is used when the analysis focuses on a signal of voluntarily limited length. Indeed, a real signal has to be finite time; furthermore, a calculation is only possible from a finite number of points. To observe a signal in finite time, it is multiplied by a window function.

## Hamming Function:

### Equation
![equals1](https://latex.codecogs.com/png.image?\dpi{110}&space;\bg_white&space;\inline&space;H(n)&space;=&space;0.54&space;&plus;0.46&space;\cdot&space;cos[(\frac{2\pi}{N})\cdot&space;n])
