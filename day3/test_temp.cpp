/* A very basic test for the TemperatureTable class */
#include "temp.hpp"
#include <iostream>

using namespace std;

int main() {
  temperature::TemperatureTable table(45, 70);
  cout << table;
}
