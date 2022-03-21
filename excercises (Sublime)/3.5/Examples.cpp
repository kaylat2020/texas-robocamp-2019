#include <iostream>
using namespace std;

//3.5.1 & 3.5.2
/*
int main()
{
   int driverSpeed, ticketPrice;
   string wearingSeatbelt;
   string message;

   //user types speed
   cout << "Hello policeman. Enter the speed of the vehicle: ";
   cin >> driverSpeed;

   //user will type y or n
   cout << "Was the driver wearing a seat belt? y or n: ";
   cin >> wearingSeatbelt;

   //First check if driver is excessively speeding
   if (driverSpeed > 60)
   {
      //set the initial ticket price to 250
      ticketPrice = 250;
      cout << "Ticket for speeding!\n" << endl;
      //if the speed is over 60 AND
      //the driver wasn't wearing a seat belt
      if (wearingSeatbelt == "n")
      {
         //add 55 to the old ticket price (250+55=305)
         ticketPrice += 55;
         cout << "Additional charges for lack of seatbelt!\n" << endl;
      }
   }

   if (driverSpeed <= 60)
   {
      if (wearingSeatbelt == "n")
      {
         ticketPrice += 55;
         cout << "You broke the law, buddy! :c";
      }
      else
      {
         cout << "Thanks for being a safe driver! c:" << endl;
      }
   }

   cout << "The ticket is $" << ticketPrice << ".\n" << endl;
}
*/

//3.5.3
int main()
{
   int language;
   cin >> language;

   switch ( language )
   {
         case 0:
            cout << "Hello!\n" << endl;
            break;
         case 1:
            cout << "Konnichiwa!\n" << endl;
            break;
         case 2:
            cout << "Anyeonghaseyo!\n" << endl;
            break;
         case 3:
            cout << "Nǐ hǎo!\n" << endl;
            break;
         case 4:
            cout << "Bonjour\n" << endl;
            break;
         default:
            cout << "..." << endl;
   }
}