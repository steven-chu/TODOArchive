// Write a program that will read two integers from standard input (cin) and compute their greatest common divisor and print the result. 
// Once you have that, put the whole thing in a loop (read two integers, print their gcd, repeat)

#include <iostream>
using namespace std;

int main() {
  int a, b, gcd; // Defining the variables a, b, and gcd.
  char repeat = 'y'; // Using datatype 'char' to create a repeat function that is used by 'y'.
  while (repeat == 'y' || repeat == 'Y') { // Continue to run program below if 'y' or 'Y' is inputted.
    cout << "Enter two integers: " << endl;
    cin >> a >> b;
    for (int i = 1; i <= a && i <= b; i++) { // Starting at i = 1, if i is less than or equal to a and b, increment by 1, if it's false, then gcd is whatever i is at.
      if (a % i == 0 && b % i == 0) // If the remainder of 'a' divided by 'i' and 'b' divided by 'i' is 0, then the gcd is the current i value.
        gcd = i; // Setting gcd equal to i to call it later.
      }
    cout << "The greatest common divisor of the two integers is: " << gcd << "." << endl;
    cout << "Do you want to find the GCD of another pair of integers? (y/n) " << endl; // User inputs 'y' or 'n'. 
    cin >> repeat; // If user inputs 'y' or 'Y' then it will repeat, otherwise, stops program.
  }
  return 0;
}
