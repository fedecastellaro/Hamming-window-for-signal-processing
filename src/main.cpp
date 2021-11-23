#include <Arduino.h>
#include <hamming.h>

#define WINDOW_SIZE 1000

Hamming hamming_window(WINDOW_SIZE);

// positive part of a heavyside function.
float heavyside_function[WINDOW_SIZE];


void setup() {
  Serial.begin(115200);

}

void loop() {
  int j = 0;

  // Forming the heavyside function.
  for (int i = 0; i < WINDOW_SIZE; i++)
    heavyside_function[i] = 1;

  hamming_window.applyWindow(heavyside_function);

  // Print the response of a hamming window.

  for (int j = 0; j < WINDOW_SIZE -1 ; j++)
  {
    Serial.printf("%.04f", heavyside_function[j]);
    Serial.print(',');
  }
    Serial.printf("%.04f", heavyside_function[j]);
  
  Serial.println("");
  Serial.println("");

  //If you want to just see the coefficients
  // hamming_windoW.showCoefficients();

  vTaskDelay(5000);
}