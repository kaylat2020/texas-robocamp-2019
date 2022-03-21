#include <iostream>
using namespace std;

int main()
{
  float conversionFactor, earthWeight, moonWeight;  //define variables as floats

  //Prompt the user to enter weight
  //Note that there is no "endl", so the prompt will appear on the same line.
  cout << "Enter your weight on earth:";
  cin >> earthWeight; //Store what the user types as earthWeight
  conversionFactor = 0.1654;
  moonWeight = earthWeight*conversionFactor;
  cout << "Something weighing " << earthWeight << " lbs on earth would would weigh "<< moonWeight << " lbs on the moon." << endl;  //print out conversion
} 