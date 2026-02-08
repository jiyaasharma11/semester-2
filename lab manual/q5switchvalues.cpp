//A student wants to swap the values of two variables for practising coding basics. 
//Implement a solution to swap two numbers using different techniques.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two values a and b:";
    cin>>a>>b; //a=3, b=2
    a=a+b; //a=5
    b=a-b; //b=5-2=3, b=3
    a=a-b; //a=5-3=2, a=2

    cout<<"a="<<a;
    cout<<"b="<<b;
}