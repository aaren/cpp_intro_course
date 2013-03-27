// Implementation of the class defined in bank.hpp


#include "bank.hpp"

using namespace std;


namespace bank
{
  // Constructor

  Account::Account(const string& id, int bal)
  {
    identifier = id;
    balance = bal;
  }


  // Accessors

  string Account::getIdentifier()
  {
    return identifier;
  }

  int Account::getBalance()
  {
    return balance;
  }


  // Mutators

  bool Account::deposit(int amount)
  {
    if (amount > 0) {
      balance += amount;
      return true;
    }
    else
      return false;
  }

  bool Account::withdraw(int amount)
  {
    if (amount > 0 && balance >= amount) {
      balance -= amount;
      return true;
    }
    else
      return false;
  }
}
