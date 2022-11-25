#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int tanda = -1, t1 = -1, j, f = 1;
  double y = 0, x = 1, x1;

  cout << "sin x = ";
  cin >> x1;

  for (int i = 1; i < 20; i += 2)
  {
    tanda *= t1;
    for (j = i; j >= i; j--)
    {
      x *= x1;
      f *= j;
      y += tanda * x / f;
      cout << tanda << ", " << y << ", " << x << ", " << endl;
    }
  }
  cout << "sin " << x1 << " = " << y << endl;
  return 0;
}