#include <iostream>
using namespace std;

double radius, result;
const double phi = 3.14;

int circleArea(double diameter){
  radius = diameter / 2;

  result = phi * (radius * radius);

  cout << "The area of the circle is " << result << endl;
  return 0;
}

int circleCircumference(double diameter){
  radius = diameter / 2;

  result = 2 * phi * radius;

  cout << "The circumference of the circle is " << result << endl;
  return 0;
}

int main(){
  circleArea(14);
  circleCircumference(14);
}