#include <stdio.h>
#include <iostream>
using namespace std;

int main () {
  int first, second, result, residue;
  cin >> first >> second;
  result = first / second;
  residue = first % second;
  cout << "masing-masing " << result << "\n" << "bersisa " << residue << endl;
}