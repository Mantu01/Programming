// WAP to calculate Volume,TSA and CSA of a Cone.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float r,h,s;                        // s = slant height.
    cout<<"Enter the base radius : ";
    cin>>r;
    cout<<"Enter the height : ";
    cin>>h;
    s=sqrt(h*h+r*r);
    cout<<"Volume = "<<3.14*r*r*h/3<<endl;
    cout<<"Total Surface Area = "<<3.14*r*(r+s)<<endl;
    cout<<"Curved Surface Area = "<<3.14*r*s;
    return 0;
}