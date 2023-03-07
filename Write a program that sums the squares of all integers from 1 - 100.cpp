// Write a program that sums the squares of all integers from 1 - 100. E.g, Compute 1+4+9...10000
#include <iostream> 
using namespace std; 

int main() {
  int n = 100; // Defining how many integers we will be using
  int sum = 0; // Sum starts at 0 and will continue to add
  for (int i = 1; i <= n; i++) // Integer i starts at 1 and will keep incrementing until it's equal to 100. Integer n could have been set to 100 here 
  {
    sum += i * i; // Math to calculate sum of the integers. (i*i)+sum
  }
  cout << "The sum of the squares all the integers up to " << n << " is " << sum << endl; 

  return 0; 
  
}
