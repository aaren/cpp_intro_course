// Demonstration of STL count algorithm


#include <vector>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;


// Function to display contents of a vector of integers

void display(const vector<int>& v)
{
  vector<int>::const_iterator i;
  for (i = v.begin(); i != v.end(); ++i)
    cout << setw(4) << *i;
  cout << endl;
}


int main()
{
  // Fill a vector with some randomly-chosen integers

  vector<int> v;
  srandom(time(NULL));

  for (int i = 0; i < 10; ++i)
    v.push_back(random() % 10);

  display(v);

  // Get a value to count

  cout << "\nCount occurrences of which value? ";
  int value;
  cin >> value;

  // Count occurrences of the specified value

  int n = count(v.begin(), v.end(), value);

  if (n == 0)
    cout << value << " does not occur in vector" << endl;
  else if (n == 1)
    cout << value << " occurs once in vector" << endl;
  else
    cout << value << " occurs " << n << " times in vector" << endl;

  return 0;
}
