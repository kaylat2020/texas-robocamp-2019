#include <iostream>
using namespace std;

//3.6.1
/*
int main()
{
	int count = 0;
	for ( int i = 15; i >= 6 ; i-- )
	{
		if ( count == 3 )
		{
			cout << i << endl;
			count = 0;
		}
		count++;
	}
}
*/

//3.6.2
/*
int main()
{
	for ( int num1 = 1 ; (num1 <= 9) ; num1++ )
	{ 
		if ( num1 % 2 != 0 )
		{
   			for ( int num2 = 2 ; (num2 <= 10) ; num2++ )
   			{
   				if ( num2 % 2 == 0 )
   				{
      				cout << num1 << " * " << num2 << " = " << (num1*num2) << "\n";
      			}
   			}
   		}
	}
}
*/



//3.6.3
/*
int main()
{
   int userInput;
   int attempts = 0;

   //get input from user
   cout << "Enter a number between 5 and 50: ";
   cin >> userInput;

   //as long as userInput is less than 1 or greater than 10
   while ( (userInput <= 5) || (userInput >= 50) )
   {
   	  attempts++;
      cout << "Read directions!  Enter a number between 5 and 50: \n";
      cout << "Attempts: \n" << attempts << endl;
      cin >> userInput;  //get new input from the user
      
   }
   //when we reach this line, we know the user entered a number between 1 and 10,
   //or else we would still be stuck in the while loop.
   cout << "You entered " << userInput << ".\n";
}
*/

//3.7.1
/*
int main()
{
	//declare the array and the other variables
   float gradeArray[7];
   float gradeSum, gradeAverage;
   int i;

   //put some grades into the array
   gradeArray[0] = 98.3;
   gradeArray[1] = 91.1;
   gradeArray[2] = 89.8;
   gradeArray[3] = 90.5;
   gradeArray[4] = 95.0;
   gradeArray[5] = 0.0;
   gradeArray[6] = 0.0;

   //initialize the gradeSum variable to be 0
   gradeSum = 0;

   //loop through each location in gradeArray (there are 5)
   for(i=0; i<7; i++)
   {
      //add the value of the thing stored at location
      //i in gradeArray to gradeSum
      gradeSum += gradeArray[i];
   }

   //to finish the average, divide gradeSum by 5
   gradeAverage = gradeSum/7;

   //print out the average
   cout << "Your science class average is " << gradeAverage << ".\n";
}
*/

//3.7.2
/*
int main()
{
	int args[10];

	for ( int i = 10 ; i > 0 ; i-- )
	{
		cout << "Enter " << i << " more number(s): ";
		cin >> args[ i-1 ];
	}

	for ( int i = 0 ; i < 10 ; i++ )
	{
		cout << "[" << args[i] << "]" << endl;
	}
}
*/

//3.7.3
/*
int main()
{
	
}
*/
