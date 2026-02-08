//A cybersecurity tool verifies prime numbers used in encryption keys. Implement a solution to accept a 
//number and check whether it is prime. 
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int  i, a, c=0;
    cout<<"enter value to check :";
    cin>>a;
    if(a<=1)
        cout<<"not prime!";
    for(i=2; i<a; i++){
        if(a%i==0)
           c++;
    }
    if(c==0)
        cout<<"prime number!";
    else
        cout<<"not prime!";
}
