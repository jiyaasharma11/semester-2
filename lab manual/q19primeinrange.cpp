// A network security system generates prime numbers in a range for encryption key pools. Implement a 
//solution to find all prime numbers within a given range. 
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int a,b,i,j;
    
    cout<<"enter range of numbers to check:";
    cin>>a>>b;
    if(a>b || a==b){
        cout<<"enter valid range!";
        }
    for(i=a;i<=b;i++){
        int flag=1;
        for(j=2;j<=i/2; j++){
            if(i%j==0){
                flag=0;
                break;}
        }
    if(flag)
        cout<<i;
    }
  
}