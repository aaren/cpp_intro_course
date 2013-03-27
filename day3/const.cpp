// Test program for bank account class


#include "bank.hpp"
#include <iostream>

using namespace bank;
using namespace std;


int main()
{
  const Account account("ABC123", 250);

  cout << "Account ID = " << account.getIdentifier() << endl;
  cout << "Balance    = " << account.getBalance() << endl;

  return 0;
}
