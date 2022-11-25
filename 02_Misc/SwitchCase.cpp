#include <iostream>
using namespace std;

int main () {
  int nilai;
  cout << "Masukkan Nilai" << endl;
  cin >> nilai;

  switch (nilai) {
    case 1:
      cout << "Nilai D";
      break;
    case 2:
      cout << "Nilai C";
      break;
    case 3:
      cout << "Nilai B";
      break;
    case 4:
      cout << "Nilai A";
      break;
    case 5:
      cout << "Nilai E";
      break;
  }
  return 0;
}