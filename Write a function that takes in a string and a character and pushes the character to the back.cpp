// Write a function that takes in a string and a character and pushes the character to the back for example, "character" takes "c" and returns "haratercc"
#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;

string move(string str, char c) // Define a function named "move" that takes a string and a character as arguments
{
  string result; // Declare a string variable named "result"
  for (char ch : str) // Loop through each character "ch" in the input string "str"
    {
      if (ch != c) // If the character is not equal to the input character "c" 
      {
        result.push_back(ch); // Append the character to the "result" string
      }
    }
  // Count the number of occurrences of the input character "c" in the input string "str". ` 
  // [c](char ch){return ch == c;} ` is a lambda function. `[capture-list] (parameters) -> return-type { function body }. 
  // count_if is a standard library function that can be used to count the number of elements in a range that satisfy 
  // a certain condition. Here's the format: count_if(InputIt first, InputIt last, UnaryPredicate p);. 
  // First and Last define the range while p is a function that takes an element as an argument and returns `true` 
  // if the element satisfies the condition. Otherwise it is `false.` 
  int count = count_if(str.begin(), str.end(), [c](char ch){return ch == c;}); 
  result.append(count, c); // Append "count" copies of the input character "c" to the end of the "result" string. Reminder: Append takes an object as an argument and adds it to the end of an existing list.
  return result; // Return resulting string
}

int main()
{
  string str = "character"; // Declare and intialize a string variable named "str"
  char c = 'c'; // Declare and intialize a character variable named "c"
  string result = move(str, c); // Call "move" function with "str" and "c" as arguments, and store the resulting string in a variable named "result"
  cout << "After function call: " << result << endl; // Print the resulting string to the console
  return 0; 
}


