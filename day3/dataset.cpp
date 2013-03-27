#include "dataset.hpp"
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

Dataset::Dataset(istream& input)
{
  double value;
  while (input >> value) {
    data.push_back(value);
  }
}

double Dataset::mean() const
{
  double total = accumulate(data.begin(), data.end(), 0.0);
  double mean = total / data.size();
  return mean;
}

double Dataset::median() const
{
  // make a copy of data vector so this method can stay const
  vector<double> v(data);
  sort(v.begin(), v.end());
  int len = v.size();
  double med;
    if (len % 2 == 0) {
      med = (v[len / 2 - 1] + v[len / 2]) / 2;
    }
    else {
      med = v[len / 2];
    }
  return med;
}


