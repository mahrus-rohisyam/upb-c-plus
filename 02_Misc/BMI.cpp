#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int berat, tinggiInt;
  double tinggi, bmi;

  cout << "Masukkan Berat (KG)" << endl;
  cin >> berat;
  cout << "Masukkan Tinggi (M)" << endl;
  cin >> tinggi;

  if (tinggi > 100) {
    tinggi = tinggi / 100;
    bmi = berat / float(tinggi * tinggi);    
  } else {
    cout << tinggi << endl;
    bmi = berat / (tinggi * tinggi);
  }

  cout << "Hasil Anda " << bmi << "\n" << endl;

  if (bmi < 18.5) {
    cout << "Underweight" << endl;
  } else if (bmi > 18.5 && bmi < 24.9) {
    cout << "Healthy" << endl;
  } else if (bmi > 25 && bmi < 29) {
    cout << "Overweight" << endl;
  } else {
    cout << "Obese" << endl;
  }
}