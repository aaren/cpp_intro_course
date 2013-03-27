// Example of a namespace definition


#include <iostream>


namespace temperature
{
  double fahrenheit(double c)
  {
    return 9*c/5 + 32;
  }

  double celsius(double f)
  {
    return 5*(f-32) / 9;
  }
}

using namespace temperature;

int main()
{
  // Won't compile without temperature:: prefix or a 'using' statement

  std::cout << fahrenheit(100) << std::endl;

  return 0;
}
