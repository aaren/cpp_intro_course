/*
   "Introduction to C++ Programming" Day 2 Exercises: mean4.cpp

   This program needs altering so that values come from a file
   called numbers.txt.
*/

#include <iostream>
#include <vector>
#include <fstream>

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

  double total = 0;
  for (int i = 0; i < data.size(); ++i) {
    total += data[i];
  }

  double mean = total / data.size();
  cout << "Mean value = " << mean << endl;

  return 0;
}
