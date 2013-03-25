/*
   Program to benchmark insertion at the beginning of a vector.

   10000 insertions are done by default; a different number can be
   specified as a command line argument.

   NDE, 2013-02-02
*/


#include <vector>
#include <iostream>
#include <sstream>

using namespace std;


int main(int argc, char** argv)
{
  // Parse command line

  int count = 10000;

  if (argc > 1) {
    istringstream arg(argv[1]);
    arg >> count;
  }

  // Perform insertions at front of container

  cout << "Performing " << count << " insertions..." << endl;

  vector<int> container;

  for (int i = 0; i < count; ++i) {
    container.insert(container.begin(), 1);
  }

  return 0;
}
