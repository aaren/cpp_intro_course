/*
   "Introduction to C++ Programming" Day 1 Exercises: mean3.cpp

   This program computes the mean of an unspecified number of values.
   The user will be prompted to continue entering numbers until they
   enter one that is less than zero.  Values are to be stored in a
   vector, but some vector-related code needs to be added.  There is
   also a bug that needs fixing!

   Written by Nick Efford
   Last revised: 2013-03-20
*/

#include <iostream>
// TODO: include the vector header here

using namespace std;

int main()
{
  // Read values into vector

  cout << "Enter values below (negative value quits):" << endl;

  // TODO: define a vector of doubles called 'data' here
  double value;

  while (true) {
    cin >> value;
    if (value < 0) {
      break;
    }
    else {
      // TODO: add line that puts value into the vector
    }
  }

  // Compute mean of the values stored in the vector

  double total = 0;
  for (int i = 1; i <= data.size(); ++i) {
    total += data[i];
  }

  double mean = total / data.size();
  cout << "\nMean value = " << mean << endl;

  return 0;
}
