# Hamming window for signal processing
Hamming window algorithm for the Arduino environment or any microcontroller. Specially usefull in signal processing.

## Summary

```cpp
// Include the hamming header
#include "hamming.h"

/*Invoke an instance of the Hamming class. The only requirement is to declare the size of the window in which the signal is*/
#define WINDOW_SIZE 1000

Hamming hamming_window(WINDOW_SIZE);

/*Just to test it I'll be using a heavyside function. Here you can use whatever function you want*/
float heavyside_function[WINDOW_SIZE];

/*Then simply apply the window to the signal. Beware that all changes will be applied to the same array that you put as argument.*/
hamming_window.applyWindow(heavyside_function);

```

## Window Function:
Windows are mathematical functions frequently used in analysis and signal processing to avoid discontinuities at the beginning and end of analyzed blocks.

In signal processing, a window is used when the analysis focuses on a signal of voluntarily limited length. Indeed, a real signal has to be finite time; furthermore, a calculation is only possible from a finite number of points. To observe a signal in finite time, it is multiplied by a window function.

## Hamming Function:

### What is Hamming window used for?
Computers can't do computations with an infinite number of data points, so all signals are "cut off" at either end. This causes the ripple on either side of the peak that you see. The hamming window reduces this ripple, giving you a more accurate idea of the original signal's frequency spectrum

### Equation
![equals1](https://latex.codecogs.com/png.image?\dpi{110}&space;\bg_white&space;H(n)&space;=&space;0.54&space;&plus;0.46&space;\cdot&space;cos[(\frac{2\pi}{N})\cdot&space;n])

## How to use:
Copy the following files in your proyect directory:

- hamming.h
- hamming.cpp

In your code invoke a instance of the Hamming class. The only argument that is needed is the amount of samples in the windows where the signal in question is.

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

Then we apply the Hamming window to the signal:

```cpp
hamming_window.applyWindow(heavyside_function);
```

**Beware that all changes will be applied to the same array that you put as argument.** Feel free to change this at will.

And then graph the response:

![Hamming signal](https://user-images.githubusercontent.com/41343686/143055453-394a9bf8-bb8f-4187-b8e5-73842fb995d7.png)

To finish, we can compare the response done by the microcontroller to what you can get with a python algorithm:

![descarga (1)](https://user-images.githubusercontent.com/41343686/143062527-1147f811-42ff-46bc-91c9-40008dfaf0b6.png)




