#include <iostream>

namespace temperature
{
  class TemperatureTable
  {
    public:
      TemperatureTable(const double& t1, const double& t2):
        start(t1), end(t2) {}
      void makeTable(std::ostream& out) const;
    private:
      double start;
      double end;
  };
  std::ostream& operator << (std::ostream& out, const TemperatureTable& table);
}

