// Demonstration of STL count_if algorithm


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


// Function to test whether a value is even

bool isEven(int n)
{
  return n % 2 == 0;
}


int main()
{
  // Fill a vector with some randomly-chosen integers

  vector<int> v;
  srandom(time(NULL));
  for (int i = 0; i < 10; ++i)
    v.push_back(random() % 9 + 1);

  display(v);

  // Count occurrences of even numbers

  int n = count_if(v.begin(), v.end(), isEven);

  if (n == 0)
    cout << "no even numbers in vector" << endl;
  else if (n == 1)
    cout << "one even number in vector" << endl;
  else
    cout << n << " even numbers in vector" << endl;

  return 0;
}
