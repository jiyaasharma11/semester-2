//A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total 
//expenses and apply a discount accordingly. 
#include<iostream>
using namespace std;
int main(){
    int n;
    float final, price;
    cout<<"enter no. of articles in order: ";
    cin>>n;
    cout<<"enter price of article: ";
    cin>>price;
    if(n>1000){
        final= 0.9*(n*price);
        cout<<"total amount to pay after 10perc discount: "<<final;
    }
    else{
        cout<<"total amount to pay: "<<(n*price);
    }
}