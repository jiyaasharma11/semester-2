//A weather monitoring app records 30-day temperature logs. Implement a solution to store daily 
//temperatures in an array and display the minimum temperature for the month.
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    float temp[30];
    int i;
    cout<<"enter temp of 30 days: ";
    for(i=0; i<30; i++)
        cin>>temp[i];
    int min= temp[0];
    for(i=0; i<3; i++){
        if(min>temp[i])
             min=temp[i];
    }
    cout<<"minimum temp is: "<<min;
    
}