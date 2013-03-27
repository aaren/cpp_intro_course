/*
   "Introduction to C++ Programming" Day 2 Exercises: mean4.cpp

   This program needs altering so that values come from a file
   called numbers.txt.
*/

#include <iostream>
#include <vector>
#include <fstream>
#include <numeric>
#include <algorithm>
#include <cmath>

#include "data.hpp"
#include "calc.hpp"

using namespace std;

int main(int argc, char* argv[])
{
  // read file object
  ifstream dataFile(argv[1]);
  if (! dataFile) {
    cerr << "Cannot open data file" << endl;
    return 1;
  }

  // create and fill vector
  vector<double> data;
  // fill vector
  readData(dataFile, data);
  // close file
  dataFile.close();

  // compute and print the mean
  cout << "Mean value = " << mean(data) << endl;

  // compute and print the median
  cout << "Median value = " << median(data) << endl;

  // compute and print the standard deviation
  cout << "Standard deviation = " << std_dev(data) << endl;

  return 0;
}
