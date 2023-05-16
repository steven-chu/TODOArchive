#include <iostream>
#include <limits>
using namespace std;

int main()
{
  int num; // declaring a variable to read integers via stdin
  int min = numeric_limits<int>::max(); // unsure if this works as INT_MIN / INT_MAX
  int max = numeric_limits<int>::min(); // Reason Min and Max are swapped is below.
  int sum = 0; // To change the sum for average dynamically as values are added
  int count = 0; // To change the amount of numbers there are for average

  while(cin >> num) { // While values are being fed into stdin (echo [num] | ./programname
    if (num < min) 
      min = num; // If number inputted is less than current min, set to min
    if (num > max)
      max = num; // If number inputted is more than current max, set to max

    sum += num; // To calculate the sum of all values fed through stdin
    count++; // Count how many numbers were fed through stdin
  }
  // // As long as there are more than 0 values, calculate avg. static_cast<double> is used to convert `sum` from type `int` to `double` 
  // before dividing as calculating the average will not always lead to a perfect number. 
  if (count > 0) { 
    double average = static_cast<double>(sum)/count; 
    cout << "MIN: " << min << endl;
    cout << "MAX: " << max << endl;
    cout << "AVG: " << average << endl;
  }
  return 0; 
}

// The initialization of min with std::numeric_limits<int>::max() ensures that any valid input value read from standard
// input will be smaller than the initial value of min. This guarantees that the first input value encountered will be assigned to min correctly.

// Similarly, the initialization of max with std::numeric_limits<int>::min() ensures that any valid input value
// read from standard input will be larger than the initial value of max. This guarantees that the first input
// value encountered will be assigned to max correctly.

// These initializations ensure that subsequent comparison operations within the while loop will 
// correctly update min and max as more input values are read.
