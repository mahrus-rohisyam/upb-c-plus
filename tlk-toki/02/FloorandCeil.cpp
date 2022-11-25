#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float n, f, c;
  cin >> n;
  if( float(n) - int(n) > 0){
    f = int(n + 1);
    cout << f << endl;
  }
  cout << f << " " << n << endl;
}