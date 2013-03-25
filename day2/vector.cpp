#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Create a vector of the integers 0-9
  vector<int> vector_of_ints;
  for (int i = 0; i <= 9; i++) {
    vector_of_ints.push_back(i);
  }
  // output length of the vector
  cout << "The length of the vector is " << vector_of_ints.size() << endl;
  // output first vector entry
  cout << "The first entry is " << vector_of_ints[0] << endl;

}
