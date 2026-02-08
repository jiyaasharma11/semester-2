#include<iostream>
using namespace std;
int main(){
    int upper=0, lower=0, dig=0, special=0;
    string pass;
    cin>>pass;
    int len=pass.length();
    for(int i=0;i<len;i++) {
        char ch=pass[i];
    if(ch>='A' && ch<='Z')
            upper = 1;
        else if(ch >= 'a' && ch <= 'z')
            lower= 1;
        else if(ch >= '0' && ch <= '9')
            dig =1;
        else if(ch == '@' || ch == '#' || ch == '$' || ch == '%' ||
                ch == '!' || ch == '&' || ch == '*')
            special =1;
    }
    if(lower && upper && dig && special)
        cout<<"Strong, valid password";
    else
        cout<<"Weak password";

}
