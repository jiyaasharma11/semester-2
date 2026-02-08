//div by 3 is buzz, by 5 is fuzz, by both is buzzfuzz
#include<iostream>
using namespace std;
int main(){
    int id; 
    cout<<id;
    if(id%3==0)
        cout<<"buzz";
    else if(id%5==0)
        cout<<"fuzz";
    else if(id%3==0 && id%5==0)
        cout<<"buzzfuzz";


}