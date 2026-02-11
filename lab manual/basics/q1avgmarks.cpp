// A teacher wants to calculate the average marks of three students to determine the class performance. 
//Implement a solution to accept three numbers and compute their average. 
#include<iostream>
using namespace std;
int main(){
    float m1, m2, m3,s;
    cout<<"enter marks of three students: ";
    cin>>m1>>m2>>m3;
    s=m1+m2+m3;
    cout<<"Average marks: ";
    cout<<(s/3);

}