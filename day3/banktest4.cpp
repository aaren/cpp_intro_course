// Test program for savings account class


#include "bank4.hpp"
#include <iostream>

using namespace bank;
using namespace std;


int main()
{
  SavingsAccount account("ABC123");
  account.deposit(250);
  account.calculateInterest();

  cout << "Account ID = " << account.getIdentifier() << endl;
  cout << "Balance    = " << account.getBalance() << endl;

  return 0;
}
