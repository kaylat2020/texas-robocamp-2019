#include <iostream>
using namespace std;

int main()
{
  int int1, int2, sum;
  //Prompts user for 2 numbers
  cout << "Enter the first number:";
  cin >> int1;
  cout << "Enter the second number:";
  cin >> int2;

  //makes sum the sum
  sum = int1 + int2;

  cout << "The sum of " << int1 << " and " << int2 << " is " << sum << endl;
} 