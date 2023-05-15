// Write a function that takes a vector of integers and returns a boolean value indicating whether or not the vector is a permutation of its indices. 
// That is, you want to check if the vector contains some rearrangement of the integers {0.1,...,n-1},where n is the size of the vector. 
// Examples of when you should return true:
// V = {0,1,2}
// V = {1,0}
// V = {3,1,0,2}
//
// Examples of when you should return false:
// V = {1,2,3} - Does not have 0
// V = {1,1} - 1 is repeated and doesn't have a 0
// V = {2,1,0,2} - 2 is repeated





#include <iostream>
#include <vector> 
using namespace std;

bool isperm(const vector<int>& V) 
{
  if(V.empty()) { // Base case, if a vector given is empty, return 0. 
    cout << "Empty Vector. 0" << endl;
    return false;
  }
  vector<bool> indices(V.size(), false); // Initializing a vector of flags. This is set as false first.
  for (int i = 0; i < V.size(); i++) {
    // If element in vector is negative or element in vector is bigger than the size or has a dupe, 
    // then return false. Since the flag is initially set to false, it checks the vector for unique values and will be set to true for unique values.
    if (V[i] < 0 || V[i] >= V.size() || indices[V[i]]) { 
      cout << "0" << endl;
      return false;
    }
    indices[V[i]] = true; // otherwise return true.
  }
  cout << "1" << endl;
  return true;
}

int main()
{
 vector<int> test = {1,0,3,2};
  isperm(test);
  return 0;
}



