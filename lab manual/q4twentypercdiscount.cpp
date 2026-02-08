//q4 total bill amount w 20 perc discount
#include<iostream>
#include<iomanip>
int main(){
    int in, qty;
    float price, amnt;
    std::cout<<"enter item no.: ";
    std::cin>>in;
  
    std::cout<<"enter quantity: ";
    std::cin>>qty;

    std::cout<<"enter unit price: ";
    std::cin>>price;
   
    amnt= (qty*price)*0.8;
    std::cout<<"final bill amount after 20 perc disc is: "<<amnt;


}