#include <iostream>
#include <iomanip>
using namespace std;

int row, column, table, i, j, k;

int main()
{
  cout << left;
  cout << setw(7) << "[Name]" << setw(6) << "[Age]" << setw(9) << "[Salary]" << '\n'
       << setw(7) << "John" << setw(6) << "30" << setw(9) << "$300" << '\n'
       << setw(7) << "David" << setw(6) << "42" << setw(9) << "$200" << '\n'
       << setw(7) << "John" << setw(6) << "24" << setw(9) << "$100" << '\n';
}