#include <iostream>
#include <math.h>
using namespace std;

double const phi = 3.14;
double result, radius;

void printName(string name, int nim, string studentOf, string address){
  cout << "Name     : " << name << endl;
  cout << "NIM      : " << nim << endl;
  cout << "Class    : " << studentOf << endl;
  cout << "address  : " << address << endl;
}

void printName(){
  string name, studentOf, address;
  int nim;
  cout << "Your Name:";
  cin >> name;
  cout << "Your NIM:";
  cin >> nim;
  cout << "Your Class:";
  cin >> studentOf;
  cout << "Your Address:";
  cin >> address;
  
  cout << "Name     : " << name << endl;
  cout << "NIM      : " << nim << endl;
  cout << "Class    : " << studentOf << endl;
  cout << "address  : " << address << endl;
}

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
  /**
   * Post Test are here!
  */

  // printName();
  // circleArea(10);
  // circleCircumference(14);
  // shpereVolume(14, "cm");
  // shpereArea(14, "cm");

  /**
   * Below this is my playground!
  */
  // printName("Mahrus Sayid", 312210142, "C3", "Cikarang Utara");
  return 0;
}