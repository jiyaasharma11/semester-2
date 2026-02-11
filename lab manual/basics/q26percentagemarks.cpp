// The school report card system stores subject marks for each student. 
//Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result.
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a,b,c,d,e,total, perc;
    cout<<"enter marks of 5 subjects out of 100: ";
    cin>>a>>b>>c>>d>>e;
    total=a+b+c+d+e;
    perc= (total/5);
    cout<<"percentage scored is: "<<perc;
}