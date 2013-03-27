#include <vector>
#include <fstream>

using namespace std;

void readData (istream& input, vector<double>& data)
{
  // n.b. reference
  double value;
  while (input >> value) {
    data.push_back(value);
  }
}
