#include <cmath>

using namespace std;

namespace geometry
{
  class Circle
  {
    public:
      Circle(const double& r):
        radius(r) {}
      double getRadius() { return radius; }
      double area() { return M_PI * pow(radius, 2); }
      double circumference() { return 2 * M_PI * radius; }

    private:
      double radius;
  };
}
