#include "temperature.hpp"

namespace temperature
{
  double celsius(double f)
  {
    return 5*(f-32) / 9;
  }
}
