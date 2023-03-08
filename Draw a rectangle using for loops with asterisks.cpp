// Read two integers n, m and draw (using some for loops) a rectangle of '*'. A
// rectangle of '*' characters that is n times m. E.g., if n = 3, m = 4, then
// the output would be like this.
//****
//****
//****
#include <iostream>
using namespace std;

int main() {
  int n, m;
  cout << "Enter the value of two integers: ";
  cin >> n >> m;
  for (int i = 0; i < n; i++) { // Variable used for the for loop matters, i represents x-coord
    for (int j = 0; j < m; j++) { // j represents y-coordinate
      cout << "*";
    }
  cout << endl; // Used to create (print) space for a new row of asterisks 
  }
  return 0;
}

