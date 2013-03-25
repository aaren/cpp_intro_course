/*
   Simple program to print on the console the ranges of values
   that can be represented by the primitive numeric types of C++.

   Author  : Nick Efford
   Created : 2005-03-26
*/


#include <iostream>
#include <climits>

using namespace std;


int main()
{
  cout << "signed char    : " << SCHAR_MIN << " to " << SCHAR_MAX << endl;
  cout << "signed short   : " << SHRT_MIN  << " to " << SHRT_MAX  << endl;
  cout << "signed int     : " << INT_MIN   << " to " << INT_MAX   << endl;
  cout << "signed long    : " << LONG_MIN  << " to " << LONG_MAX  << endl;

  cout << "unsigned char  : 0 to " << UCHAR_MAX << endl;
  cout << "unsigned short : 0 to " << USHRT_MAX << endl;
  cout << "unsigned int   : 0 to " << UINT_MAX  << endl;
  cout << "unsigned long  : 0 to " << ULONG_MAX << endl;

  return 0;
}
