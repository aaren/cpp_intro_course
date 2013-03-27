/*
   "Introduction to C++ Programming" Day 2 Exercises

   Demonstration of command-line arguments

   Written by Nick Efford
   Last revised: 2009-04-07
*/


#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
  cout << "argc = " << argc << endl;

  for (int i = 0; i < argc; ++i)
    cout << "argv[" << i << "] = " << argv[i] << endl;

  return 0;
}
