// Example of using C++ strings

#include <string>
#include <iostream>

using namespace std;

int main()
{
  string word;
  cout << "Enter a word: ";
  cin >> word;

  cout << "Word length = " << word.length() << endl;
  if (word.find("x") != string::npos)
    cout << "You word contains an 'x'" << endl;

  return 0;
}
