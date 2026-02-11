//pattern{A, AB, ABC,..}
//pattern {1 2 3 4 5; 1 2 3 4 5; ...}
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=0; i<n;i++ ){//rows
        for(j=0; j<=i; j++)//columns
            cout<<char('A'+j)<<" ";
    cout<<endl; //change of line
    }
}