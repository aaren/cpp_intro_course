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
  // Read values into vector

  cout << "Enter values below (negative value quits):" << endl;

  vector<double> data;
  double value;

  while (true) {
    cin >> value;
    if (value < 0) {
      break;
    }
    else {
      data.push_back(value);
    }
  }

  // Compute mean of the values stored in the vector

  double total = 0;
  for (int i = 0; i < data.size(); ++i) {
    total += data[i];
  }

  double mean = total / data.size();
  cout << "Mean value = " << mean << endl;

  return 0;
}
