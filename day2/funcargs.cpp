// Example of a function with a default argument

#include <iostream>

using namespace std;


void countDown(int start = 10)
{
  for (int n = start; n > 0; --n) {
    cout << n << '\n';
  }
  cout << "Bang!" << endl;
}


int main()
{
  countDown();
  countDown(20);

  return 0;
}
