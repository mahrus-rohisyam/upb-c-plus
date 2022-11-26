#include <iostream>
using namespace std;

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

int main(){
  printName();
  return 0;
}