# Hamming window for signal processing
Hamming window algorithm for the Arduino environment or any microcontroller. Specially usefull in signal processing.

## Window Function:
Windows are mathematical functions frequently used in analysis and signal processing to avoid discontinuities at the beginning and end of analyzed blocks.

In signal processing, a window is used when the analysis focuses on a signal of voluntarily limited length. Indeed, a real signal has to be finite time; furthermore, a calculation is only possible from a finite number of points. To observe a signal in finite time, it is multiplied by a window function.

## Hamming Function:

### What is Hamming window used for?
Computers can't do computations with an infinite number of data points, so all signals are "cut off" at either end. This causes the ripple on either side of the peak that you see. The hamming window reduces this ripple, giving you a more accurate idea of the original signal's frequency spectrum

### Equation
![equals1](https://latex.codecogs.com/png.image?\dpi{110}&space;\bg_white&space;H(n)&space;=&space;0.54&space;&plus;0.46&space;\cdot&space;cos[(\frac{2\pi}{N})\cdot&space;n])

## How to use:

Invoke a instance of the Hamming class. The only argument that is needed is the amount of samples in the windows where the signal in question is.

If your window has 1000 samples, the code we'll be:

```cpp
#define WINDOW_SIZE 1000

Hamming hamming_window(WINDOW_SIZE);
```

To test it, we'll be applying the Hamming window to the positive part of a heavyside function:

![heavyside](https://user-images.githubusercontent.com/41343686/143053367-646a841e-d28a-4709-ae46-d2e3c9c4f358.png)

In the code is represented like:

```cpp
float heavyside_function[WINDOW_SIZE];

for (int i = 0; i < WINDOW_SIZE; i++)
  heavyside_function[i] = 1;
```

Then we apply the Hamming window to the signal an graph the response:

```cpp
hamming_window.applyWindow(heavyside_function);
```





