#include "temp.hpp"
#include <vector>
#include <iostream>

using namespace std;

namespace temperature
{
  // make a formatted table
  // takes an ostream as input to modify
  void TemperatureTable::makeTable(std::ostream& out) const
  {
    out << start << " " << end << endl;
  }

  // overload the << operator to print the table
  std::ostream&
    operator << (std::ostream& out, const TemperatureTable& table)
    {
      table.makeTable(out);
      return out;
    }
}
