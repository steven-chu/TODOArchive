// Write a recursive function to compute x^n where n is an integer without using any loops, vectors, or arrays.
#include <iostream>
using namespace std;

// The reason this works without using any loops is because each call to `pow` is creating a new instance of the function with a smaller 
// value of `n`. Each new instance of the function waits for the result from the next smaller instance, until eventually the base case 
// is reached and the function calls begin to return, with each instance of the function returning a value that is used in the 
// calculation of the next larger instance. Hence the name recursion: a technique in which a function calls itself.

double pow(double x, int n) 
{
  // base case, when n is 0, the result is 1
  if (n == 0) {
    return 1;
    // when n is even
  } else if (n % 2 == 0) {
    double temp = pow(x, n/2) // recursive function to divide power in half
    return temp*temp; // square the result and return
  } else {
    // when n is odd
    double temp = pow(x, (n-1)/2); // recursively compute x^((n-1)/2)
    return x*temp*temp; // multiply by x and square the result, then return.
  }
}

int main()
{
  cout << pow(2, 10) << endl;
  return 0;
}
