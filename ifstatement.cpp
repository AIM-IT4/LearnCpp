//if statement 
#include<iostream>
#include<ctime>
#include<cstdlib>
#include <iomanip>
#include <string>
using namespace std;
int myFunc(){
    
    int score1,score2, score3;
    
    double average;
    
    //enter three scores I'll average them
    
    cin >> score1>>score2>>score3;
    
    average = (score1+score2+score3)/3.0;
    
    cout<<"Your Average score is " << average << endl;
    
    if (average > 70)
    {
        cout<<" Congrats ! , you have higher average score than others";
        
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
