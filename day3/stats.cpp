/*
   "Introduction to C++ Programming" Day 3 Exercises

   stats.cpp: initial file for Exercise 2

   Written by Nick Efford
   Last revised: 2010-03-22
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;


void readData(istream& input, vector<double>& data)
{
  double value;

  while (input >> value) {
    data.push_back(value);
  }
}


double mean(const vector<double>& data)
{
  double sum = accumulate(data.begin(), data.end(), 0.0);

  return sum / data.size();
}


double median(vector<double> data)
{
  sort(data.begin(), data.end());

  int n = data.size();
  int middle = n/2;

  if (n % 2 == 0) {
    return 0.5*(data[middle] + data[middle-1]);
  }
  else {
    return data[middle];
  }
}


int main()
{
  // Attempt to open data file

  ifstream dataFile("test.data");

  if (! dataFile) {
    cerr << "Error: cannot open file" << endl;
    return 1;
  }

  // Read data from file into a vector

  vector<double> numbers;
  readData(dataFile, numbers);
  dataFile.close();

  // Compute and display statistics
 
  cout << "Mean   = " << mean(numbers) << endl;
  cout << "Median = " << median(numbers) << endl;

  return 0;
}
