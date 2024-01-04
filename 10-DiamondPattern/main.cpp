#include <iostream>
using namespace std;

// Program to make Diamond Pattern 
int main()
{
  for (int i = 1; i <= 10; ++i) {
    for (int j = 1; j <= 10 - i; ++j) {
      cout << " ";
    }
    for (int k = 1; k <= 2 * i - 1; ++k) {
      cout << "*";
    }
    cout << "\n";
  }

  for (int i = 10 - 1; i >= 1; --i) {
    for (int j = 1; j <= 10 - i; ++j) { 
      cout << " ";
    }
    for (int k = 1; k <= 2 * i - 1; ++k) {
      cout << "*";
    }
    cout << "\n";
  }

  return 0;
}