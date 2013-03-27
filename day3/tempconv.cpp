#include <iostream>
#include "temperature.hpp"

using namespace std;
using namespace temperature;

int main()
{
  double ctemp;
  cout << "Enter a temperature in degrees C: ";
  cin >> ctemp;

  double ftemp = fahrenheit(ctemp);
  cout << ctemp << " degrees C = " << ftemp << " degrees F" << endl;

  return 0;
}
