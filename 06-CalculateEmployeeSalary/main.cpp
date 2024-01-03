#include <iostream>
using namespace std;

// Program Calculate Employee Salary
int main()
{
  int salary, allowance, result;
  result = 0;
  
  cout << "---------- Calculate Employee Salary ----------\n";

  cout << "Select Salary Group\nGol 1 : 2.000.000\nGol 2 : 2.500.000\nGol 3 : 3.000.000\nChoose Option (1/2/3) : ";
  cin >> salary;

  cout << "Select Status\nMarried : 100.000\nNot Married yet : 50.000\nChoose Option (1/2) : ";
  cin >> allowance;

  switch (salary)
  {
    case 1:
      result += 2000000;
      break;
    case 2:
      result += 2500000;
      break;
    case 3:
      result += 3000000;
      break;
    default:
      cout << "Invalid option";
  }

  switch (allowance)
  {
    case 1:
      result += 100000;
      break;
    case 2:
      result += 50000;
      break;    
    default:
      cout << "Invalid option";
  }

  cout << "Total Salary : " << result;

  return 0;
}