// While loops tests condition first then executes the statements
//Ex1

// For count <5 as we are starting from 1 so it will stop printing at count =4 so we will have four lines of messages
#include<iostream>

using namespace std;

int main ()
{
    int count=1;
    
    while (count<5){
        cout<<"My favourite day is monday "<<endl;
        count= count+1;
    }
    
    return 0;
}
//Ex 2 what if we change count ==10 , so nothing will be printing as condition is to check count <5
