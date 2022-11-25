#include <iostream>
using namespace std;

int selection(int array[], int limit)
{
  int i, j, min, temp;
  for (i = 0; i < limit; i++) {
    min = i;
    // cout << min << endl;

    for (j = i + 1; j < limit; j++) {
      if(array[j] < array[min]) {
        min = j;
        // cout << min << endl;

        temp = array[i];
        // cout << temp << "This is Temp" << endl;

        array[i] = array[min];
        // cout << array[i] << "array[i]" << endl;

        array[min] = temp;
        // cout << array[min] << "array[min]" << endl;
      }
    }
  }
  return 0;
}

int main()
{
  int array[] = {90, 70, 23, 78, 99, 20, 70, 60, 65, 91};
  int limit = sizeof(array) / sizeof(array[0]);
  // cout << limit << "This is Limit" << endl;
  int i;

  for (i = 0; i < limit; i++) {
    selection(array, limit);
    cout << array[i] << " ";
  }
  return 0;
}