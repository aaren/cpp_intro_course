#include "dataset.hpp"
#include <algorithm>
#include <numeric>
#include <vector>
#include <cmath>

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

double Dataset::std_dev() const
{
  // Compute the standard deviation
  // mean
  double mu = mean();
  int N = data.size();
  // square mean subtracted values
  vector<double> norm_data(N);
  for (int i = 0; i < N; i++){
    norm_data[i] = pow(data[i] - mu, 2);
  }
  // norm sum
  double norm_sum = accumulate(norm_data.begin(), norm_data.end(), 0.0) / N;
  // std dev
  double sigma = sqrt(norm_sum);
  return sigma;
}
