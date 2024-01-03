#include <iostream>
using namespace std;

// Conversion Time from minute to hour and second
int main()
{
  double time, hour, second;
  
  cout << "---------- Conversion Time from minute to hour and second ----------\n";
  
  cout << "Input time (minute) : ";
  cin >> time;

  hour = time / 60;
  second = time * 60;

  cout << "Result of conversion from minute to hour and second : \n";
  cout << "Hour : " << hour << endl;
  cout << "Second : " << second << endl;

  return 0;
}