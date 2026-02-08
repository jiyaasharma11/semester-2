//A data processing system classifies even and odd inputs separately. Implement a solution to 
//store 5 elements in an array, compute sum of all even and sum of all odd numbers. 
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int el[5];
    int i, so=0, se=0;
    cout<<"enter 5 elts in array:";
    for(i=0; i<5; i++){
        cin>>el[i];
    }
    for(i=0; i<5; i++){
        if(el[i]%2==0){
            se=se+el[i];
        }
        else if(el[i]%2 !=0){
            so=so+el[i];
        }
    }
    cout<<"sum of odd values: "<<so<<endl;
    cout<<"sum of even values: "<<se;


}