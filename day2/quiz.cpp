// Pointer quiz

#include <iostream>

using namespace std;


int main()
{
  int *p, *q;
  int x = 100, *r = &x;

  q = r;
  *r = -5;
  *q = 256;
  // Statement below causes a seg fault
  //*p = 42;

  cout << "x is " << x << endl;

  return 0;
}
