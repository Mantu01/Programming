// WAP to calculate the area and perimeter of a triangle whose all three sides are given by the user.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter the first side : ";
    cin>>a;
    cout<<"Enter the second side : ";
    cin>>b;
    cout<<"Enter the third side : ";
    cin>>c;
    float s=(a+b+c)/2;                // s is the semi-perimeter.
    cout<<endl<<"Area = "<<sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<endl<<"Perimeter = "<<2*s;
    return 0;
}