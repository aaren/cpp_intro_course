// Initial, incorrect attempt at a swap function

#include <iostream>

using namespace std;


void swap(int a, int b)
{
  int tmp = a;
  a = b;
  b = tmp;
}


int main()
{
  int x = 5, y = 2;
  swap(x, y);
  cout << x << "," << y << endl;
  return 0;
}
