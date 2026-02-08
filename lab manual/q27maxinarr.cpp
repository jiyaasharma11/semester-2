//A supermarket software maintains item price lists. Implement a solution to store the prices of 10 
//items in an array and display the maximum price.
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int i;
    float prices[10];
    cout<<"enter prices of 10 articles: ";
    for(i=0; i<10; i++){
        cin>>prices[i];
    }
    float max=prices[0];
    for(i=0; i<10; i++){
        if(prices[i]>max)
            max=prices[i];1
    }
    cout<<"max price is: "<< max;
}