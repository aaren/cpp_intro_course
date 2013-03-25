// Example of using dynamically-allocated storage

#include <iostream>

using namespace std;


int main()
{
  // Create array

  int* data = new int[10];

  // Display array elements

  for (int i = 0; i < 10; ++i)
    cout << "data[" << i << "] = " << data[i] << endl;

  // Release allocated storage

  delete [] data;

  return 0;
}
