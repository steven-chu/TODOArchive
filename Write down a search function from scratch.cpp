// Write down the search function from scratch
// DISCLAIMER: THIS ONLY FINDS SINGLE WORD STRINGS!!!
#include <iostream>
#include <string>
using namespace std;

size_t find(const string& s1, const string& s2) // Think of this as a differently named vector
{
  size_t index = 0; // Index start at 0
  size_t s1_length = s1.length(); // Declaring and initializing variables to hold the lengths of the strings. 
  size_t s2_length = s2.length(); // Ex: if s1 was monkey, it would hold monkey.

  while (index <= s1_length - s2_length) // Check each character in the first string
    {
      bool matchFound = true;
      for (size_t i = 0; i < s2_length; i++) // Check each character in the second string
        {
          if(s1[index+i] != s2[i]) // This compares the characters at the current positions of the two strings. More in-depth explanation on the bottom of the code. 
          {
            matchFound = false; // If they don't match, set the flag to false
            break; // Break out of loop
          }
        }
      if (matchFound) { 
        return index; // If a match was found, then return the current index.
      }
      index++; // Continue on to the next character in the first string
    }
  return string::npos; // If nothing was found, return SPECIAL VALUE `npos`. 
}
  
int main()
{
  // Declaring two strings to search for a match
  string s1 = "Hello World"; // Spaces count for index
  string s2 = "World";
  // Calling the find function and storing the result in the index variable
  size_t index = find(s1, s2);
  // Check if a match was found and if none, print "String not found."
  if (index == string::npos)
  {
    cout << "String not found" << endl;  
  } else {
    cout << "String found at index " << index << endl;   
      }
  return 0;
}

// In this code, index is used to keep track of the starting position in s1 for the current iteration of the outer while loop, 
// while i is used to iterate over the characters in s2.

// The reason why index is ahead of i is because we want to compare the characters in s2 to the corresponding characters in s1, 
// starting at the current position given by index. We use index+i to access the character at the i-th position in s2 in relation 
// to the current position given by index in s1.

// For example, if index is 3 and i is 1, then index+i is 4, and we are comparing the second character of s2 with the fifth character 
// of s1. Checking the index output and then counting the characters + spaces of s1 will make it easier to understand.




