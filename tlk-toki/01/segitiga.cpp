#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int a, t;
  double result;

  cin >> a >> t;
  result = double(a * t) /2;

  printf("%.2lf\n", result);
}