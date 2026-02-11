//A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a 
//solution to calculate the roots of a quadratic equation.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a, b, c, d, x1, x2;
    cout<<"ax2 + bx + c=0"<<endl<<"enter a,b,c: ";
    cin>>a>>b>>c;
    d= (b*b)-4*(a*c);
    if(a==0)
        cout<<"not a quadratic equation! ";

    else if(d>=0){
        x1= ((-b)+ sqrt(d))/(2*a);
        x2= ((-b)- sqrt(d))/(2*a);
        cout<<"two real roots: "<<x1<<x2;}

    else if (d == 0) {
        x1 = -b / (2*a);
        cout << "One real root: "<< x1;}
    else
    
        cout<<"complex roots";
}