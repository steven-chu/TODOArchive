// Write a function that takes a vector of integers and returns a new vector of integers which contains only the odd integers
#include <iostream>
#include <vector>
using namespace std;

vector<int> oddNumberChecker(const vector<int>& v) // Don't need to modify the vector so need to pass it by constant reference to prevent making a copy.
{
  vector<int> newVector = {}; // Providing space to output the odd integers 
  for (int i = 0; i < v.size(); i++) // To check the size of the vector
    {
      if(v[i] % 2 != 0) // Computation to check oddness. If value in an index is not divisible by two...
        newVector.push_back(v[i]); //  Add a new element to the end of the vector. This is also the C++ equivalent to the append() function in python.
    }
  return newVector; // Store the contents in newVector. 
}

int main()
{
  vector<int> currentVector = {4,2,3,7,1,6,10,13,12}; // Example vector
  cout << "The current vector contains: " << endl;
  for (int i = 0; i < currentVector.size(); i++) { // To go through the vector.
  cout << currentVector[i] << " "; // Print out the contents in the current vector.
  }
  cout << "\n"; // New line print to apply more space.
  vector<int> oddNumbers = oddNumberChecker(currentVector); // New vector to apply the called function.
  
  cout << "The vector with only odd numbers are: " << endl;
  for (int i = 0; i < oddNumbers.size(); i++) // To check how much elements are in the vector
    {
      cout << oddNumbers[i] << " "; // Print the elements stored in the vector. This is where `newVector`'s results are shown.
    }
  return 0;
}









