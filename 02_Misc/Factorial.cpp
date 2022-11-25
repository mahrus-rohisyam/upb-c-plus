#include <iostream>
using namespace std;

int main()
{
  long long int result = 1;
  int i, n;                    // Deklarasi variable
  cout << "Insert the limit of the Factorial!" << endl;   // cout => print ke terminal
  cin >> n;                                      // cin => Mengambil input dari terminal
  cout << n << "This is n";
  // 5*4=20, 20*3=60, 60*2=120, 120*1=120
  for(i = n; i > 0; i--){
    result *= i; 
    if(i > 1) {
      cout << i << "*";
    } else {
      cout << "1";
    }
  }

  cout << "=" << result << endl;
  return 0;
}