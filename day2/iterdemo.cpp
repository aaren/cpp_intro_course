/*
   Demonstration of basic use of iterators, showing how they can
   make a program independent to a large degree of the type of
   container used to store data.

   Compile and run this program.  Then edit the file 'iterator.hpp'
   and change 'vector' to 'list'.  The program should compile and
   run exactly as before, only now it is using a linked list to
   store the data rather than a vector.  Note that no changes
   to this file were necessary in order to accomplish this.
*/


#include "iterdemo.hpp"

using namespace std;


int main()
{
  Container c;

  // Load container with data read from keyboard

  int value;
  cout << "Enter positive integers, terminating with 0\n";
  while (cin >> value, value != 0) {
    c.push_back(value);
  }

  // Iterate through container, displaying each value

  cout << "You entered: ";
  for (Iterator i = c.begin(); i != c.end(); ++i) {
    cout << ' ' << *i;
  }
  cout << endl;

  return 0;
}
