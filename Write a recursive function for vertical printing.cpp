// Create a recursive function for vertical printing. For example, 4534 would be printed as
// 4
// 5
// 3
// 4
#include <iostream>
using namespace std;

void verticalPrint(int n)
{
  // base case: if integer 'n'< 10, then it is a single digit number. In this case the function simply prints the number and returns.
  // recursive case: if 'n' has two or more digits, then the function recursively calls itself on the remaining digits via 
  // 'n/10' to print them vertically. 
  if (n >= 10) 
    verticalPrint(n/10);
  cout << n%10 << endl; // I will put down a chart on what's happening here below. And more in-depth description. The n%10 is what's making it go 4,5,3,4.
}

// argc: This parameter is an integer which represents the number of command-line arguments passed to the program, including the name of the program itself.
// e.g., `./recursion arg1 arg2 arg3 - this would be equal to 4.

// argv: This is an array of strings that contains the command-line arguments passed to the program. The first ellement of this array (`argv[0]`) is the name
// of the program itself, and the remaining elements (`argv[1]`, `argv[2]`,...) are the actual command-line arguments. 

// In this particular case, they aren't being used so just int main() would be fine.
int main(int argc, char* argv[]){ 
  verticalPrint(4534);
  return 0;
} 


// 4534   4
//  |     |
// 453    45
//  |     |
// 45     453
//  |     |
// 4      4534

// tl;dr: The function prints the digits and each recursive call prints the most significant digit to least,
// followed by the other digits, until all digits have been printed. 

