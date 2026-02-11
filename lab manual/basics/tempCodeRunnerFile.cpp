#include<iostream>
using namespace std;
void findminmax(int arr[], int size, int &minVal, int &maxVal){

    int i;
    maxVal=arr[0];
    for(i=0; i<size; i++){
       if(arr[i]>maxVal)
        maxVal=arr[i];
    }
    cout<<"max value in array is: "<<maxVal<<endl;

    minVal=arr[0];
    for(i=0; i<size; i++){
       if(arr[i]<minVal)
        minVal=arr[i];
    }
    cout<<"min value in array is: "<<minVal<<endl;

}
int main(){
     int i, n;
    cout<<"enter number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array: "<<endl;
    for(i=0; i<n; i++){
        cin>>arr[i];
}
    int maxval, minval;
    findminmax(arr, n, minval, maxval);
    return 0;
}