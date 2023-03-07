// Write a program to compute the sum of all integers given on standard input
#include <iostream> 
using namespace std; 

int main() {
  int total = 0; // defining the starting point for the "sum so far" 
  int n; // another variable to define for later 
  while (cin >> n) { // while loop reading into standard input n 
     total += n ; // addition where it's new total = n + previous total 
    cout << "Sum so far: " << total << endl; 
    }
  return 0; 
}

