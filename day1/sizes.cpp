/*
   Simple program to print on the console the sizes (in bytes)
   of the primitive numeric types of C++.

   Author  : Nick Efford
   Created : 2005-03-26
*/


#include <iostream>

using namespace std;


int main()
{
  cout << "sizeof(char)           = " << sizeof(char) << endl;
  cout << "sizeof(short)          = " << sizeof(short) << endl;
  cout << "sizeof(int)            = " << sizeof(int) << endl;
  cout << "sizeof(long)           = " << sizeof(long) << endl;

  cout << "sizeof(unsigned char)  = " << sizeof(unsigned char) << endl;
  cout << "sizeof(unsigned short) = " << sizeof(unsigned short) << endl;
  cout << "sizeof(unsigned int)   = " << sizeof(unsigned int) << endl;
  cout << "sizeof(unsigned long)  = " << sizeof(unsigned long) << endl;

  cout << '\n';
  cout << "sizeof(float)          = " << sizeof(float) << endl;
  cout << "sizeof(double)         = " << sizeof(double) << endl;
  cout << "sizeof(long double)    = " << sizeof(long double) << endl;

  return 0;
}
