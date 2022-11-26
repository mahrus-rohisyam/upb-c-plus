// Dengancriteria sebagai berikut. 81-100 = A, 71-80 = B, 51-70 = C, 31-
// 50 = D, di bawah 30 = E.Program menggunakan fungsi if else.
#include <iostream>
using namespace std;

void printResult(string name, string result)
{
  cout << "The score result of " << name << " is " << result << endl;
}

int findScore(int score, string name)
{
  if (score >= 90 && score <= 100)
  {
    printResult(name, "A");
  }
  else if (score >= 80 && score < 90)
  {
    printResult(name, "B");
  }
  else if (score >= 70 && score < 80)
  {
    printResult(name, "C");
  }
  else if (score >= 60 && score < 70)
  {
    printResult(name, "D");
  }
  else if (score >= 0 && score < 60)
  {
    printResult(name, "E");
  }
  else
  {
    cout << "Invalid score of " << score << endl;
  }
  return 0;
}

int main()
{
  int score;
  string name;

  cout << "Your Name:"; cin >> name;
  cout << "The score:"; cin >> score;
  findScore(score, name);
}