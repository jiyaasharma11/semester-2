#include<iostream>
using namespace std;
bool isprime(int n ){
    int i, flag=0;
    if(n<=1000000000 && n>=-1000000000){
        if(n<0){
        n=-1*n;
        }
    for(i=2; i<n/2; i++){
        if(n%i==0)
            flag++;
    }
    if(flag>0)
        return 0 ;
    else
        return 1;

}
}
int main(){
    int n;
    cout<<"enter a number to check if prime: ";
    cin>>n;
    cout<<isprime(n);

}