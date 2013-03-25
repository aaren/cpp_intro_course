// Example of using arrays

#include <iostream>

using namespace std;


int main()
{
  // Create array

  int data[10];

  // Display array elements
  // (What happens if loop limit is greater than 10?)

  for (int i = 0; i < 10; ++i)
    cout << "data[" << i << "] = " << data[i] << endl;

  return 0;
}
