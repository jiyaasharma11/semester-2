//q3 farenheit to celsius and vice versa
#include<iostream>
#include<iomanip>
int main(){
    float c,f, temp;
    char choice;
    std::cout<<"enter temperature: ";
    std::cin>>temp;
    std::cout<<"enter c or f: ";
    std::cin>>choice;
    if (choice=='c'){
        std::cout<<"converting to farenheit \n";
        f= (9/5*temp)+32;
        std::cout<<"temperature in F is: "<<f;
    }
    else if(choice=='f'){
        std::cout<<"converting to celsius \n";
        c= (temp-32)*9/5;
        std::cout<<"temperature in C is: "<<c;

    }
   else{
    std::cout<<"invalid choice!";
   }}
