//A calendar app calculates whether February has 29 days. Implement a solution to check if a year is a leap year or not
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter year: ";
    cin>>year;
    if(year%4==0)
        cout<<"leap year";
    else
        cout<<"not a leap year";
} 