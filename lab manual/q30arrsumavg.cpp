// A payroll system maintains employee salary records. Implement a solution to accept salary of 
//10 employees in an array, compute total salary and average salary, then display the result.
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    float sal[10];
    int i, avg=0, total=0;
    cout<<"enter sal of 10 employees";
    for(i=0; i<10; i++){
        cin>>sal[i];
    }
    for(i=0; i<10; i++){
        total=total+sal[i];
    }
    avg=total/10;
    cout<<"total salary: "<<total<<endl;
    cout<<"avg salary: "<<avg;
}