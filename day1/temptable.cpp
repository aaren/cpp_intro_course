/*
C++ program that creates a Fahrenheit to Celsius conversion table for a range
of user specified temperatures.

Inputs: two integers defining the limits of the range

Outputs: A conversion table printed to screen, with temperatures
         in 5 degree steps between the limits.


Accept two integers from the user, representing the endpoints of the range.

Verify that these temperatures define a valid range.

AOL, C++ Intro course, March 25 2012
*/

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double conv_F_to_C (double T_F) {
  // Convert fahrenheit to celsius
  double T_C = 5 * (T_F - 32) / 9;
  return T_C;
}

int main() {
  // Accept user input
  double lower;
  double upper;
  cout << "Enter the lower and upper limits of the temperature range" << endl;
  cin >> lower >> upper;

  // QC user input
  while (true) {
    if (upper < lower) {
      cout << "Enter the lower limit first!" << endl;
      cin >> lower >> upper;
    }
    else {
      break;
    }
  }

  // Create vector of input temperatures
  vector<double> input_T;
  double delta = 5;  // temperature increment
  for (lower; lower <= upper; lower += delta) {
    input_T.push_back(lower);
  }

  // Create vector of ouput temperatures
  vector<double> output_T;
  int len_input = input_T.size();
  for (int i = 0; i < len_input; i++){
    double T_C = conv_F_to_C(input_T[i]);
    output_T.push_back(T_C);
  }

  // Print a table
  // column widths
  int c1 = 14;
  int c2 = 12;
  cout << "Temperature conversion table" << endl;
  cout << setw(c1) << "Fahrenheit";
  cout << " | "; 
  cout << setw(c2) << "Celsius" << endl;
  // set precision
  int p = 3;
  for (int i = 0; i < len_input; i++){
    cout << setw(c1) << fixed << setprecision(p) << input_T[i];
    cout << " | ";
    cout << setw(c2) << fixed << setprecision(p) << output_T[i] << endl;
  }

  return 0; 
}
