// Write a small program that reads 3 integers from standard input and prints out the average of the 3 via standard output. 

#include <iostream> 
using namespace std; 

int main()
{
  double a, b, c;  // defining the integers using datatype double 

  cout << "Enter a value for the integer a, b, c." << endl; // simple print message

  cin >> a >> b >> c; // reading the integers via standard input 

  double average = (a + b + c) / 3.0; // simple calculation for average, average is defined as double in case we want to use decimals for a, b, c and the total is decimal.

  cout << "The average for integers a, b, c is: " << average << endl; 

  return 0; 
} 

