#include <iostream>
using namespace std;

// Simple Calculator Program
int main()
{
  double num1, num2, result;  
  int opt;

  cout << "---------- Simple Calculator Program ----------\n";
  
  cout << "Input first number : ";
  cin >> num1;

  cout << "Input second number : ";
  cin >> num2;

  cout << "List Operator\n1. Tambah (+)\n2. Kurang (-)\n3. Bagi (/)\n4. Kali (*)\nChoose Option (1/2/3/4) : ";
  cin >> opt;

  switch(opt) {
    case 1:
      result = num1 + num2;
      break;
    case 2:
      result = num1 - num2;
      break;
    case 3:
      result = num1 / num2;
      break;
    case 4:
      result = num1 * num2;
      break;
    default:
      cout << "Invalid option";
  }

  cout << result;

  return 0;
}