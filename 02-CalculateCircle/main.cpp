#include <iostream>
using namespace std;

// Simple Calculator Program
int main()
{
  double r, wide, circumference;

  cout << "---------- Calculate Wide and Circumference Circle Program ----------\n";
  
  cout << "Input the r circle : ";
  cin >> r;

  wide = 3.14 * r * r;
  circumference = 2 * 3.14 * r;

  cout << "Luas Lingkaran (phi * r * r) : " << wide << endl;
  cout << "Keliling Lingkaran (2 * phi * r) : " << circumference;

  return 0;
}