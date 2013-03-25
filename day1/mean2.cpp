/*
   "Introduction to C++ Programming" Day 1 Exercises: mean2.cpp

   This program computes the mean of an unspecified number
   of values.  The user will be prompted to continue entering
   numbers until they enter one that is less than zero.

   Written by Nick Efford
   Last revised: 2009-04-06
*/

#include <iostream>

using namespace std;

int main()
{
  double value;
  double total = 0;
  int numValues = 0;

  cout << "Enter values below (negative value quits):" << endl;

  while (true) {
    cin >> value;
    if (value < 0) {
      break;
    }
    else {
      total += value;
      numValues += 1;
    }
  }

  double mean = total / numValues;

  cout << "\nMean value = " << mean << endl;

  return 0;
}
