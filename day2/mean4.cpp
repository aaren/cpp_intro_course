/*
   "Introduction to C++ Programming" Day 2 Exercises: mean4.cpp

   This program needs altering so that values come from a file
   called numbers.txt.
*/

#include <iostream>
#include <vector>
#include <fstream>
#include <numeric>

using namespace std;

int main()
{
  // read file object
  ifstream dataFile("test.data");
  if (! dataFile) {
    cerr << "Cannot open data file" << endl;
    return 1;
  }

  // fill vector
  vector<double> data;
  double value;

  while (dataFile >> value) {
      data.push_back(value);
  }

  dataFile.close();

  // Compute mean of the values stored in the vector
  // N.B. third arg in accumulate is init and has to be the
  // *same* type as the stuff in the vector (double here)
  double total = accumulate(data.begin(), data.end(), 0.0);
  double mean = total / data.size();
  cout << "Mean value = " << mean << endl;

  return 0;
}
