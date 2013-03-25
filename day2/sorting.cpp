#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int print_vector(vector<int> v){
  for (int i = 0; i < v.size(); i++){
    cout << "  " << v[i];
  }
  cout << endl;
}

int main() {
  // Create a vector of the integers 0-9
  vector<int> v;
  for (int i = 0; i <= 9; i++) {
    v.push_back(i);
  }

  // shuffle the vector
  random_shuffle(v.begin(), v.end());
  print_vector(v);

  // sort the vector ascending
  sort(v.begin(), v.end());
  print_vector(v);

  // sort the vector descending
  sort(v.begin(), v.end(), greater<int>());
  print_vector(v);
}

