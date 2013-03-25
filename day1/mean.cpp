/*
   "Introduction to C++ Programming" Day 1 Exercises: mean.cpp

   This program computes the mean of ten numbers, ignoring
   (but counting) any that are less than zero.

   Written by Nick Efford
   Last revised: 2009-04-06
*/

#include <iostream>

using namespace std;

int main()
{
  const int numValues = 10;

  double value;
  double total = 0;
  int ignored = 0;

  cout << "Enter " << numValues << " values below:" << endl;

  for (int i = 1; i <= numValues; ++i) {
    cin >> value;
    if (value < 0)
      ++ignored;
    else
      total += value;
  }

  double mean = total / (numValues - ignored);

  cout << "\nMean value = " << mean << endl;
  cout << "Number of ignored values = " << ignored << endl;
 
  return 0;
}
