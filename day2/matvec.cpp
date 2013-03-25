/*
   Example of how a 2D matrix can be represented as a
   'vector of vectors'.  Note that this isn't the optimal
   approach; it is generally better to use a dedicated
   matrix class for such things.
*/

#include <vector>
#include <iostream>

using namespace std;

typedef vector<double> row;
typedef vector<row> matrix2d;

int main()
{
  // Create a matrix of 4 rows by 5 columns

  matrix2d m(4, row(5));
  //matrix2d m(4, row(5, 1));

  // Display matrix

  for (int r = 0; r < 4; ++r) {
    for (int c = 0; c < 5; ++c) {
      cout << "  " << m[r][c];
    }
    cout << endl;
  }

  return 0;
}
