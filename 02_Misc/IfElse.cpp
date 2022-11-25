#include <iostream>
using namespace std;

int main() {
  int nilai;
  cout << "Masukkan Nilai" << endl;
  cin >> nilai;

  if(nilai == 1){
    cout << "Nilai D";
  } else if(nilai == 2) {
    cout << "Nilai C";
  } else if(nilai == 3) {
    cout << "Nilai B";
  } else if(nilai == 4) {
    cout << "Nilai A";
  } else if (nilai == 5) {
    cout << "Nilai E";
  }
  return 0;
}