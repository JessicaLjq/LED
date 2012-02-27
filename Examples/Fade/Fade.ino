#include <LED.h>

int LEDArray[] = {11,8,9}; // Red, Green, Blue
LED LED1(LEDArray);

void setup() {
}

void loop() {
  byte start_color3[] = {255, 0, 0};
  byte end_color3[] = {0, 255, 255};
  
  // Blink
  LED1.Fade(LEDArray, start_color3 , end_color3, 5); 
  delay(100);
  LED1.Fade(LEDArray, end_color3 , start_color3, 5);
}