// Test program for bank account class (version 3)


#include "bank3.hpp"
#include <iostream>

using namespace bank;
using namespace std;


int main()
{
  Account account("ABC123");

  account.deposit(250);
  account.withdraw(100);

  cout << account << endl;

  return 0;
}
