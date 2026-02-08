// A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. Implement a solution to 
//check the triangle type based on its sides.
#include<iostream>
using namespace std;
int main(){
    float s1, s2, s3;
    cout<<"enter three sides of triangle: ";
    cin>>s1>>s2>>s3;
    if(s1==s2 && s1==s3)
        cout<<"equilateral triangle";
    else if (s1==s2 || s2==s3 || s3==s1)
        cout << "isosceles";
    else
        cout << "scalene";
}