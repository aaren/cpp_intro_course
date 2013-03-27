#include "dataset.hpp"
#include <iostream>
#include <fstream>

using namespace std;

int main (int argc, char* argv[]) {
  ifstream input(argv[1]);
  Dataset data(input);
  cout << "The mean is " << data.mean() << endl;
  cout << "The median is " << data.median() << endl;
  return 0;
}

