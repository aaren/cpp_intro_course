// Test program for bank account class (version 2)


#include "bank2.hpp"
#include <iostream>

using namespace bank;
using namespace std;


int main()
{
  Account account("ABC123");

  account.deposit(250);
  account.withdraw(100);

  cout << "Account ID = " << account.getIdentifier() << endl;
  cout << "Balance    = " << account.getBalance() << endl;

  return 0;
}
