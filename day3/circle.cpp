#include "circle.hpp"
#include <cmath>

Circle::Circle(const double& r)
{
  radius = r;
}

double Circle::area()
{
  return M_PI * pow(radius, 2);
}

double Circle::circumference()
{
  return 2 * M_PI * radius;
}

double Circle::getRadius()
{
  return radius;
}


