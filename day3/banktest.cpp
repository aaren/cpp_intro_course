// Test program for bank account class


#include "bank.hpp"
#include <iostream>

using namespace bank;
using namespace std;


int main()
{
  Account account("ABC123", 0);

  account.deposit(250);
  account.withdraw(100);

  cout << "Account ID = " << account.getIdentifier() << endl;
  cout << "Balance    = " << account.getBalance() << endl;

  return 0;
}
