//hollow asterisk diamond
#include<iostream>
using namespace std;
int main(){
    int i,j,t,n;
    cout<<"hieght of half diamond: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(t=1;t<=n-i;t++)
            cout<<" ";
    

    for(j=1; j <= 2*i - 1; j++) {
            if(j==1 ||j==(2*i) - 1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
}

for(i=n-1;i>=1;i--) {
        for(t=1;t<=n-i;t++)
            cout<<" ";
        for(j=1;j<=(2*i)-1;j++) {
            if(j==1||j==(2*i)-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

}