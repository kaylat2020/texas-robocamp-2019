#include <iostream>
using namespace std;

int main()
{
  float conversionFactor, earthWeight, moonWeight;  //define variables as floats

  //Prompt the user to enter weight
  //Note that there is no "endl", so the prompt will appear on the same line.
  cout << "Enter your weight on the moon:";
  cin >> moonWeight; //Store what the user types as earthWeight
  conversionFactor = 0.1654;
  earthWeight = moonWeight/conversionFactor;
  cout << "Something weighing " << moonWeight << 
  " lbs on the moon would would weigh "<< earthWeight << 
  " lbs on Earth." << endl;  //print out conversion
} 