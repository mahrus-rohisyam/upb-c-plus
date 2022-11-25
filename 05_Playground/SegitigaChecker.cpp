#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int myArray[] = {90, 70, 23, 78, 99, 20, 70, 60, 65, 91};
  int n = sizeof(myArray) / sizeof(myArray[0]);
  sort(myArray, myArray + n);
  cout << "\n List of Array after sorting is: ";
  for (int i = 0; i < n; ++i)
  {
    cout << myArray[i] << " ";
  }
  return 0;
}