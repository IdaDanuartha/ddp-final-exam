#include <iostream>
using namespace std;

// Program Loop Alphabet from A to Z using For, While and Do While Loops
int main()
{
  char i, j, k;
  
  cout << "---------- Loop Alphabet from A to Z ----------\n";
  
  cout << "For : ";
  for (i = 'A'; i <= 'Z'; i++) {
    cout << i << " ";
  }
  cout << endl;

  cout << "While : ";
  j = 'A';
  while (j <= 'Z') {
    cout << j << ' ';
    j++;
  }
  cout << endl;

  cout << "Do While : ";
  k = 'A';
  do {
    cout << k << ' ';
    k++;  
  } while (k <= 'Z');
  cout << endl;

  return 0;
}