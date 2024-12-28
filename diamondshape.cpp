#include<iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter the number of rows for the upper part of the diamond: ";
    cin >> n;

    // Upper part of the diamond (isosceles triangle)
    for (int i = 1; i <= n; i++) // Outer loop for rows
    {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }

        cout << endl; // Move to the next line
    }

    // Lower part of the diamond (inverted isosceles triangle)
    for (int i = n - 1; i >= 1; i--) // Outer loop for rows
    {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }

        cout << endl; // Move to the next line
    }

    return 0;
}
