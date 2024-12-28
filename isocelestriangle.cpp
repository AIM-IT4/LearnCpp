#include<iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter the number of rows for the triangle: ";
    cin >> n;

    for (int i = 1; i <= n; i++) // Outer loop for rows
    {
        // Inner loop for spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Inner loop for stars
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }

        cout << endl; // Move to the next row
    }

    return 0;
}
