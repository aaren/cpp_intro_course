// Example of adding values to & removing values from a vector

#include <vector>
#include <string>
#include <iostream>

using namespace std;


int main()
{
  vector<string> words;

  words.push_back("Hello");
  words.push_back("World!");
  cout << words.size() << endl;

  words.pop_back();
  cout << words.size() << endl;

  return 0;
}
