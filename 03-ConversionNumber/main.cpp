#include <iostream>
using namespace std;

// Conversion Number from cm to km, hm, dam, m, dm and mm
int main()
{
  double num, km, hm, dam, m, dm, mm;
  
  cout << "---------- Conversion Number from cm to km, hm, dam, m, dm and mm ----------\n";
  
  cout << "Input number (cm) : ";
  cin >> num;

  km = num / 100000;
  hm = num / 10000;
  dam = num / 1000;
  m = num / 100;
  dm = num / 10;
  mm = num * 10;

  cout << "Result of conversion from cm to km, hm, dam, m, dm and mm : \n";
  cout << "Km : " << km << endl;
  cout << "Hm : " << hm << endl;
  cout << "Dam : " << dam << endl;
  cout << "M : " << m << endl;
  cout << "Dm : " << dm << endl;
  cout << "Mm : " << mm << endl;

  return 0;
}