//program that calculates the total of a retail sale

#include<iostream>

using namespace std;

int main()
{
    int retail_price;
    double sales_tax_rate;
    double sales_tax;
    int total_sale;
    
    
    cout << "Enter the retail price of the item being purchased"<< " ";
    
    cin >> retail_price;
    
    cout << "Enter the amount of sales tax" << " ";
    
    cin >> sales_tax_rate;
    
    sales_tax = retail_price * sales_tax_rate ;
    
    
    cout << "The sales tax for the purchase is "<<sales_tax << " " <<"Dollars" ;
    
    return 0;
}
