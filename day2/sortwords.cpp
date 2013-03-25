// Example of using lists and iterators
// (NDE, 2013-02-02)

#include <list>
#include <string>
#include <iostream>

using namespace std;

int main()
{
  list<string> words;

  cout << "Enter words below (Ctrl-D to finish):" << endl;

  // Add words to list

  string word;
  while (cin >> word) {
    words.push_back(word);
  }

  // Sort and display words

  words.sort();

  list<string>::const_iterator i;
  for (i = words.begin(); i != words.end(); ++i) {
    cout << *i << endl;
  }

  return 0;
}
