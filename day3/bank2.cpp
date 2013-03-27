// Implementation of the class defined in bank2.hpp


#include "bank2.hpp"


namespace bank
{
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
