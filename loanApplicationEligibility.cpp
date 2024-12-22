// This program determines whether a loan applicant qualifies for
 // a special loan interest rate. It uses nested if/else statements.
#include<iostream>
#include<ctime>
#include<cstdlib>
#include <string>
using namespace std;
int myFunc(){
    
    char employed;
    
    int yearsofwork;
    
    cout<< "Answer the following questions "<<endl;

    cout<< "Are you employed?";
    
    cin >> employed;
    
    if (employed == 'Y')
    {
        cout<<" Please tell me years of experience";
        cin>> yearsofwork;
        if (yearsofwork >=5 ){
            cout<<"Congrats , we can process your loan";
        }
        else 
        {
            cout<<"You need at least 5 years of experience to get the loan";
        }
    }
    else
    {
        cout<< "Sorry you are not eligible for loan ";
    }
    
    return 0;
}


int main() 
{
    // Record the start time
    clock_t start = clock();

    // Code to be measured
    myFunc();

    // Record the end time
    clock_t end = clock();

    // Calculate the time taken in seconds
    double time_taken = double(end - start) / CLOCKS_PER_SEC;

    // Output the result
    std::cout << "Time taken: " << time_taken << " seconds" << std::endl;

    return 0;
}
