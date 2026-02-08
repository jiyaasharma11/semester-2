//calculate employees’ net salaries, including a fixed 12% bonus for each worker. 
//accept the number of employees and their basic salary. Compute bonus, net salary, display results
#include<iostream>
using namespace std;
int main(){
    int i,n;
    float base, bonus, net;
    cout<<"no. of employees: ";
    cin>>n;
    for(i=0;i<n; i++){
        cout<<"enter base salary:";
        cin>>base;
        bonus= 0.12*base;
        net=base+bonus;
        cout<<"sal w bonus:"<<net;
        cout<<endl;
       }

}
