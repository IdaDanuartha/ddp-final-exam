#include <iostream>
using namespace std;

// Program Find the Maximum and Minimum Number
int main()
{
  int size, max, min;

  cout << "Input length of numbers : ";
  cin >> size;

  int numbers[size];  
  
  cout << "---------- Find the Maximum and Minimum Number ----------\n";

  for (int i = 0; i < size; i++)
  {
    cout << "Input index-" << i+1 << " : ";
    cin >> numbers[i];
  }

  max = numbers[0];
  min = numbers[0];
  for (int i = 1; i < size; ++i) {
      if (numbers[i] > max) {
        max = numbers[i];
      }
      if (numbers[i] < min) {
        min = numbers[i];
      }
  }
  
  cout << "\nMax : " << max << endl;
  cout << "Min : " << min;

  return 0;
}