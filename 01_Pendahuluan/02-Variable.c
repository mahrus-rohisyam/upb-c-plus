#include <stdio.h>

int main()
{
  // Create variables
  int myNum = 5;           // Integer (whole number)
  float myFloatNum = 5.99; // Floating point number
  char myLetter = 'D';     // Character
  const float phi = 3.14;   //Can't be override

  // Print variables
  printf("%d\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%f\n", phi);
  printf("%c\n", myLetter);
}