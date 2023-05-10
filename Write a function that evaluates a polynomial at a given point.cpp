// Try to write a function that evaluates a polynomial at a given point. You can represent the polynomial by a vector of the coefficients. Prototype might look like this:

#include <iostream>
#include <vector>
using namespace std;

int polyeval(const vector<int>& A, int x) // Representing the vector by constant reference since the function only needs to read it and not modify so nothing bad can happen.
{
  int result = 0; // Result starts at 0, will be adjusted later
  int power = 1; // Power starts at 1, 0th power doesn't work since 0th power = 1
  for (int i = 0; i < A.size(); i++) // This is the standard for loop checker to see if there's anything left in the vector.
    {
      result += A[i] * power; // This is basically coefficient times x to the nth power. For example A[i] = 3 and power = x^2 so the result is 3x^2.
      power *= x; // This is x times whatever the current power is.
    }
  return result; 
}

int main() 
{
  vector<int> A = {1, 2, 3}; // This represents the polynomial 3x^2 + 2x + 1
  int x = 4; // Example point at which we want to evaluate the polynomial
  int result = polyeval(A, x); // Calling the function with the vector we want to evaluate and at which what point (in this case, Vector A at point 4.)
  cout << "Result: " << result << endl; // Print result.
  return 0;
  
}
