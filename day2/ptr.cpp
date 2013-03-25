// Example of pointer addressing and deferencing

#include <iostream>

using namespace std;


int main()
{
  int x = 42;
  int* ptr = &x;

  cout << "Value of variable    = " << x << endl;
  cout << "Address of variable  = " << &x << endl;
  cout << "Value of pointer     = " << ptr << endl;
  cout << "Dereferenced pointer = " << *ptr << endl;

  cout << "Changing via variable...\n";
  x = -1;
  cout << "Dereferenced pointer = " << *ptr << endl;

  cout << "Changing via pointer...\n";
  *ptr = 7;
  cout << "Value of variable    = " << x << endl;

  return 0;
}
