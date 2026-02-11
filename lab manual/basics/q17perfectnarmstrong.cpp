// A learning application analyzes numbers for mathematical properties. 
//Design a solution to check whether a given number is a Perfect number or an Armstrong number. 
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,i,s=0;
    int temp, dig=0, s2=0;
    int div[100], k=0;
    cout<<"enter value to check: ";
    cin>>a;
    for(i=1; i<a;i++){
        if(a%i==0){
            div[k]=i;
            k++;
        }
    }
    for(i=0;i<k;i++)
        s=s+div[i];
    if(s==a && a!=0)
        cout<<"perfect number";
    else
        cout<<"not a perfect no!";
 
    temp=a;
    if (a == 0)
    dig = 1;

    while(temp>0){
        dig++;
        temp/=10;
    }
    temp=a;
    while (temp > 0) {
        int d = temp % 10;
        s2+= pow(d, dig);
        temp /= 10;
    }

    if (s2==a)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

}