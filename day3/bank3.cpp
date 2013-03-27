// Implementation of the class defined in bank3.hpp


#include "bank3.hpp"


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


  std::ostream& operator << (std::ostream& out, const Account& account)
  {
    out << "Account " << account.getIdentifier()
        << ", GBP "   << account.getBalance();

    return out;
  }
}
