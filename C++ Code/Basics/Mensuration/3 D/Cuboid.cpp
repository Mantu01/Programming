// WAP to calculate Volume,TSA and LSA of a cuboid  .
#include<iostream>
using namespace std;
int main(){
    float l,b,h;
    cout<<"Enter the length : ";
    cin>>l;
    cout<<"Enter the breadth : ";
    cin>>b;
    cout<<"Enter the height : ";
    cin>>h;
    cout<<"Volume = "<<l*h*b<<endl;
    cout<<"Total Surface Area = "<<2*(l*h+l*b+b*h)<<endl;
    cout<<"Lateral Surface Area = "<<2*(l*h+b*h);
    return 0;
}