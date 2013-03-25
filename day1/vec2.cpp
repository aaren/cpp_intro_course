// Example of accessing vector elements

#include <vector>
#include <iostream>

using namespace std;


int main()
{
  vector<int> v;

  for (int n = 1; n <= 5; ++n) {
    v.push_back(n*n);
  }

  cout << v.size() << endl;
  cout << v[0] << endl;
  cout << v[4] << endl;
  cout << v[5] << endl;       // what happens here?

  cout << v.at(0) << endl;
  cout << v.at(4) << endl;
  cout << v.at(5) << endl;    // what happens here?

  return 0;
}
