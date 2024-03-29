// WAP to calculate area and perimeter of a rectangle,length and breadth are given by user.
#include<iostream>
using namespace std;
int main(){
    float l,b;
    cout<<"Enter the length : ";
    cin>>l;
    cout<<"Enter the breadth : ";
    cin>>b;
    cout<<endl<<"Area = "<<l*b<<endl;
    cout<<"Perimeter = "<<2*(l+b);
    return 0;
}