/*
   "Introduction to C++ Programming" Day 2 Exercises: mean4.cpp

   This program needs altering so that values come from a file
   called numbers.txt.
*/

#include "data.hpp"
#include "calc.hpp"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
  // Check for filename on command line
  if (argc < 2) {
    cerr << "Usage: stats <filename>" << endl;
    return 1;
  }

  // read file object
  ifstream dataFile(argv[1]);
  if (! dataFile) {
    cerr << "Cannot open data file" << argv[1] << endl;
    return 2;
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
