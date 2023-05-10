// Write a function that takes a vector (say of integers) and searches for a particular value of x, returning true if and only if x is found. 

#include <iostream>
#include <vector>
using namespace std; 

bool vectorNumberSearch(vector<int> V, int n) //
{
  int size = V.size(); // Storing the vector size in a variable named size
  for (int i = 0; i < V.size(); i++) // Standard for loop checker if there's anything in a vector. 
    {
      if (V[i] == n) // If the value in the vector is what we're looking for "n" then return true. (In this case, 1 or 0 where 1 is true 0 is false.)
        return true;
    }
  return false;
}

int main() 
{
  vector<int> L = {2, 3, 4, 5, 6}; // Providing an example vector to run the function on.
  cout << vectorNumberSearch(L, 3) << "\n"; // // Calling the function here where L will be ran through the function as vector "V" and 3 is the integer we are looking for as "n".
  return 0;
}
