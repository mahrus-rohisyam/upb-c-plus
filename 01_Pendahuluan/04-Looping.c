#include <stdio.h>

int main()
{
  // Using while

  int i = 0;
  while (i < 10)
  {
    if (i % 2 != 0)
    {
      printf("While %d \n", i);
    }
    i++;
  }

  // Do while

  do
  {
    printf("%d\n", i);
    i++;
  } while (i < 5);

  // Using For
  for (int number = 0; i <= 10; number++)
  {
    printf("For %d\n", number);
  }

  return 0;
}
