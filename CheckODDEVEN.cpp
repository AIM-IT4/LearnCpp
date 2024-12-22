//if-else statement 
#include<iostream>
#include<ctime>
#include<cstdlib>
#include <string>
using namespace std;
int myFunc(){
    
    int num;
    
    double remain;
    
    //enter three scores I'll average them
    cout<< "Enter a number to check odd or even";
    cin >> num;
    
    remain = num % 2;
    
    cout<<"Your reminder  is " << remain << endl;
    
    if (remain ==0 )
    {
        cout<<" Your entered number is even";
        
    }
    else {
        cout<< "Your entered number is odd";
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
