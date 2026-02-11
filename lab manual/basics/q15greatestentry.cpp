//A data analytics tool finds the maximum sales figure from multiple entries. 
//Implement a solution to accept ‘n’ numbers and display the largest.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i,n, max=0;
    cout<<"enter number of entries: ";
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    for(i=0; i<n; i++){
        max=arr[0];
        for(i=1; i<n; i++){
            if(arr[i]>max)
                max=arr[i];
            else if(max>i)
                max= max;
    }
    cout<<"greatest entry is: "<< max;
}
}