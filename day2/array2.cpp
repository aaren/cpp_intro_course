// Example of using arrays

#include <iostream>

using namespace std;


int main()
{
  // Create array

  int data[10];

  // Initialise array elements
  // (What happens with a loop limit larger than 10?)

  for (int i = 0; i < 10; ++i)
    data[i] = 0;

  // Display array elements

  for (int i = 0; i < 10; ++i)
    cout << "data[" << i << "] = " << data[i] << endl;

  return 0;
}
