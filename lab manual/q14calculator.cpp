// Develop a menu-driven calculator program in C++ to perform basic arithmetic operations. 
//The program should continue executing based on the user's choice and display the result of each operation.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b, out;
    char op;
    cout<<"enter operands a and b: ";
    cin>>a>>b;
    cout<<"enter operation {+, -, /, *, ^, % }: ";
    cin>>op;
    switch(op){
        case '+':
           cout<<"sum is: "<<a+b;
        break;

        case '-':
           cout<<"difference is: "<<a-b;
        break;

        case '*':
           cout<<"product is: "<<a*b;
        break;

        case '/':
            if(b==0)
                cout<<"cannot divide by zero";
            else
                cout<<"quotient is: "<<a/b;
        break;

        case '^':
           cout<<"power is: "<<(float)pow(a,b);
        break;

        case '%':
           cout<<"remainder is: "<<fmod(a,b);
        break;

        default:
            cout<<"enter valid choice of operation!";

    }
}