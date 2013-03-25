// Example of searching a map

#include <map>
#include <string>
#include <iostream>

using namespace std;


int main()
{
  map<string,string> phonebook;

  while (true) {
    cout << "\nName? ";
    string name;
    getline(cin, name);
    if (name.length() == 0)
      break;

    if (phonebook.find(name) == phonebook.end()) {
      cout << name << " not found!\n";
      cout << "Enter a number for " << name << ": ";
      string number;
      getline(cin, number);
      phonebook[name] = number;
    }
    else {
      cout << name << "'s number is " << phonebook[name] << endl;
    }
  }

  return 0;
}
