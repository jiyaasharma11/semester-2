#include<iostream>
using namespace std;
void swapbyref(int *a, int *b){
    cout<<"A and B before swapping by ref:"<<*a<<*b<<endl;
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<"A and B after swapping by ref:"<<*a<<*b<<endl;
}
void swapbyval(int a, int b){
    cout<<"A and B before swapping by val:"<<a<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"A and B after swapping by val:"<<a<<b<<endl;
}
int main(){
    int x,y;
    cout<<"provide 2 integers:";
    cin>>x>>y;
    cout<<"x and y before fn calling:"<<x<<y<<endl;
    swap(&x,&y);
    cout<<"x and y after function calling:"<<x<<y; //only executes in int main hence no swap
    return -1;


}