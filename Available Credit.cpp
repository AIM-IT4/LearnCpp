// program that calculates a customer’s available credit.

#include<iostream>

using namespace std;

int main()
{
    int max_credit;
    int used_credit;
    int available_credit;
    
    
    cout << "Enter the customer’s maximum credit";
    
    cin >> max_credit;
    
    cout << "Enter the amount of credit used by the customer”";
    
    cin >> used_credit;
    
    available_credit= max_credit- used_credit;
    
    cout << "the available_credit for the customer is "<<available_credit;
    
    return 0;
}
