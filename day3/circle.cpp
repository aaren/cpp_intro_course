#include "circle.hpp"
#include <iostream>

using namespace std;

void circle (double radius){
  geometry::Circle myCircle(radius);
  cout << "\nThe radius of your circle is " << myCircle.getRadius() << endl;
  cout << "Area: " << myCircle.area() << endl;
  cout << "Circumference: " << myCircle.circumference() << endl << endl;
}

int main(int argc, char* argv[])
{
  if (argc < 2) {
    cout << "\nDefaulting to radius 1" << endl;
    cout << "Usage: circle <radius>" << endl;
    circle(1.0);
  }
  else {
    circle(atof(argv[1]));
  }
  // n.b. atof function to convert argument string to float
  return 0;
}

