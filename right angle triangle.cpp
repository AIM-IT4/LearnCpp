#include<iostream>

using namespace std;

int main()
{
    int n;

    cout << "Please enter the number of rows for the triangle: ";
    cin >> n;

    for (int i = 0; i <= n; i++) // Loop for rows
    {
        for (int j = 0; j <= i; j++) // Loop for columns
        {
            cout << "* ";
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
