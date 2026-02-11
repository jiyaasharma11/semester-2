// A String-matching tool validates if IDs are palindromes. Implement 
//a solution to check whether a given ID is a palindrome.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter string: ";
    cin>>s;

    int i=0, j=s.length()-1, f=1;
    while(i<j){
        if(s[i]!=s[j]){
           f=0;
           break;}
    i++;
    j--;
    }
    if(f)
        cout<<"palindrome";
    else
        cout<<"not a palindrome";
}
