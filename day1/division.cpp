/*
   "Introduction to C++ Programming" Day 1 Exercises: division.cpp

   This program performs integer division.  You can crash it if you
   enter 0 for the divisor.  Depending on the calling environment,
   this may or may not result in a 'core dump'.
*/

#include <iostream>

using namespace std;

int main()
{
  int a, b;

  cout << "Enter dividend: ";
  cin >> a; 
  cout << "Enter divisor: ";
  cin >> b;

  cout << a << "/" << b << " = " << a / b << endl;

  return 0;
}
