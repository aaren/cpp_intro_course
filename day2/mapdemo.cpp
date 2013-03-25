// Example of creating and using a map

#include <map>
#include <iostream>

using namespace std;


int main()
{
  map<string,string> phonebook;
  phonebook["Nick"] = "01234 567890";

  // What will the next two lines print?

  cout << phonebook["Nick"] << "." << endl;
  cout << phonebook["Joe"] << "." << endl;

  return 0;
}
