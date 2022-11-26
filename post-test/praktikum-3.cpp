#include <iostream>
using namespace std;

double radius, result;
const double phi = 3.14;

int shpereArea(double diameter, string unit){
  radius = diameter / 2;

  result = 4 * phi * radius * radius;
  cout << "The surface area of the sphere is " << result << endl;
  return 0;
}

int shpereVolume(double diameter, string unit){
  radius = diameter / 2;

  result = 4 * phi * radius * radius * radius /3;
  cout << "The volume of the sphere is " << result << unit << endl;
  return 0;
}


int main(){
  shpereArea(14, "CM");
  shpereVolume(14, "CM");
  return 0;
}