// Write a function that takes a vector V of integers which is sorted, and returns a vector of the unique integers from V. E.g., if V = (1,2,2,3,3,3,4}, then the result should be {1,2,3,4}. 
#include <vector>
#include <iostream>
using namespace std;

vector<int> searchForDupe(const vector<int>& V) // Needs to return a vector, don't need to modify so read it through by constant reference.
{
  vector<int> N; // Storing the computation in vector N.
  for (int i = 0; i < V.size(); i++) // For loop to go through all the contents in the vector
  {
    if(i == 0 || V[i] != V[i-1]) 
      N.push_back(V[i]); // Add the value of current index to the vector if index starts at zero OR the value of the current index does not equal the previous.
  }
  return N; 
}

// Running through a test case.
int main() 
{
  vector<int> L = {1,2,2,3,3,3,4}; // Example vector
  cout << "The non-adjusted vector is: " << endl;
  for (int i = 0; i < L.size(); i++) 
    {
  cout << L[i] << " "; // Prints the contents of vector L.
    }
  cout << "\n"; 
  
  vector<int> adjustedNumbers = searchForDupe(L); // Calling the function `searchForDupe` through L and storing the contents of the new vector in vector `adjustedNumbers`.
  cout << "The adjusted vector without any duplicate integers is: " << endl;
  for (int i = 0; i < adjustedNumbers.size(); i++) // Used to check the size of the new vector. 
    {
      cout << adjustedNumbers[i] << " ";
    }
  cout << "\n";
  return 0;
}


