//A game compares three players' scores to find who is ahead. Implement a solution to accept three scores 
//and identify the winner. 
#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"enter scores of three players: ";
    cin>>a>>b>>c;
    if(a>b && a>c)
            cout<<"winner is: "<<a;
    else if(b>a && b>c)
         cout<<"winner is: "<<b;
    else if(c>a && c>b)
         cout<<"winner is: "<<c;
}