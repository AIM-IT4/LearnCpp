#include <iostream>
using namespace std;

// Function to calculate factorial recursively
unsigned long long factorialRecursive(int n) {
    if (n <= 1) // Base case
        return 1;
    return n * factorialRecursive(n - 1); // Recursive call
}

int main() {
    int number;
    cout << "Enter a number to calculate its factorial: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << number << " is " << factorialRecursive(number) << endl;
    }

    return 0;
}
