// Example of C++ syntax for static casts

#include <iostream>

using namespace std;

int main()
{
  int x = 2, y = 7;
  //float average = static_cast<float>(x + y) / 2;
  float average = (x + y) / 2.0f;

  cout << average << endl;

  return 0;
}
