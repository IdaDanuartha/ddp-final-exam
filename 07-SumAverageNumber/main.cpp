#include <iostream>
using namespace std;

// Program Calculate Sum and Average Number
int main()
{
  int size, sum;
  double avg;

  cout << "Input length of numbers : ";
  cin >> size;

  int numbers[size];  
  
  cout << "---------- Calculate Sum and Average Number ----------\n";

  for (int i = 0; i < size; i++)
  {
    cout << "Input index-" << i+1 << " : ";
    cin >> numbers[i];
  }

  sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += numbers[i];
  }

  avg = sum / size;
  
  cout << "\nSum : " << sum << endl;
  cout << "Average : " << avg;

  return 0;
}