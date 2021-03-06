#include "calc.hpp"
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>

using namespace std;

double mean (const vector<double>& data)
{
  // Compute mean of the values stored in the vector
  // n.b. reference
  // why is it reference here?? is this necessary?
  // It is because for a large vector, creating a copy of the vector
  // is a bit inefficient. We have used const in the definition so that
  // it cannot be altered.

  // N.B. third arg in accumulate is init and has to be the
  // *same* type as the stuff in the vector (double here)
  double total = accumulate(data.begin(), data.end(), 0.0);
  double mean = total / data.size();
  return mean;
}

double median (vector<double> data)
{
  // compute the median of an input vector
  // why does this give errors when doing it outside doesn't??
  // Because we have used const in the definition --> can't modify.
  // Get rid of the const and change to assignment by value to create
  // a copy of the input - then our function doesn't have side effects.
  // sort the vector
  sort(data.begin(), data.end());
  // length of the vector
  int len = data.size();
  double med;
  if (len % 2 == 0) {
    // even length
    med = (data[len / 2 - 1] + data[len / 2]) / 2;
  }
  else if (len % 2 == 1) {
    // odd length
    med = data[len / 2];
  }
  else {
    // erm...
    cerr << "Weird vector!";
    return 1;
  }
  return med;
}

double std_dev (const vector<double>& data)
{
  // Compute the standard deviation
  // mean
  double mu = mean(data);
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
