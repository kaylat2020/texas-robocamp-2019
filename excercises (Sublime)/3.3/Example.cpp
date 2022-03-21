#include <iostream>
using namespace std;

void printGreeting( string n1, string n2 )
{
   	cout << "Hello " << n1 << " and " << n2 << "!" << endl;
}

int tripleA( int num )
{
	return (num * 3) + 5;
}

void printGreeting2( string bMonth, int years )
{
	cout << "You will be " << (years + 1) 
		<< " next " << bMonth << "." << endl; 
}

int main()
{
	// 3.3
	/*
	string user1, user2;
	cout << "Enter a name: ";
	cin >> user1;
	cout << "Enter a second name: ";
	cin >> user2;

   	printGreeting( user1 , user2 );
   	*/

	//3.4
	/*
	int num;
   	cout << "Give me an integer: ";
   	cin >> num;
   	cout << tripleA(num) << endl;
   	*/

   	//3.5
	string bMonth;
	int years;
	cout << "Enter your birth month: ";
	cin >> bMonth;
	cout << "Enter your age (in years): ";
	cin >> years;

	printGreeting2( bMonth, years );
}