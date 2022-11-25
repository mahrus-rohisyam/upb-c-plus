#include <stdio.h>

int main()
{
  char greetings[] = "Hello, world!";
  // Call the string
  printf("%s", greetings);

  // Loop it
  for(int i = 0; i < 14; i++) {
    printf("%c", greetings[i]);
  }
  return 0;
}