// Write a loop that prints the sum of the first n odd cubes 
#include <iostream>
using namespace std; 

int main() {
    int n;
    cout << "Enter a positive integer n: " << endl;
    cin >> n; // Choosing how many odd cubes we want to calculate the sum of 
    
    int sum = 0; // Sum to start at 0 
    for (int i = 1; i <= n; i++) // We start at 1 and if i is less than or equal to n, we stop calculating the sum. 
    {
        int odd_cube = (2*i-1) * (2*i-1) * (2*i-1); // Math to calculate the odd_cube
        sum += odd_cube; // sum = odd_cube + sum 
    }
    cout << "The sum of the first " << n << " odd cubes is " << sum << endl;

    return 0;
}
