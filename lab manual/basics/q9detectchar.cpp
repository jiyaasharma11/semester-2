// A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a 
//solution to classify the symbol. 
#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    if(c=='a'|| c=='e'||c=='i'||c=='o'||c=='u')
        cout<<"vowel";
    else if(c>='0' && c<='9')
        cout<<"numeric";
    else
        cout<<"consonant";
}