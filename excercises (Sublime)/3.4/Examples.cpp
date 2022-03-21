//3.4.1
/*
#include <iostream>
using namespace std;

class BankAccount
{
  public:
     int accountNumber;
     float accountBalance;
     string name;
     string address;

      BankAccount()
      {
          accountNumber = 0;
          accountBalance = 0.0;
          name = "";
          address = "";
      }
};


int main()
{
    float add;
    float remove;

     BankAccount alisonBankAccount; //make a bankAccount for Alison
     alisonBankAccount.accountNumber = 14538;  //assign the account a number
     alisonBankAccount.accountBalance = 1000.01;  //give Alison some money
     alisonBankAccount.name = "Alison Norman";  //assign name and address
     alisonBankAccount.address = "1600 Pennsylvania Avenue NW Washington, DC 20500";

     cout << alisonBankAccount.accountBalance << endl;

     cout << "Add money to Alison's bank account: " << endl;
     cin >> add;

     alisonBankAccount.accountBalance += add;

     cout << "Alison's total is now " << alisonBankAccount.accountBalance << endl;
}
*/

//3.4.2
/*
#include <iostream>
using namespace std;

class BankAccount 
{
  public:
     float getAccountBalance() 
     {
          return accountBalance;
     }

     void deposit( float amount ) 
     {
          accountBalance += amount;
     }
     void withdraw( float amount )
     {
          accountBalance -= amount;
     }

      BankAccount() 
      {
          accountNumber = 0;
          accountBalance = 0.0;
          name = "";
          address = "";
      }
  private:
     int accountNumber;
     float accountBalance;
     string name;
     string address;
};

int main()
{
  BankAccount alisonBankAccount;
   BankAccount bobBankAccount;
   BankAccount current;
   bobBankAccount.deposit(300.95);

   cout << "Amount in current accounts: \n" << endl;
  cout << "Alison: $" << alisonBankAccount.getAccountBalance() <<
          "\nBob: $" << bobBankAccount.getAccountBalance() << 
          "\nYours: $" << current.getAccountBalance() << "\n" << endl;

    alisonBankAccount.deposit( 500.00 );
    bobBankAccount.withdraw( 400.00 );
    current.deposit( 400.00 );

    cout << "Amount in current accounts: \n" << endl;
  cout << "Alison: $" << alisonBankAccount.getAccountBalance() <<
          "\nBob: $" << bobBankAccount.getAccountBalance() << 
          "\nYours: $" << current.getAccountBalance() << "\n" << endl;
}
*/

//3.4.3
/*
#include <iostream>
using namespace std;

class Superhero
{
  public:
    Superhero( string n, string a, string w, string s )
    {
      name = n;
      an = a;
      weak = w;
      sk = s;
    }

    string getName()
    {
      return name;
    }
    string getNemesis()
    {
      return an;
    }
    string getWeakness()
    {
      return weak;
    }
    string getSidekick()
    {
      return sk;
    }

    string toString()
    {
      cout << "Name: " << getName() <<
              "\nArch-nemesis: " << getNemesis() <<
              "\nWeakness: " << getWeakness() <<
              "\nSidekick: " << getSidekick() << "\n" << endl;
    }
  private:
    string name;
    string an;
    string weak;
    string sk;
};

int main()
{
  Superhero spidey = Superhero( "Peter Parker", "Mysterio", "Lack of tall buildings", "Ned" );
  spidey.toString();
}
*/