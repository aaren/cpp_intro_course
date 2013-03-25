// Example of a do...while loop

#include <iostream>

using namespace std;


int main()
{
  int value;

  do {
    cout << "Enter a positive integer: ";
    cin >> value;
  }
  while (value <= 0);

  cout << "You entered " << value << endl;

  return 0;
}
