// Implementation of the classes defined in bank4.hpp


#include "bank4.hpp"


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

  void SavingsAccount::calculateInterest()
  {
    balance += static_cast<int>(rate*balance);
  }
}
