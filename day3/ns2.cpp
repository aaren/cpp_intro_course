// Namespaces example

#include <iostream>

using namespace std;   // so we can use 'cout' without prefix


int main()
{
  int cout = 42;       // this hides the real 'cout'...

  cout << "Hello, World!" << endl;   // ...leading to an error here

  return 0;
}
